#include "render.h"
#include "imgui.h"
#include "igl/opengl/glfw/imgui/ImGuiMenu.h"
#include "igl/opengl/glfw/imgui/ImGuiPlugin.h"
#include <igl/opengl/glfw/Viewer.h>
#include <igl/combine.h>

igl::opengl::glfw::Viewer viewer;
igl::opengl::glfw::imgui::ImGuiPlugin plugin;
igl::opengl::glfw::imgui::ImGuiMenu menu;
std::vector<std::string> meshes_name;

void ConvertSgdMeshToIglMesh(Mesh mesh, igl::opengl::ViewerData *viewerData) {
    Eigen::MatrixXd V = Eigen::MatrixXd(mesh.vertices.size(), 3);
    Eigen::MatrixXi F = Eigen::MatrixXi(mesh.triangles.size(), 3);
    Eigen::MatrixXd VN = Eigen::MatrixXd(mesh.vertex_normals.size(), 3);
    Eigen::MatrixXd UV = Eigen::MatrixXd(mesh.uv.size(), 2);
    Eigen::MatrixXd Ambient = Eigen::MatrixXd(mesh.vertices.size(), 4);
    Eigen::MatrixXd Diffuse = Eigen::MatrixXd(mesh.vertices.size(), 4);
    Eigen::MatrixXd Specular = Eigen::MatrixXd(mesh.vertices.size(), 4);

    for (auto i = 0; i < mesh.vertices.size(); i++) {
        auto vec3 = mesh.vertices.data()[i];
        V.row(i) << vec3.x, vec3.y, vec3.z;

        Ambient.row(i) << mesh.ambient[0].x, mesh.ambient[0].y, mesh.ambient[0].z, mesh.ambient[0].w;
        Diffuse.row(i) << mesh.diffuse[0].x, mesh.diffuse[0].y, mesh.diffuse[0].z, mesh.diffuse[0].w;
        Specular.row(i) << mesh.specular[0].x, mesh.specular[0].y, mesh.specular[0].z, mesh.specular[0].w;
    }

    for (auto i = 0; i < mesh.uv.size(); i++) {
        auto vec3 = mesh.uv.data()[i];
        UV.row(i) << vec3.x, vec3.y;
    }

    for (auto i = 0; i < mesh.triangles.size(); i++) {
        auto vec3 = mesh.triangles.data()[i];
        F.row(i) << vec3.x, vec3.y, vec3.z;
    }

    for (auto i = 0; i < mesh.vertex_normals.size(); i++) {
        auto vec3 = mesh.vertex_normals.data()[i];
        VN.row(i) << vec3.x, vec3.y, vec3.z;
    }

    viewerData->V_normals = VN;
    viewerData->V_uv = UV;
    viewerData->V_material_ambient = Ambient;
    viewerData->V_material_diffuse = Diffuse;
    viewerData->V_material_specular = Specular;
    viewerData->set_mesh(V, F);
    //viewerData->compute_normals();

    if (!mesh.textures.empty() && mesh.textures[0] != nullptr) {
        auto texture = mesh.textures[0];
        viewerData->set_texture(texture->GetRed(), texture->GetGreen(),
                                texture->GetBlue());
        viewerData->show_texture = true;
    }

    viewerData->set_colors(Eigen::RowVector3d(1, 1, 1));
}

void DrawTriangleMeshes(std::vector<Mesh> meshes) {
    for (auto mesh: meshes) {
        meshes_name.insert(meshes_name.end(), mesh.mesh_name.begin(), mesh.mesh_name.end());
        ConvertSgdMeshToIglMesh(mesh, &viewer.data());
        viewer.append_mesh();
    }

    viewer.core().lighting_factor = 1.0f;
}

void InitVisualizer() {
    viewer.plugins.push_back(&plugin);
    plugin.widgets.push_back(&menu);

    menu.callback_draw_viewer_menu = [&]() {
        menu.draw_viewer_menu();

        if (ImGui::CollapsingHeader("Meshes Custom Info", ImGuiTreeNodeFlags_DefaultOpen)) {
            const float width = ImGui::GetWindowWidth();
            const float combo_width = width * 0.85f;
            ImGui::SetNextItemWidth(combo_width);

            static int idx_choice = 0;

            if(ImGui::BeginCombo("##custom combo", meshes_name[idx_choice].c_str()))
            {
                for (int n = 0; n < meshes_name.size(); n++) {
                    bool is_selected = (idx_choice == n);

                    if (ImGui::Selectable(meshes_name[n].c_str(), is_selected)) {
                        idx_choice = n;
                    }

                    if (is_selected) {
                        ImGui::SetItemDefaultFocus();
                    }
                }

                ImGui::EndCombo();
            }

            viewer.selected_data_index = idx_choice;
        }
    };
}

void RunVisualizer() {
    viewer.launch(true, false, "Model Extractor");
}

void ExportMdl(std::vector<Mesh> meshes, std::string filename) {
    viewer.save_mesh_to_file(filename + ".obj");
}
