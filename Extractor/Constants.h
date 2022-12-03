#pragma once

#include <string>

// PS2 constants
const int PS2_SECTOR_SIZE = 0x800;

// Fatal Frame 1 constants
const int NUM_FILES_US_ZERO = 0x769;

// Fatal Frame 2 constants
std::string filename_path[54] =
    {
        "bin/data/tim/",
        "bin/data/",
        "bin/data/enemy/",
        "bin/data/se/",
        "bin/adpcm/",
        "bin/movie/",
        "bin/data/3ddata/room/pk2/",
        "bin/data/3ddata/room/pzb/",
        "bin/data/3ddata/room/mh/",
        "bin/data/3ddata/room/zld/",
        "bin/data/3ddata/furniture/",
        "bin/data/3ddata/door/",
        "bin/data/3ddata/item/",
        "bin/data/3ddata/camera/",
        "bin/data/3ddata/man/mdl/",
        "bin/data/3ddata/man/anm/",
        "bin/data/3ddata/man/anm/Auto_ghost/",
        "bin/data/event/",
        "bin/data/msg/",
        "bin/data/tim/title/",
        "bin/data/tim/hint/",
        "bin/data/damy/",
        "bin/data/scene/",
        "bin/data/tim/calibration/",
        "bin/data/tim/test2D/",
        "bin/data/tim/menu/",
        "bin/data/tim/chapter/",
        "bin/data/tim/item/",
        "bin/data/tim/bg/",
        "bin/data/tim/event2D/",
        "bin/data/tim/map/",
        "bin/data/tim/puzzle/",
        "bin/data/tim/loading/",
        "bin/data/tim/kusabi/",
        "bin/data/tim/savepoint/",
        "bin/data/tim/file/pocketbook/",
        "bin/data/tim/file/scrap/",
        "bin/data/tim/file/oldbook/",
        "bin/data/tim/file/map/",
        "bin/data/tim/file/photograph/",
        "bin/data/tim/snapshot/",
        "bin/data/tim/gameover/",
        "bin/data/icon/",
        "bin/data/tim/radio_crystal/",
        "bin/data/effect/",
        "bin/data/tim/ghost_list/",
        "bin/data/tim/album/",
        "bin/data/tim/setup/",
        "bin/data/tim/option/",
        "bin/data/tim/mission/",
        "bin/data/tim/gallery/",
        "bin/data/tim/lang_sl/",
        "bin/data/tim/clear/",
        "bin/data/subtitle/",
};


const int NUM_FILES_US_JP_ZERO2 = 0x106B;
const int NUM_FILES_EU_ZERO2 = 0x118B;

struct Zero2FileInfo
{
  char a;
  char directory;
  char b;
  char c;
  char *name;
};

inline Zero2FileInfo filename_dat_us[NUM_FILES_US_JP_ZERO2] =
    {
        {
            0,
            1,
            0,
            0,
            (char*) "comp_tes.pks"
        },
        {
            0,
            1,
            0,
            0,
            (char*) "comp_tes.cmp"
        },
        {
            1,
            0,
            0,
            0,
            (char*) "logo.pk2"
        },
        {
            1,
            0,
            0,
            0,
            (char*) "zero_logo.pk2"
        },
        {
            1,
            0,
            0,
            0,
            (char*) "vram_tex.pk2"
        },
        {
            1,
            0,
            0,
            0,
            (char*) "n_finder.pk2"
        },
        {
            1,
            0,
            0,
            0,
            (char*) "n_life.pk2"
        },
        {
            1,
            0,
            0,
            0,
            (char*) "n_life1.pk2"
        },
        {
            1,
            0,
            0,
            0,
            (char*) "n_life2.pk2"
        },
        {
            1,
            0,
            0,
            0,
            (char*) "n_life3.pk2"
        },
        {
            1,
            0,
            0,
            0,
            (char*) "outgame.pk2"
        },
        {
            1,
            0,
            0,
            0,
            (char*) "ScreenSaver.pk2"
        },
        {
            1,
            0,
            0,
            0,
            (char*) "ScreenSaver2.pk2"
        },
        {
            1,
            20,
            0,
            0,
            (char*) "os_r00.tm2"
        },
        {
            1,
            20,
            0,
            0,
            (char*) "os_r04.tm2"
        },
        {
            1,
            20,
            0,
            0,
            (char*) "ok_r04.tm2"
        },
        {
            1,
            20,
            0,
            0,
            (char*) "pht_hint_get_000.tm2"
        },
        {
            1,
            20,
            0,
            0,
            (char*) "pht_etc_get_000.pk2"
        },
        {
            1,
            25,
            0,
            0,
            (char*) "menu_bg.pk2"
        },
        {
            1,
            25,
            0,
            0,
            (char*) "menu_playdata.pk2"
        },
        {
            1,
            25,
            0,
            0,
            (char*) "menu_status.pk2"
        },
        {
            1,
            25,
            0,
            0,
            (char*) "menu_tourou.pk2"
        },
        {
            1,
            25,
            0,
            0,
            (char*) "menu_item.pk2"
        },
        {
            1,
            25,
            0,
            0,
            (char*) "menu_photo.pk2"
        },
        {
            1,
            25,
            0,
            0,
            (char*) "menu_file_cmn.pk2"
        },
        {
            1,
            25,
            0,
            0,
            (char*) "menu_file_top.pk2"
        },
        {
            1,
            25,
            0,
            0,
            (char*) "menu_file_photo.pk2"
        },
        {
            1,
            25,
            0,
            0,
            (char*) "menu_file_txt.pk2"
        },
        {
            1,
            25,
            0,
            0,
            (char*) "menu_file_map.pk2"
        },
        {
            1,
            25,
            0,
            0,
            (char*) "menu_map.pk2"
        },
        {
            1,
            25,
            0,
            0,
            (char*) "menu_radio.pk2"
        },
        {
            1,
            25,
            0,
            0,
            (char*) "menu_memo.pk2"
        },
        {
            1,
            25,
            0,
            0,
            (char*) "menu_camera.pk2"
        },
        {
            1,
            25,
            0,
            0,
            (char*) "menu_camera_edt.pk2"
        },
        {
            1,
            25,
            0,
            0,
            (char*) "menu_glist.pk2"
        },
        {
            1,
            25,
            0,
            0,
            (char*) "menu_map_snp_os00.pk2"
        },
        {
            1,
            25,
            0,
            0,
            (char*) "menu_chp1.pk2"
        },
        {
            1,
            25,
            0,
            0,
            (char*) "menu_chp2.pk2"
        },
        {
            1,
            25,
            0,
            0,
            (char*) "menu_chp3.pk2"
        },
        {
            1,
            25,
            0,
            0,
            (char*) "menu_chp4.pk2"
        },
        {
            1,
            25,
            0,
            0,
            (char*) "menu_chp5.pk2"
        },
        {
            1,
            25,
            0,
            0,
            (char*) "menu_chp6.pk2"
        },
        {
            1,
            25,
            0,
            0,
            (char*) "menu_chp7.pk2"
        },
        {
            1,
            25,
            0,
            0,
            (char*) "menu_chp8.pk2"
        },
        {
            1,
            25,
            0,
            0,
            (char*) "menu_chp9.pk2"
        },
        {
            1,
            25,
            0,
            0,
            (char*) "menu_chp10.pk2"
        },
        {
            1,
            25,
            0,
            0,
            (char*) "menu_chp11.pk2"
        },
        {
            1,
            25,
            0,
            0,
            (char*) "menu_chp_msn.pk2"
        },
        {
            1,
            28,
            0,
            0,
            (char*) "sora.pak"
        },
        {
            1,
            41,
            0,
            0,
            (char*) "gameover.pk2"
        },
        {
            1,
            30,
            0,
            0,
            (char*) "menu_map_soto.pk2"
        },
        {
            1,
            30,
            0,
            0,
            (char*) "menu_map_os1.pk2"
        },
        {
            1,
            30,
            0,
            0,
            (char*) "menu_map_os2.pk2"
        },
        {
            1,
            30,
            0,
            0,
            (char*) "menu_map_os0.pk2"
        },
        {
            1,
            30,
            0,
            0,
            (char*) "menu_map_ks0.pk2"
        },
        {
            1,
            30,
            0,
            0,
            (char*) "menu_map_ks1.pk2"
        },
        {
            1,
            30,
            0,
            0,
            (char*) "menu_map_ks2.pk2"
        },
        {
            1,
            30,
            0,
            0,
            (char*) "menu_map_ry1.pk2"
        },
        {
            1,
            30,
            0,
            0,
            (char*) "menu_map_ry2.pk2"
        },
        {
            1,
            30,
            0,
            0,
            (char*) "menu_map_ry0.pk2"
        },
        {
            1,
            30,
            0,
            0,
            (char*) "menu_map_tb1.pk2"
        },
        {
            1,
            30,
            0,
            0,
            (char*) "menu_map_tb2.pk2"
        },
        {
            1,
            30,
            0,
            0,
            (char*) "menu_map_tb0.pk2"
        },
        {
            1,
            30,
            0,
            0,
            (char*) "menu_map_chika.pk2"
        },
        {
            1,
            30,
            0,
            0,
            (char*) "menu_map_kuc.pk2"
        },
        {
            1,
            30,
            0,
            0,
            (char*) "menu_map_kuh.pk2"
        },
        {
            1,
            30,
            0,
            0,
            (char*) "menu_map_kur.pk2"
        },
        {
            1,
            40,
            0,
            0,
            (char*) "snp_soto_mis.pk2"
        },
        {
            1,
            40,
            0,
            0,
            (char*) "snp_soto_mis_e.pk2"
        },
        {
            1,
            40,
            0,
            0,
            (char*) "snp_soto_mis_w.pk2"
        },
        {
            1,
            40,
            0,
            0,
            (char*) "snp_soto_osa.pk2"
        },
        {
            1,
            40,
            0,
            0,
            (char*) "snp_soto_ido.pk2"
        },
        {
            1,
            40,
            0,
            0,
            (char*) "snp_soto_minami.pk2"
        },
        {
            1,
            40,
            0,
            0,
            (char*) "snp_soto_kir.pk2"
        },
        {
            1,
            40,
            0,
            0,
            (char*) "snp_soto_tac.pk2"
        },
        {
            1,
            40,
            0,
            0,
            (char*) "snp_soto_kita.pk2"
        },
        {
            1,
            40,
            0,
            0,
            (char*) "snp_soto_mon.pk2"
        },
        {
            1,
            40,
            0,
            0,
            (char*) "snp_soto_sas.pk2"
        },
        {
            1,
            40,
            0,
            0,
            (char*) "snp_soto_kur_mae.pk2"
        },
        {
            1,
            40,
            0,
            0,
            (char*) "snp_soto_min.pk2"
        },
        {
            1,
            40,
            0,
            0,
            (char*) "snp_soto_boc.pk2"
        },
        {
            1,
            40,
            0,
            0,
            (char*) "snp_soto_kuc.pk2"
        },
        {
            1,
            40,
            0,
            0,
            (char*) "snp_soto_san_iri.pk2"
        },
        {
            1,
            40,
            0,
            0,
            (char*) "snp_soto_san.pk2"
        },
        {
            1,
            40,
            0,
            0,
            (char*) "snp_soto_kur.pk2"
        },
        {
            1,
            40,
            0,
            0,
            (char*) "snp_soto_kro.pk2"
        },
        {
            1,
            40,
            0,
            0,
            (char*) "snp_soto_tac_ie.pk2"
        },
        {
            1,
            40,
            0,
            0,
            (char*) "snp_os1_gen.pk2"
        },
        {
            1,
            40,
            0,
            0,
            (char*) "snp_os1_kim.pk2"
        },
        {
            1,
            40,
            0,
            0,
            (char*) "snp_os1_nan.pk2"
        },
        {
            1,
            40,
            0,
            0,
            (char*) "snp_os1_iro.pk2"
        },
        {
            1,
            40,
            0,
            0,
            (char*) "snp_os1_dom2.pk2"
        },
        {
            1,
            40,
            0,
            0,
            (char*) "snp_os1_dom1.pk2"
        },
        {
            1,
            40,
            0,
            0,
            (char*) "snp_os1_dom0.pk2"
        },
        {
            1,
            40,
            0,
            0,
            (char*) "snp_os1_oza.pk2"
        },
        {
            1,
            40,
            0,
            0,
            (char*) "snp_os1_but.pk2"
        },
        {
            1,
            40,
            0,
            0,
            (char*) "snp_os1_kam.pk2"
        },
        {
            1,
            40,
            0,
            0,
            (char*) "snp_os1_oku.pk2"
        },
        {
            1,
            40,
            0,
            0,
            (char*) "snp_os2_dom.pk2"
        },
        {
            1,
            40,
            0,
            0,
            (char*) "snp_os2_sei.pk2"
        },
        {
            1,
            40,
            0,
            0,
            (char*) "snp_os2_kya.pk2"
        },
        {
            1,
            40,
            0,
            0,
            (char*) "snp_os2_sin.pk2"
        },
        {
            1,
            40,
            0,
            0,
            (char*) "snp_os2_sho.pk2"
        },
        {
            1,
            40,
            0,
            0,
            (char*) "snp_ks1_kei.pk2"
        },
        {
            1,
            40,
            0,
            0,
            (char*) "snp_ks1_gen.pk2"
        },
        {
            1,
            40,
            0,
            0,
            (char*) "snp_ks1_mei.pk2"
        },
        {
            1,
            40,
            0,
            0,
            (char*) "snp_ks1_tuc.pk2"
        },
        {
            1,
            40,
            0,
            0,
            (char*) "snp_ks1_tuc_chi.pk2"
        },
        {
            1,
            40,
            0,
            0,
            (char*) "snp_ks1_ohi.pk2"
        },
        {
            1,
            40,
            0,
            0,
            (char*) "snp_ks1_tub.pk2"
        },
        {
            1,
            40,
            0,
            0,
            (char*) "snp_ks1_nun_mon.pk2"
        },
        {
            1,
            40,
            0,
            0,
            (char*) "snp_ks1_nun.pk2"
        },
        {
            1,
            40,
            0,
            0,
            (char*) "snp_ks1_doz.pk2"
        },
        {
            1,
            40,
            0,
            0,
            (char*) "snp_ks1_doz_zas.pk2"
        },
        {
            1,
            40,
            0,
            0,
            (char*) "snp_ks1_doz_tuu.pk2"
        },
        {
            1,
            40,
            0,
            0,
            (char*) "snp_ks1_but.pk2"
        },
        {
            1,
            40,
            0,
            0,
            (char*) "snp_ks1_wat.pk2"
        },
        {
            1,
            40,
            0,
            0,
            (char*) "snp_ks1_kus_kob.pk2"
        },
        {
            1,
            40,
            0,
            0,
            (char*) "snp_ks1_kus.pk2"
        },
        {
            1,
            40,
            0,
            0,
            (char*) "snp_ks1_kus_tuu.pk2"
        },
        {
            1,
            40,
            0,
            0,
            (char*) "snp_ks0_chi.pk2"
        },
        {
            1,
            40,
            0,
            0,
            (char*) "snp_ks2_tub.pk2"
        },
        {
            1,
            40,
            0,
            0,
            (char*) "snp_ks2_nun.pk2"
        },
        {
            1,
            40,
            0,
            0,
            (char*) "snp_ks2_mei.pk2"
        },
        {
            1,
            40,
            0,
            0,
            (char*) "snp_ks2_meimetu.pk2"
        },
        {
            1,
            40,
            0,
            0,
            (char*) "snp_ks2_kya_rou.pk2"
        },
        {
            1,
            40,
            0,
            0,
            (char*) "snp_ks2_kya.pk2"
        },
        {
            1,
            40,
            0,
            0,
            (char*) "snp_ks2_hin.pk2"
        },
        {
            1,
            40,
            0,
            0,
            (char*) "snp_ks2_tou.pk2"
        },
        {
            1,
            40,
            0,
            0,
            (char*) "snp_ks0_but.pk2"
        },
        {
            1,
            40,
            0,
            0,
            (char*) "snp_ks0_wat_w.pk2"
        },
        {
            1,
            40,
            0,
            0,
            (char*) "snp_ks0_wat_e.pk2"
        },
        {
            1,
            40,
            0,
            0,
            (char*) "snp_ks0_kus.pk2"
        },
        {
            1,
            40,
            0,
            0,
            (char*) "snp_ry1_gen.pk2"
        },
        {
            1,
            40,
            0,
            0,
            (char*) "snp_ry1_gen_rou.pk2"
        },
        {
            1,
            40,
            0,
            0,
            (char*) "snp_ry1_kub.pk2"
        },
        {
            1,
            40,
            0,
            0,
            (char*) "snp_ry1_aka.pk2"
        },
        {
            1,
            40,
            0,
            0,
            (char*) "snp_ry1_but.pk2"
        },
        {
            1,
            40,
            0,
            0,
            (char*) "snp_ry1_zas.pk2"
        },
        {
            1,
            40,
            0,
            0,
            (char*) "snp_ry1_nak.pk2"
        },
        {
            1,
            40,
            0,
            0,
            (char*) "snp_ry1_kam.pk2"
        },
        {
            1,
            40,
            0,
            0,
            (char*) "snp_ry1_fut.pk2"
        },
        {
            1,
            40,
            0,
            0,
            (char*) "snp_ry1_mei.pk2"
        },
        {
            1,
            40,
            0,
            0,
            (char*) "snp_ry1_kar.pk2"
        },
        {
            1,
            40,
            0,
            0,
            (char*) "snp_ry1_fuk.pk2"
        },
        {
            1,
            40,
            0,
            0,
            (char*) "snp_ry1_sho.pk2"
        },
        {
            1,
            40,
            0,
            0,
            (char*) "snp_ry1_eis.pk2"
        },
        {
            1,
            40,
            0,
            0,
            (char*) "snp_ry1_kai.pk2"
        },
        {
            1,
            40,
            0,
            0,
            (char*) "snp_ry2_wat.pk2"
        },
        {
            1,
            40,
            0,
            0,
            (char*) "snp_ry2_fuk.pk2"
        },
        {
            1,
            40,
            0,
            0,
            (char*) "snp_ry2_sho.pk2"
        },
        {
            1,
            40,
            0,
            0,
            (char*) "snp_ry2_kai.pk2"
        },
        {
            1,
            40,
            0,
            0,
            (char*) "snp_ry2_tak.pk2"
        },
        {
            1,
            40,
            0,
            0,
            (char*) "snp_tb1_gen.pk2"
        },
        {
            1,
            40,
            0,
            0,
            (char*) "snp_tb1_gen_rou.pk2"
        },
        {
            1,
            40,
            0,
            0,
            (char*) "snp_tb1_kub.pk2"
        },
        {
            1,
            40,
            0,
            0,
            (char*) "snp_tb1_zas.pk2"
        },
        {
            1,
            40,
            0,
            0,
            (char*) "snp_tb1_nak.pk2"
        },
        {
            1,
            40,
            0,
            0,
            (char*) "snp_tb1_kam.pk2"
        },
        {
            1,
            40,
            0,
            0,
            (char*) "snp_tb1_fut.pk2"
        },
        {
            1,
            40,
            0,
            0,
            (char*) "snp_tb1_mei.pk2"
        },
        {
            1,
            40,
            0,
            0,
            (char*) "snp_tb1_kar.pk2"
        },
        {
            1,
            40,
            0,
            0,
            (char*) "snp_tb1_fuk.pk2"
        },
        {
            1,
            40,
            0,
            0,
            (char*) "snp_tb1_sho.pk2"
        },
        {
            1,
            40,
            0,
            0,
            (char*) "snp_tb1_eis.pk2"
        },
        {
            1,
            40,
            0,
            0,
            (char*) "snp_tb1_kai.pk2"
        },
        {
            1,
            40,
            0,
            0,
            (char*) "snp_tb2_fuk.pk2"
        },
        {
            1,
            40,
            0,
            0,
            (char*) "snp_tb2_itu.pk2"
        },
        {
            1,
            40,
            0,
            0,
            (char*) "snp_tb2_sho.pk2"
        },
        {
            1,
            40,
            0,
            0,
            (char*) "snp_tb2_kai.pk2"
        },
        {
            1,
            40,
            0,
            0,
            (char*) "snp_tb2_tak.pk2"
        },
        {
            1,
            40,
            0,
            0,
            (char*) "snp_tb2_nar_e.pk2"
        },
        {
            1,
            40,
            0,
            0,
            (char*) "snp_tb2_nar_n.pk2"
        },
        {
            1,
            40,
            0,
            0,
            (char*) "snp_tb2_nar_s.pk2"
        },
        {
            1,
            40,
            0,
            0,
            (char*) "snp_tb2_nar_w.pk2"
        },
        {
            1,
            40,
            0,
            0,
            (char*) "snp_os0_osa.pk2"
        },
        {
            1,
            40,
            0,
            0,
            (char*) "snp_ry0_rytb.pk2"
        },
        {
            1,
            40,
            0,
            0,
            (char*) "snp_chika_fuk1.pk2"
        },
        {
            1,
            40,
            0,
            0,
            (char*) "snp_chika_fuk2.pk2"
        },
        {
            1,
            40,
            0,
            0,
            (char*) "snp_chika_hik.pk2"
        },
        {
            1,
            40,
            0,
            0,
            (char*) "snp_chika_utu.pk2"
        },
        {
            1,
            40,
            0,
            0,
            (char*) "snp_kur.pk2"
        },
        {
            1,
            40,
            0,
            0,
            (char*) "snp_kuc.pk2"
        },
        {
            1,
            40,
            0,
            0,
            (char*) "snp_kureha.pk2"
        },
        {
            1,
            40,
            0,
            0,
            (char*) "snp_soto_osa_mae.pk2"
        },
        {
            1,
            40,
            0,
            0,
            (char*) "snp_soto_kur_ura.pk2"
        },
        {
            1,
            40,
            0,
            0,
            (char*) "snp_soto_kir_ura.pk2"
        },
        {
            1,
            40,
            0,
            0,
            (char*) "snp_soto_kir_ie.pk2"
        },
        {
            0,
            2,
            0,
            0,
            (char*) "ene_act01.obj"
        },
        {
            0,
            2,
            0,
            0,
            (char*) "sis_alg.obj"
        },
        {
            1,
            14,
            0,
            0,
            (char*) "ch000_mio.mdl"
        },
        {
            1,
            14,
            0,
            0,
            (char*) "ch001_may.mdl"
        },
        {
            1,
            14,
            0,
            0,
            (char*) "ch002_fuuin.mdl"
        },
        {
            1,
            14,
            0,
            0,
            (char*) "ch003_kusabi2a.mdl"
        },
        {
            1,
            14,
            0,
            0,
            (char*) "ch004_makabe.mdl"
        },
        {
            1,
            14,
            0,
            0,
            (char*) "ch005_tyou.mdl"
        },
        {
            1,
            14,
            0,
            0,
            (char*) "ch006_itu.mdl"
        },
        {
            1,
            14,
            0,
            0,
            (char*) "ch007_dummy.mdl"
        },
        {
            1,
            14,
            0,
            0,
            (char*) "ch008_dummy.mdl"
        },
        {
            1,
            14,
            0,
            0,
            (char*) "ch009_kusabi2c.mdl"
        },
        {
            1,
            14,
            0,
            0,
            (char*) "ch010_yami.mdl"
        },
        {
            1,
            14,
            0,
            0,
            (char*) "ch011_yami2.mdl"
        },
        {
            1,
            14,
            0,
            0,
            (char*) "ch012_kusanawa.mdl"
        },
        {
            1,
            14,
            0,
            0,
            (char*) "ch013_saerei1.mdl"
        },
        {
            1,
            14,
            0,
            0,
            (char*) "ch014_guujitama.mdl"
        },
        {
            1,
            14,
            0,
            0,
            (char*) "ch015_maki.mdl"
        },
        {
            1,
            14,
            0,
            0,
            (char*) "ch016_miokage.mdl"
        },
        {
            1,
            14,
            0,
            0,
            (char*) "ch017_miya.mdl"
        },
        {
            1,
            14,
            0,
            0,
            (char*) "ch018_kusabi.mdl"
        },
        {
            1,
            14,
            0,
            0,
            (char*) "ch019_chitose.mdl"
        },
        {
            1,
            14,
            0,
            0,
            (char*) "ch020_rakka.mdl"
        },
        {
            1,
            14,
            0,
            0,
            (char*) "ch021_waninngyou.mdl"
        },
        {
            1,
            14,
            0,
            0,
            (char*) "ch022_hutagorei.mdl"
        },
        {
            1,
            14,
            0,
            0,
            (char*) "ch023_ashirei.mdl"
        },
        {
            1,
            14,
            0,
            0,
            (char*) "ch024_hako.mdl"
        },
        {
            1,
            14,
            0,
            0,
            (char*) "ch025_kubiore.mdl"
        },
        {
            1,
            14,
            0,
            0,
            (char*) "ch026_karakuri.mdl"
        },
        {
            1,
            14,
            0,
            0,
            (char*) "ch027_onikodomo1.mdl"
        },
        {
            1,
            14,
            0,
            0,
            (char*) "ch028_onikodomo2.mdl"
        },
        {
            1,
            14,
            0,
            0,
            (char*) "ch029_onikodomo3.mdl"
        },
        {
            1,
            14,
            0,
            0,
            (char*) "ch030_suisi.mdl"
        },
        {
            1,
            14,
            0,
            0,
            (char*) "ch031_guuji.mdl"
        },
        {
            1,
            14,
            0,
            0,
            (char*) "ch032_imibito1.mdl"
        },
        {
            1,
            14,
            0,
            0,
            (char*) "ch033_ningyou.mdl"
        },
        {
            1,
            14,
            0,
            0,
            (char*) "ch034_rakka2.mdl"
        },
        {
            1,
            14,
            0,
            0,
            (char*) "ch035_muraA.mdl"
        },
        {
            1,
            14,
            0,
            0,
            (char*) "ch036_muraB.mdl"
        },
        {
            1,
            14,
            0,
            0,
            (char*) "ch037_muraC.mdl"
        },
        {
            1,
            14,
            0,
            0,
            (char*) "ch038_kusa1.mdl"
        },
        {
            1,
            14,
            0,
            0,
            (char*) "ch039_kusa2.mdl"
        },
        {
            1,
            14,
            0,
            0,
            (char*) "ch040_kumitate.mdl"
        },
        {
            1,
            14,
            0,
            0,
            (char*) "ch041_kurorei.mdl"
        },
        {
            1,
            14,
            0,
            0,
            (char*) "ch042_dummy.mdl"
        },
        {
            1,
            14,
            0,
            0,
            (char*) "ch043_kurosawa.mdl"
        },
        {
            1,
            14,
            0,
            0,
            (char*) "ch044_saeconte.mdl"
        },
        {
            1,
            14,
            0,
            0,
            (char*) "ch045_lhandrei.mdl"
        },
        {
            1,
            14,
            0,
            0,
            (char*) "ch046_yami.mdl"
        },
        {
            1,
            14,
            0,
            0,
            (char*) "ch047_kusa3.mdl"
        },
        {
            1,
            14,
            0,
            0,
            (char*) "ch048_kusa4.mdl"
        },
        {
            1,
            14,
            0,
            0,
            (char*) "ch049_kusa5.mdl"
        },
        {
            1,
            14,
            0,
            0,
            (char*) "ch050_murarei4.mdl"
        },
        {
            1,
            14,
            0,
            0,
            (char*) "ch051_murarei5.mdl"
        },
        {
            1,
            14,
            0,
            0,
            (char*) "ch052_murarei6.mdl"
        },
        {
            1,
            14,
            0,
            0,
            (char*) "ch053_imibito2.mdl"
        },
        {
            1,
            14,
            0,
            0,
            (char*) "ch054_makimura.mdl"
        },
        {
            1,
            14,
            0,
            0,
            (char*) "ch055_sudo.mdl"
        },
        {
            1,
            14,
            0,
            0,
            (char*) "ch056_waningyour.mdl"
        },
        {
            1,
            14,
            0,
            0,
            (char*) "ch057_waningyoul.mdl"
        },
        {
            1,
            14,
            0,
            0,
            (char*) "ch058_sae.mdl"
        },
        {
            1,
            14,
            0,
            0,
            (char*) "ch059_murarei7.mdl"
        },
        {
            1,
            14,
            0,
            0,
            (char*) "ch060_murarei8.mdl"
        },
        {
            1,
            14,
            0,
            0,
            (char*) "ch061_murarei9.mdl"
        },
        {
            1,
            14,
            0,
            0,
            (char*) "ch000_goth.mdl"
        },
        {
            1,
            14,
            0,
            0,
            (char*) "ch001_goth.mdl"
        },
        {
            1,
            14,
            0,
            0,
            (char*) "ch000_yukata_1.mdl"
        },
        {
            1,
            14,
            0,
            0,
            (char*) "ch001_yukata_1.mdl"
        },
        {
            1,
            14,
            0,
            0,
            (char*) "ch000_yukata_2.mdl"
        },
        {
            1,
            14,
            0,
            0,
            (char*) "ch001_yukata_2.mdl"
        },
        {
            1,
            14,
            0,
            0,
            (char*) "ch000_yukata_3.mdl"
        },
        {
            1,
            14,
            0,
            0,
            (char*) "ch001_yukata_3.mdl"
        },
        {
            1,
            14,
            0,
            0,
            (char*) "ch000_yae.mdl"
        },
        {
            1,
            14,
            0,
            0,
            (char*) "ch001_sae.mdl"
        },
        {
            1,
            14,
            0,
            0,
            (char*) "ch000_miku.mdl"
        },
        {
            1,
            14,
            0,
            0,
            (char*) "ch001_miku.mdl"
        },
        {
            1,
            14,
            0,
            0,
            (char*) "ch000_seihuku.mdl"
        },
        {
            1,
            14,
            0,
            0,
            (char*) "ch001_seihuku.mdl"
        },
        {
            1,
            14,
            0,
            0,
            (char*) "ch000_bontage.mdl"
        },
        {
            1,
            14,
            0,
            0,
            (char*) "ch001_bontage.mdl"
        },
        {
            1,
            14,
            0,
            0,
            (char*) "man_mdl_end"
        },
        {
            1,
            15,
            0,
            0,
            (char*) "ch000_mio.anm"
        },
        {
            1,
            15,
            0,
            0,
            (char*) "ch000_mio_l.anm"
        },
        {
            1,
            15,
            0,
            0,
            (char*) "ch000_mio_l_sp_01.anm"
        },
        {
            1,
            15,
            0,
            0,
            (char*) "ch000_mio_l_sp_02.anm"
        },
        {
            1,
            15,
            0,
            0,
            (char*) "ch001_may.anm"
        },
        {
            1,
            15,
            0,
            0,
            (char*) "ch001_may_sync.anm"
        },
        {
            1,
            15,
            0,
            0,
            (char*) "ch003_kusabi2a.anm"
        },
        {
            1,
            15,
            0,
            0,
            (char*) "ch004_dummy.anm"
        },
        {
            1,
            15,
            0,
            0,
            (char*) "ch005_tyou.anm"
        },
        {
            1,
            15,
            0,
            0,
            (char*) "ch007_dummy.anm"
        },
        {
            1,
            15,
            0,
            0,
            (char*) "ch008_dummy.anm"
        },
        {
            1,
            15,
            0,
            0,
            (char*) "ch009_kusabi2c.anm"
        },
        {
            1,
            15,
            0,
            0,
            (char*) "ch010_yami.anm"
        },
        {
            1,
            15,
            0,
            0,
            (char*) "ch011_yami2.anm"
        },
        {
            1,
            15,
            0,
            0,
            (char*) "ch012_kusanawa.anm"
        },
        {
            1,
            15,
            0,
            0,
            (char*) "ch013_saerei1.anm"
        },
        {
            1,
            15,
            0,
            0,
            (char*) "ch014_guujitama.anm"
        },
        {
            1,
            15,
            0,
            0,
            (char*) "ch015_maki.anm"
        },
        {
            1,
            15,
            0,
            0,
            (char*) "ch016_dummy.anm"
        },
        {
            1,
            15,
            0,
            0,
            (char*) "ch017_miya.anm"
        },
        {
            1,
            15,
            0,
            0,
            (char*) "ch018_kusabi.anm"
        },
        {
            1,
            15,
            0,
            0,
            (char*) "ch019_chitose.anm"
        },
        {
            1,
            15,
            0,
            0,
            (char*) "ch020_rakka.anm"
        },
        {
            1,
            15,
            0,
            0,
            (char*) "ch021_waninngyou.anm"
        },
        {
            1,
            15,
            0,
            0,
            (char*) "ch022_hutagorei.anm"
        },
        {
            1,
            15,
            0,
            0,
            (char*) "ch023_dummy.anm"
        },
        {
            1,
            15,
            0,
            0,
            (char*) "ch024_hako.anm"
        },
        {
            1,
            15,
            0,
            0,
            (char*) "ch025_kubiore.anm"
        },
        {
            1,
            15,
            0,
            0,
            (char*) "ch026_karakuri.anm"
        },
        {
            1,
            15,
            0,
            0,
            (char*) "ch027_onikodomo1.anm"
        },
        {
            1,
            15,
            0,
            0,
            (char*) "ch028_onikodomo2.anm"
        },
        {
            1,
            15,
            0,
            0,
            (char*) "ch029_onikodomo3.anm"
        },
        {
            1,
            15,
            0,
            0,
            (char*) "ch030_suisi.anm"
        },
        {
            1,
            15,
            0,
            0,
            (char*) "ch031_guuji.anm"
        },
        {
            1,
            15,
            0,
            0,
            (char*) "ch032_imibito.anm"
        },
        {
            1,
            15,
            0,
            0,
            (char*) "ch033_ningyou.anm"
        },
        {
            1,
            15,
            0,
            0,
            (char*) "ch034_dummy.anm"
        },
        {
            1,
            15,
            0,
            0,
            (char*) "ch035_muraA.anm"
        },
        {
            1,
            15,
            0,
            0,
            (char*) "ch036_muraB.anm"
        },
        {
            1,
            15,
            0,
            0,
            (char*) "ch037_muraC.anm"
        },
        {
            1,
            15,
            0,
            0,
            (char*) "ch038_kusa1.anm"
        },
        {
            1,
            15,
            0,
            0,
            (char*) "ch039_kusa2.anm"
        },
        {
            1,
            15,
            0,
            0,
            (char*) "ch040_dummy.anm"
        },
        {
            1,
            15,
            0,
            0,
            (char*) "ch041_kurorei.anm"
        },
        {
            1,
            15,
            0,
            0,
            (char*) "ch042_dummy.anm"
        },
        {
            1,
            15,
            0,
            0,
            (char*) "ch043_dummy.anm"
        },
        {
            1,
            15,
            0,
            0,
            (char*) "ch044_dummy.anm"
        },
        {
            1,
            15,
            0,
            0,
            (char*) "ch045_dummy.anm"
        },
        {
            1,
            15,
            0,
            0,
            (char*) "ch047_dummy.anm"
        },
        {
            1,
            15,
            0,
            0,
            (char*) "ch048_dummy.anm"
        },
        {
            1,
            15,
            0,
            0,
            (char*) "ch049_dummy.anm"
        },
        {
            1,
            15,
            0,
            0,
            (char*) "ch050_dummy.anm"
        },
        {
            1,
            15,
            0,
            0,
            (char*) "ch051_dummy.anm"
        },
        {
            1,
            15,
            0,
            0,
            (char*) "ch052_dummy.anm"
        },
        {
            1,
            15,
            0,
            0,
            (char*) "ch053_dummy.anm"
        },
        {
            1,
            15,
            0,
            0,
            (char*) "ch054_dummy.anm"
        },
        {
            1,
            15,
            0,
            0,
            (char*) "ch055_dummy.anm"
        },
        {
            1,
            15,
            0,
            0,
            (char*) "ch056_waningyour.anm"
        },
        {
            1,
            15,
            0,
            0,
            (char*) "ch057_waningyoul.anm"
        },
        {
            1,
            15,
            0,
            0,
            (char*) "ch058_dummy.anm"
        },
        {
            1,
            15,
            0,
            0,
            (char*) "ch059_dummy.anm"
        },
        {
            1,
            15,
            0,
            0,
            (char*) "ch060_dummy.anm"
        },
        {
            1,
            15,
            0,
            0,
            (char*) "ch061_dummy.anm"
        },
        {
            1,
            16,
            0,
            0,
            (char*) "ch017_a000_stand.anm"
        },
        {
            1,
            16,
            0,
            0,
            (char*) "ch046_a026_taore.anm"
        },
        {
            1,
            16,
            0,
            0,
            (char*) "ch999_dummy.anm"
        },
        {
            1,
            16,
            0,
            0,
            (char*) "ch002_a032_hands.anm"
        },
        {
            1,
            16,
            0,
            0,
            (char*) "ch017_a017_walk.anm"
        },
        {
            1,
            16,
            0,
            0,
            (char*) "ch017_a001_up.anm"
        },
        {
            1,
            16,
            0,
            0,
            (char*) "ch017_a024_walk.anm"
        },
        {
            1,
            16,
            0,
            0,
            (char*) "ch024_a003_boxout2.anm"
        },
        {
            1,
            16,
            0,
            0,
            (char*) "ch006_a027_stand.anm"
        },
        {
            1,
            16,
            0,
            0,
            (char*) "ch017_a028_noren.anm"
        },
        {
            1,
            16,
            0,
            0,
            (char*) "ch006_a031_stand.anm"
        },
        {
            1,
            16,
            0,
            0,
            (char*) "ch001_a035_run1.anm"
        },
        {
            1,
            16,
            0,
            0,
            (char*) "ch001_a036_run2.anm"
        },
        {
            1,
            16,
            0,
            0,
            (char*) "ch030_a037_suishi.anm"
        },
        {
            1,
            16,
            0,
            0,
            (char*) "ch035_a038_escape.anm"
        },
        {
            1,
            16,
            0,
            0,
            (char*) "ch036_a039_escape.anm"
        },
        {
            1,
            16,
            0,
            0,
            (char*) "ch037_a040_escape.anm"
        },
        {
            1,
            16,
            0,
            0,
            (char*) "ch001_a041_walk.anm"
        },
        {
            1,
            16,
            0,
            0,
            (char*) "ch004_a042_furimuki.anm"
        },
        {
            1,
            16,
            0,
            0,
            (char*) "ch018_a043_hikizuri.anm"
        },
        {
            1,
            16,
            0,
            0,
            (char*) "ch036_a044_hikizurare.anm"
        },
        {
            1,
            16,
            0,
            0,
            (char*) "ch018_a045_walk.anm"
        },
        {
            1,
            16,
            0,
            0,
            (char*) "ch024_a046_husi.anm"
        },
        {
            1,
            16,
            0,
            0,
            (char*) "ch024_a048_stand.anm"
        },
        {
            1,
            16,
            0,
            0,
            (char*) "ch043_a049_stand.anm"
        },
        {
            1,
            16,
            0,
            0,
            (char*) "ch038_a050_haiagari.anm"
        },
        {
            1,
            16,
            0,
            0,
            (char*) "ch029_a055_oudan.anm"
        },
        {
            1,
            16,
            0,
            0,
            (char*) "ch029_a056_nozoki.anm"
        },
        {
            1,
            16,
            0,
            0,
            (char*) "ch004_a057_stand.anm"
        },
        {
            1,
            16,
            0,
            0,
            (char*) "ch043_a058_keikoku.anm"
        },
        {
            1,
            16,
            0,
            0,
            (char*) "ch031_a059_stand.anm"
        },
        {
            1,
            16,
            0,
            0,
            (char*) "ch031_a060_furimuki.anm"
        },
        {
            1,
            16,
            0,
            0,
            (char*) "ch024_a061_hikikomi.anm"
        },
        {
            1,
            16,
            0,
            0,
            (char*) "ch017_a062_stand.anm"
        },
        {
            1,
            16,
            0,
            0,
            (char*) "ch004_a063_walk.anm"
        },
        {
            1,
            16,
            0,
            0,
            (char*) "ch023_a066_walk.anm"
        },
        {
            1,
            16,
            0,
            0,
            (char*) "ch038_a067_tati.anm"
        },
        {
            1,
            16,
            0,
            0,
            (char*) "ch045_a068_hand.anm"
        },
        {
            1,
            16,
            0,
            0,
            (char*) "ch039_a069_mado.anm"
        },
        {
            1,
            16,
            0,
            0,
            (char*) "ch038_a070_shagami.anm"
        },
        {
            1,
            16,
            0,
            0,
            (char*) "ch029_a076_nozoki.anm"
        },
        {
            1,
            16,
            0,
            0,
            (char*) "ch029_a077_hiraki.anm"
        },
        {
            1,
            16,
            0,
            0,
            (char*) "ch001_a087_crazy.anm"
        },
        {
            1,
            16,
            0,
            0,
            (char*) "ch025_a089_walk.anm"
        },
        {
            1,
            16,
            0,
            0,
            (char*) "ch004_a090_write.anm"
        },
        {
            1,
            16,
            0,
            0,
            (char*) "ch022_a091_run.anm"
        },
        {
            1,
            16,
            0,
            0,
            (char*) "ch022_a093_seiza.anm"
        },
        {
            1,
            16,
            0,
            0,
            (char*) "ch026_a095_karakurishi.anm"
        },
        {
            1,
            16,
            0,
            0,
            (char*) "ch001_a096_walk_slow.anm"
        },
        {
            1,
            16,
            0,
            0,
            (char*) "ch032_a098_stand.anm"
        },
        {
            1,
            16,
            0,
            0,
            (char*) "ch001_a099_cry.anm"
        },
        {
            1,
            16,
            0,
            0,
            (char*) "ch006_a100_neutral.anm"
        },
        {
            1,
            16,
            0,
            0,
            (char*) "ch059_a101_murawalk.anm"
        },
        {
            1,
            16,
            0,
            0,
            (char*) "ch060_a102_murawalk.anm"
        },
        {
            1,
            16,
            0,
            0,
            (char*) "ch061_a103_murawalk.anm"
        },
        {
            1,
            16,
            0,
            0,
            (char*) "ch031_a104_furimuki.anm"
        },
        {
            1,
            16,
            0,
            0,
            (char*) "ch031_a105_furimuki.anm"
        },
        {
            1,
            16,
            0,
            0,
            (char*) "ch013_a106_turn_R.anm"
        },
        {
            1,
            16,
            0,
            0,
            (char*) "ch022_a107_suwari_r.anm"
        },
        {
            1,
            16,
            0,
            0,
            (char*) "ch021_a108_suwari_l.anm"
        },
        {
            1,
            16,
            0,
            0,
            (char*) "ch018_a111_kusabi.anm"
        },
        {
            1,
            16,
            0,
            0,
            (char*) "ch054_a112_neutral.anm"
        },
        {
            1,
            16,
            0,
            0,
            (char*) "ch001_a113_down.anm"
        },
        {
            1,
            16,
            0,
            0,
            (char*) "ch054_a114_walk.anm"
        },
        {
            1,
            16,
            0,
            0,
            (char*) "ch013_a115_walk.anm"
        },
        {
            1,
            16,
            0,
            0,
            (char*) "ch013_a116_neutral.anm"
        },
        {
            1,
            16,
            0,
            0,
            (char*) "ch013_a117_cry.anm"
        },
        {
            1,
            16,
            0,
            0,
            (char*) "ch006_a119_walk.anm"
        },
        {
            1,
            16,
            0,
            0,
            (char*) "ch013_a120_turn_L.anm"
        },
        {
            1,
            16,
            0,
            0,
            (char*) "ch038_a121_stand.anm"
        },
        {
            1,
            16,
            0,
            0,
            (char*) "ch019_a122_escape.anm"
        },
        {
            1,
            16,
            0,
            0,
            (char*) "ch019_a123_run.anm"
        },
        {
            1,
            16,
            0,
            0,
            (char*) "ch013_a124_walk.anm"
        },
        {
            1,
            16,
            0,
            0,
            (char*) "ch027_a126_run.anm"
        },
        {
            1,
            16,
            0,
            0,
            (char*) "ch028_a127_run.anm"
        },
        {
            1,
            16,
            0,
            0,
            (char*) "ch029_a128_run.anm"
        },
        {
            1,
            16,
            0,
            0,
            (char*) "ch027_a129_look.anm"
        },
        {
            1,
            16,
            0,
            0,
            (char*) "ch031_a130_ojigi.anm"
        },
        {
            1,
            16,
            0,
            0,
            (char*) "ch004_a137_tatiagari.anm"
        },
        {
            1,
            16,
            0,
            0,
            (char*) "ch019_a138_sit.anm"
        },
        {
            1,
            16,
            0,
            0,
            (char*) "ch028_a140_look.anm"
        },
        {
            1,
            16,
            0,
            0,
            (char*) "ch029_a141_look.anm"
        },
        {
            1,
            16,
            0,
            0,
            (char*) "ch031_a142_stand.anm"
        },
        {
            1,
            16,
            0,
            0,
            (char*) "ch010_a143_stand.anm"
        },
        {
            1,
            16,
            0,
            0,
            (char*) "ch011_a144_neutral.anm"
        },
        {
            1,
            16,
            0,
            0,
            (char*) "ch040_a145_mikan.anm"
        },
        {
            1,
            16,
            0,
            0,
            (char*) "ch010_a146_yami_walk.anm"
        },
        {
            1,
            16,
            0,
            0,
            (char*) "ch019_a147_neutral.anm"
        },
        {
            1,
            16,
            0,
            0,
            (char*) "ch021_a148_neutral.anm"
        },
        {
            1,
            16,
            0,
            0,
            (char*) "ch025_a149_neutral.anm"
        },
        {
            1,
            16,
            0,
            0,
            (char*) "ch026_a150_stand.anm"
        },
        {
            1,
            16,
            0,
            0,
            (char*) "ch028_a151_walk.anm"
        },
        {
            1,
            16,
            0,
            0,
            (char*) "ch031_a152_walk.anm"
        },
        {
            1,
            16,
            0,
            0,
            (char*) "ch032_a153_walk.anm"
        },
        {
            1,
            16,
            0,
            0,
            (char*) "ch035_a154_neutral.anm"
        },
        {
            1,
            16,
            0,
            0,
            (char*) "ch032_a156_imibito_furikaeri.anm"
        },
        {
            1,
            16,
            0,
            0,
            (char*) "ch019_a157_kaoageru.anm"
        },
        {
            1,
            16,
            0,
            0,
            (char*) "ch015_a158_makirei_sisu.anm"
        },
        {
            1,
            16,
            0,
            0,
            (char*) "ch019_a165_haizuri.anm"
        },
        {
            1,
            16,
            0,
            0,
            (char*) "ch028_a166_jump.anm"
        },
        {
            1,
            16,
            0,
            0,
            (char*) "ch027_a171_stand.anm"
        },
        {
            1,
            16,
            0,
            0,
            (char*) "ch002_a173_hands.anm"
        },
        {
            1,
            16,
            0,
            0,
            (char*) "ch021_a178_neutral.anm"
        },
        {
            1,
            16,
            0,
            0,
            (char*) "ch001_a179_neutral.anm"
        },
        {
            1,
            16,
            0,
            0,
            (char*) "ch019_a191_standup.anm"
        },
        {
            1,
            16,
            0,
            0,
            (char*) "ch001_a195_sae_mayu.anm"
        },
        {
            1,
            16,
            0,
            0,
            (char*) "ch019_a202_chitose_sit.anm"
        },
        {
            1,
            16,
            0,
            0,
            (char*) "ch024_a204_boxout3.anm"
        },
        {
            0,
            15,
            0,
            0,
            (char*) "man_anm_end"
        },
        {
            0,
            11,
            0,
            0,
            (char*) "door_anim.mot"
        },
        {
            0,
            21,
            0,
            0,
            (char*) "room_start.dmy"
        },
        {
            1,
            6,
            0,
            0,
            (char*) "ry00.pk2"
        },
        {
            1,
            9,
            0,
            0,
            (char*) "ry00.zld"
        },
        {
            1,
            7,
            0,
            0,
            (char*) "ry00_pzb.pak"
        },
        {
            1,
            8,
            0,
            0,
            (char*) "ry00.mh"
        },
        {
            1,
            6,
            0,
            0,
            (char*) "ry00Mono.pk2"
        },
        {
            1,
            6,
            0,
            0,
            (char*) "ry01.pk2"
        },
        {
            1,
            9,
            0,
            0,
            (char*) "ry01.zld"
        },
        {
            1,
            7,
            0,
            0,
            (char*) "ry01_pzb.pak"
        },
        {
            1,
            8,
            0,
            0,
            (char*) "ry01.mh"
        },
        {
            1,
            6,
            0,
            0,
            (char*) "ry01Mono.pk2"
        },
        {
            1,
            6,
            0,
            0,
            (char*) "ry02.pk2"
        },
        {
            1,
            9,
            0,
            0,
            (char*) "ry02.zld"
        },
        {
            1,
            7,
            0,
            0,
            (char*) "ry02_pzb.pak"
        },
        {
            1,
            8,
            0,
            0,
            (char*) "ry02.mh"
        },
        {
            1,
            6,
            0,
            0,
            (char*) "ry02Mono.pk2"
        },
        {
            1,
            6,
            0,
            0,
            (char*) "ry03.pk2"
        },
        {
            1,
            9,
            0,
            0,
            (char*) "ry03.zld"
        },
        {
            1,
            7,
            0,
            0,
            (char*) "ry03_pzb.pak"
        },
        {
            1,
            8,
            0,
            0,
            (char*) "ry03.mh"
        },
        {
            1,
            6,
            0,
            0,
            (char*) "ry03Mono.pk2"
        },
        {
            1,
            6,
            0,
            0,
            (char*) "ry04.pk2"
        },
        {
            1,
            9,
            0,
            0,
            (char*) "ry04.zld"
        },
        {
            1,
            7,
            0,
            0,
            (char*) "ry04_pzb.pak"
        },
        {
            1,
            8,
            0,
            0,
            (char*) "ry04.mh"
        },
        {
            1,
            6,
            0,
            0,
            (char*) "ry04Mono.pk2"
        },
        {
            1,
            6,
            0,
            0,
            (char*) "ry05.pk2"
        },
        {
            1,
            9,
            0,
            0,
            (char*) "ry05.zld"
        },
        {
            1,
            7,
            0,
            0,
            (char*) "ry05_pzb.pak"
        },
        {
            1,
            8,
            0,
            0,
            (char*) "ry05.mh"
        },
        {
            1,
            6,
            0,
            0,
            (char*) "ry05Mono.pk2"
        },
        {
            1,
            6,
            0,
            0,
            (char*) "ry06.pk2"
        },
        {
            1,
            9,
            0,
            0,
            (char*) "ry06.zld"
        },
        {
            1,
            7,
            0,
            0,
            (char*) "ry06_pzb.pak"
        },
        {
            1,
            8,
            0,
            0,
            (char*) "ry06.mh"
        },
        {
            1,
            6,
            0,
            0,
            (char*) "ry06Mono.pk2"
        },
        {
            1,
            6,
            0,
            0,
            (char*) "ry07.pk2"
        },
        {
            1,
            9,
            0,
            0,
            (char*) "ry07.zld"
        },
        {
            1,
            7,
            0,
            0,
            (char*) "ry07_pzb.pak"
        },
        {
            1,
            8,
            0,
            0,
            (char*) "ry07.mh"
        },
        {
            1,
            6,
            0,
            0,
            (char*) "ry07Mono.pk2"
        },
        {
            1,
            6,
            0,
            0,
            (char*) "ry08.pk2"
        },
        {
            1,
            9,
            0,
            0,
            (char*) "ry08.zld"
        },
        {
            1,
            7,
            0,
            0,
            (char*) "ry08_pzb.pak"
        },
        {
            1,
            8,
            0,
            0,
            (char*) "ry08.mh"
        },
        {
            1,
            6,
            0,
            0,
            (char*) "ry08Mono.pk2"
        },
        {
            1,
            6,
            0,
            0,
            (char*) "ry09.pk2"
        },
        {
            1,
            9,
            0,
            0,
            (char*) "ry09.zld"
        },
        {
            1,
            7,
            0,
            0,
            (char*) "ry09_pzb.pak"
        },
        {
            1,
            8,
            0,
            0,
            (char*) "ry09.mh"
        },
        {
            1,
            6,
            0,
            0,
            (char*) "ry09Mono.pk2"
        },
        {
            1,
            6,
            0,
            0,
            (char*) "ry10.pk2"
        },
        {
            1,
            9,
            0,
            0,
            (char*) "ry10.zld"
        },
        {
            1,
            7,
            0,
            0,
            (char*) "ry10_pzb.pak"
        },
        {
            1,
            8,
            0,
            0,
            (char*) "ry10.mh"
        },
        {
            1,
            6,
            0,
            0,
            (char*) "ry10Mono.pk2"
        },
        {
            1,
            6,
            0,
            0,
            (char*) "ry11.pk2"
        },
        {
            1,
            9,
            0,
            0,
            (char*) "ry11.zld"
        },
        {
            1,
            7,
            0,
            0,
            (char*) "ry11_pzb.pak"
        },
        {
            1,
            8,
            0,
            0,
            (char*) "ry11.mh"
        },
        {
            1,
            6,
            0,
            0,
            (char*) "ry11Mono.pk2"
        },
        {
            1,
            6,
            0,
            0,
            (char*) "ry12.pk2"
        },
        {
            1,
            9,
            0,
            0,
            (char*) "ry12.zld"
        },
        {
            1,
            7,
            0,
            0,
            (char*) "ry12_pzb.pak"
        },
        {
            1,
            8,
            0,
            0,
            (char*) "ry12.mh"
        },
        {
            1,
            6,
            0,
            0,
            (char*) "ry12Mono.pk2"
        },
        {
            1,
            6,
            0,
            0,
            (char*) "ros00.pk2"
        },
        {
            1,
            9,
            0,
            0,
            (char*) "ros00.zld"
        },
        {
            1,
            7,
            0,
            0,
            (char*) "ros00_pzb.pak"
        },
        {
            1,
            8,
            0,
            0,
            (char*) "ros00.mh"
        },
        {
            1,
            6,
            0,
            0,
            (char*) "ros00Mono.pk2"
        },
        {
            1,
            6,
            0,
            0,
            (char*) "ros01.pk2"
        },
        {
            1,
            9,
            0,
            0,
            (char*) "ros01.zld"
        },
        {
            1,
            7,
            0,
            0,
            (char*) "ros01_pzb.pak"
        },
        {
            1,
            8,
            0,
            0,
            (char*) "ros01.mh"
        },
        {
            1,
            6,
            0,
            0,
            (char*) "ros01Mono.pk2"
        },
        {
            1,
            6,
            0,
            0,
            (char*) "ros02.pk2"
        },
        {
            1,
            9,
            0,
            0,
            (char*) "ros02.zld"
        },
        {
            1,
            7,
            0,
            0,
            (char*) "ros02_pzb.pak"
        },
        {
            1,
            8,
            0,
            0,
            (char*) "ros02.mh"
        },
        {
            1,
            6,
            0,
            0,
            (char*) "ros02Mono.pk2"
        },
        {
            1,
            6,
            0,
            0,
            (char*) "ros03.pk2"
        },
        {
            1,
            9,
            0,
            0,
            (char*) "ros03.zld"
        },
        {
            1,
            7,
            0,
            0,
            (char*) "ros03_pzb.pak"
        },
        {
            1,
            8,
            0,
            0,
            (char*) "ros03.mh"
        },
        {
            1,
            6,
            0,
            0,
            (char*) "ros03Mono.pk2"
        },
        {
            1,
            6,
            0,
            0,
            (char*) "ros04.pk2"
        },
        {
            1,
            9,
            0,
            0,
            (char*) "ros04.zld"
        },
        {
            1,
            7,
            0,
            0,
            (char*) "ros04_pzb.pak"
        },
        {
            1,
            8,
            0,
            0,
            (char*) "ros04.mh"
        },
        {
            1,
            6,
            0,
            0,
            (char*) "ros04Mono.pk2"
        },
        {
            1,
            6,
            0,
            0,
            (char*) "ros05.pk2"
        },
        {
            1,
            9,
            0,
            0,
            (char*) "ros05.zld"
        },
        {
            1,
            7,
            0,
            0,
            (char*) "ros05_pzb.pak"
        },
        {
            1,
            8,
            0,
            0,
            (char*) "ros05.mh"
        },
        {
            1,
            6,
            0,
            0,
            (char*) "ros05Mono.pk2"
        },
        {
            1,
            6,
            0,
            0,
            (char*) "rtb00.pk2"
        },
        {
            1,
            9,
            0,
            0,
            (char*) "rtb00.zld"
        },
        {
            1,
            7,
            0,
            0,
            (char*) "rtb00_pzb.pak"
        },
        {
            1,
            8,
            0,
            0,
            (char*) "rtb00.mh"
        },
        {
            1,
            6,
            0,
            0,
            (char*) "rtb00Mono.pk2"
        },
        {
            1,
            6,
            0,
            0,
            (char*) "rtb01.pk2"
        },
        {
            1,
            9,
            0,
            0,
            (char*) "rtb01.zld"
        },
        {
            1,
            7,
            0,
            0,
            (char*) "rtb01_pzb.pak"
        },
        {
            1,
            8,
            0,
            0,
            (char*) "rtb01.mh"
        },
        {
            1,
            6,
            0,
            0,
            (char*) "rtb01Mono.pk2"
        },
        {
            1,
            6,
            0,
            0,
            (char*) "rtb02.pk2"
        },
        {
            1,
            9,
            0,
            0,
            (char*) "rtb02.zld"
        },
        {
            1,
            7,
            0,
            0,
            (char*) "rtb02_pzb.pak"
        },
        {
            1,
            8,
            0,
            0,
            (char*) "rtb02.mh"
        },
        {
            1,
            6,
            0,
            0,
            (char*) "rtb02Mono.pk2"
        },
        {
            1,
            6,
            0,
            0,
            (char*) "rtb03.pk2"
        },
        {
            1,
            9,
            0,
            0,
            (char*) "rtb03.zld"
        },
        {
            1,
            7,
            0,
            0,
            (char*) "rtb03_pzb.pak"
        },
        {
            1,
            8,
            0,
            0,
            (char*) "rtb03.mh"
        },
        {
            1,
            6,
            0,
            0,
            (char*) "rtb03Mono.pk2"
        },
        {
            1,
            6,
            0,
            0,
            (char*) "rtb04.pk2"
        },
        {
            1,
            9,
            0,
            0,
            (char*) "rtb04.zld"
        },
        {
            1,
            7,
            0,
            0,
            (char*) "rtb04_pzb.pak"
        },
        {
            1,
            8,
            0,
            0,
            (char*) "rtb04.mh"
        },
        {
            1,
            6,
            0,
            0,
            (char*) "rtb04Mono.pk2"
        },
        {
            1,
            6,
            0,
            0,
            (char*) "rtb05.pk2"
        },
        {
            1,
            9,
            0,
            0,
            (char*) "rtb05.zld"
        },
        {
            1,
            7,
            0,
            0,
            (char*) "rtb05_pzb.pak"
        },
        {
            1,
            8,
            0,
            0,
            (char*) "rtb05.mh"
        },
        {
            1,
            6,
            0,
            0,
            (char*) "rtb05Mono.pk2"
        },
        {
            1,
            6,
            0,
            0,
            (char*) "rtb06.pk2"
        },
        {
            1,
            9,
            0,
            0,
            (char*) "rtb06.zld"
        },
        {
            1,
            7,
            0,
            0,
            (char*) "rtb06_pzb.pak"
        },
        {
            1,
            8,
            0,
            0,
            (char*) "rtb06.mh"
        },
        {
            1,
            6,
            0,
            0,
            (char*) "rtb06Mono.pk2"
        },
        {
            1,
            6,
            0,
            0,
            (char*) "rtb07.pk2"
        },
        {
            1,
            9,
            0,
            0,
            (char*) "rtb07.zld"
        },
        {
            1,
            7,
            0,
            0,
            (char*) "rtb07_pzb.pak"
        },
        {
            1,
            8,
            0,
            0,
            (char*) "rtb07.mh"
        },
        {
            1,
            6,
            0,
            0,
            (char*) "rtb07Mono.pk2"
        },
        {
            1,
            6,
            0,
            0,
            (char*) "rtb08.pk2"
        },
        {
            1,
            9,
            0,
            0,
            (char*) "rtb08.zld"
        },
        {
            1,
            7,
            0,
            0,
            (char*) "rtb08_pzb.pak"
        },
        {
            1,
            8,
            0,
            0,
            (char*) "rtb08.mh"
        },
        {
            1,
            6,
            0,
            0,
            (char*) "rtb08Mono.pk2"
        },
        {
            1,
            6,
            0,
            0,
            (char*) "rtb09.pk2"
        },
        {
            1,
            9,
            0,
            0,
            (char*) "rtb09.zld"
        },
        {
            1,
            7,
            0,
            0,
            (char*) "rtb09_pzb.pak"
        },
        {
            1,
            8,
            0,
            0,
            (char*) "rtb09.mh"
        },
        {
            1,
            6,
            0,
            0,
            (char*) "rtb09Mono.pk2"
        },
        {
            1,
            6,
            0,
            0,
            (char*) "rtb10.pk2"
        },
        {
            1,
            9,
            0,
            0,
            (char*) "rtb10.zld"
        },
        {
            1,
            7,
            0,
            0,
            (char*) "rtb10_pzb.pak"
        },
        {
            1,
            8,
            0,
            0,
            (char*) "rtb10.mh"
        },
        {
            1,
            6,
            0,
            0,
            (char*) "rtb10Mono.pk2"
        },
        {
            1,
            6,
            0,
            0,
            (char*) "rry00.pk2"
        },
        {
            1,
            9,
            0,
            0,
            (char*) "rry00.zld"
        },
        {
            1,
            7,
            0,
            0,
            (char*) "rry00_pzb.pak"
        },
        {
            1,
            8,
            0,
            0,
            (char*) "rry00.mh"
        },
        {
            1,
            6,
            0,
            0,
            (char*) "rry00Mono.pk2"
        },
        {
            1,
            6,
            0,
            0,
            (char*) "rry01.pk2"
        },
        {
            1,
            9,
            0,
            0,
            (char*) "rry01.zld"
        },
        {
            1,
            7,
            0,
            0,
            (char*) "rry01_pzb.pak"
        },
        {
            1,
            8,
            0,
            0,
            (char*) "rry01.mh"
        },
        {
            1,
            6,
            0,
            0,
            (char*) "rry01Mono.pk2"
        },
        {
            1,
            6,
            0,
            0,
            (char*) "rry02.pk2"
        },
        {
            1,
            9,
            0,
            0,
            (char*) "rry02.zld"
        },
        {
            1,
            7,
            0,
            0,
            (char*) "rry02_pzb.pak"
        },
        {
            1,
            8,
            0,
            0,
            (char*) "rry02.mh"
        },
        {
            1,
            6,
            0,
            0,
            (char*) "rry02Mono.pk2"
        },
        {
            1,
            6,
            0,
            0,
            (char*) "rry03.pk2"
        },
        {
            1,
            9,
            0,
            0,
            (char*) "rry03.zld"
        },
        {
            1,
            7,
            0,
            0,
            (char*) "rry03_pzb.pak"
        },
        {
            1,
            8,
            0,
            0,
            (char*) "rry03.mh"
        },
        {
            1,
            6,
            0,
            0,
            (char*) "rry03Mono.pk2"
        },
        {
            1,
            6,
            0,
            0,
            (char*) "rry04.pk2"
        },
        {
            1,
            9,
            0,
            0,
            (char*) "rry04.zld"
        },
        {
            1,
            7,
            0,
            0,
            (char*) "rry04_pzb.pak"
        },
        {
            1,
            8,
            0,
            0,
            (char*) "rry04.mh"
        },
        {
            1,
            6,
            0,
            0,
            (char*) "rry04Mono.pk2"
        },
        {
            1,
            6,
            0,
            0,
            (char*) "rry05.pk2"
        },
        {
            1,
            9,
            0,
            0,
            (char*) "rry05.zld"
        },
        {
            1,
            7,
            0,
            0,
            (char*) "rry05_pzb.pak"
        },
        {
            1,
            8,
            0,
            0,
            (char*) "rry05.mh"
        },
        {
            1,
            6,
            0,
            0,
            (char*) "rry05Mono.pk2"
        },
        {
            1,
            6,
            0,
            0,
            (char*) "rry06.pk2"
        },
        {
            1,
            9,
            0,
            0,
            (char*) "rry06.zld"
        },
        {
            1,
            7,
            0,
            0,
            (char*) "rry06_pzb.pak"
        },
        {
            1,
            8,
            0,
            0,
            (char*) "rry06.mh"
        },
        {
            1,
            6,
            0,
            0,
            (char*) "rry06Mono.pk2"
        },
        {
            1,
            6,
            0,
            0,
            (char*) "rry07.pk2"
        },
        {
            1,
            9,
            0,
            0,
            (char*) "rry07.zld"
        },
        {
            1,
            7,
            0,
            0,
            (char*) "rry07_pzb.pak"
        },
        {
            1,
            8,
            0,
            0,
            (char*) "rry07.mh"
        },
        {
            1,
            6,
            0,
            0,
            (char*) "rry07Mono.pk2"
        },
        {
            1,
            6,
            0,
            0,
            (char*) "rry08.pk2"
        },
        {
            1,
            9,
            0,
            0,
            (char*) "rry08.zld"
        },
        {
            1,
            7,
            0,
            0,
            (char*) "rry08_pzb.pak"
        },
        {
            1,
            8,
            0,
            0,
            (char*) "rry08.mh"
        },
        {
            1,
            6,
            0,
            0,
            (char*) "rry08Mono.pk2"
        },
        {
            1,
            6,
            0,
            0,
            (char*) "rry09.pk2"
        },
        {
            1,
            9,
            0,
            0,
            (char*) "rry09.zld"
        },
        {
            1,
            7,
            0,
            0,
            (char*) "rry09_pzb.pak"
        },
        {
            1,
            8,
            0,
            0,
            (char*) "rry09.mh"
        },
        {
            1,
            6,
            0,
            0,
            (char*) "rry09Mono.pk2"
        },
        {
            1,
            6,
            0,
            0,
            (char*) "rks00.pk2"
        },
        {
            1,
            9,
            0,
            0,
            (char*) "rks00.zld"
        },
        {
            1,
            7,
            0,
            0,
            (char*) "rks00_pzb.pak"
        },
        {
            1,
            8,
            0,
            0,
            (char*) "rks00.mh"
        },
        {
            1,
            6,
            0,
            0,
            (char*) "rks00Mono.pk2"
        },
        {
            1,
            6,
            0,
            0,
            (char*) "rks01.pk2"
        },
        {
            1,
            9,
            0,
            0,
            (char*) "rks01.zld"
        },
        {
            1,
            7,
            0,
            0,
            (char*) "rks01_pzb.pak"
        },
        {
            1,
            8,
            0,
            0,
            (char*) "rks01.mh"
        },
        {
            1,
            6,
            0,
            0,
            (char*) "rks01Mono.pk2"
        },
        {
            1,
            6,
            0,
            0,
            (char*) "rks02.pk2"
        },
        {
            1,
            9,
            0,
            0,
            (char*) "rks02.zld"
        },
        {
            1,
            7,
            0,
            0,
            (char*) "rks02_pzb.pak"
        },
        {
            1,
            8,
            0,
            0,
            (char*) "rks02.mh"
        },
        {
            1,
            6,
            0,
            0,
            (char*) "rks02Mono.pk2"
        },
        {
            1,
            6,
            0,
            0,
            (char*) "rks03.pk2"
        },
        {
            1,
            9,
            0,
            0,
            (char*) "rks03.zld"
        },
        {
            1,
            7,
            0,
            0,
            (char*) "rks03_pzb.pak"
        },
        {
            1,
            8,
            0,
            0,
            (char*) "rks03.mh"
        },
        {
            1,
            6,
            0,
            0,
            (char*) "rks03Mono.pk2"
        },
        {
            1,
            6,
            0,
            0,
            (char*) "rks04.pk2"
        },
        {
            1,
            9,
            0,
            0,
            (char*) "rks04.zld"
        },
        {
            1,
            7,
            0,
            0,
            (char*) "rks04_pzb.pak"
        },
        {
            1,
            8,
            0,
            0,
            (char*) "rks04.mh"
        },
        {
            1,
            6,
            0,
            0,
            (char*) "rks04Mono.pk2"
        },
        {
            1,
            6,
            0,
            0,
            (char*) "rks05.pk2"
        },
        {
            1,
            9,
            0,
            0,
            (char*) "rks05.zld"
        },
        {
            1,
            7,
            0,
            0,
            (char*) "rks05_pzb.pak"
        },
        {
            1,
            8,
            0,
            0,
            (char*) "rks05.mh"
        },
        {
            1,
            6,
            0,
            0,
            (char*) "rks05Mono.pk2"
        },
        {
            1,
            6,
            0,
            0,
            (char*) "rks06.pk2"
        },
        {
            1,
            9,
            0,
            0,
            (char*) "rks06.zld"
        },
        {
            1,
            7,
            0,
            0,
            (char*) "rks06_pzb.pak"
        },
        {
            1,
            8,
            0,
            0,
            (char*) "rks06.mh"
        },
        {
            1,
            6,
            0,
            0,
            (char*) "rks06Mono.pk2"
        },
        {
            1,
            6,
            0,
            0,
            (char*) "rks07.pk2"
        },
        {
            1,
            9,
            0,
            0,
            (char*) "rks07.zld"
        },
        {
            1,
            7,
            0,
            0,
            (char*) "rks07_pzb.pak"
        },
        {
            1,
            8,
            0,
            0,
            (char*) "rks07.mh"
        },
        {
            1,
            6,
            0,
            0,
            (char*) "rks07Mono.pk2"
        },
        {
            1,
            6,
            0,
            0,
            (char*) "rks08.pk2"
        },
        {
            1,
            9,
            0,
            0,
            (char*) "rks08.zld"
        },
        {
            1,
            7,
            0,
            0,
            (char*) "rks08_pzb.pak"
        },
        {
            1,
            8,
            0,
            0,
            (char*) "rks08.mh"
        },
        {
            1,
            6,
            0,
            0,
            (char*) "rks08Mono.pk2"
        },
        {
            1,
            6,
            0,
            0,
            (char*) "rks09.pk2"
        },
        {
            1,
            9,
            0,
            0,
            (char*) "rks09.zld"
        },
        {
            1,
            7,
            0,
            0,
            (char*) "rks09_pzb.pak"
        },
        {
            1,
            8,
            0,
            0,
            (char*) "rks09.mh"
        },
        {
            1,
            6,
            0,
            0,
            (char*) "rks09Mono.pk2"
        },
        {
            1,
            6,
            0,
            0,
            (char*) "rks10.pk2"
        },
        {
            1,
            9,
            0,
            0,
            (char*) "rks10.zld"
        },
        {
            1,
            7,
            0,
            0,
            (char*) "rks10_pzb.pak"
        },
        {
            1,
            8,
            0,
            0,
            (char*) "rks10.mh"
        },
        {
            1,
            6,
            0,
            0,
            (char*) "rks10Mono.pk2"
        },
        {
            1,
            6,
            0,
            0,
            (char*) "rks11.pk2"
        },
        {
            1,
            9,
            0,
            0,
            (char*) "rks11.zld"
        },
        {
            1,
            7,
            0,
            0,
            (char*) "rks11_pzb.pak"
        },
        {
            1,
            8,
            0,
            0,
            (char*) "rks11.mh"
        },
        {
            1,
            6,
            0,
            0,
            (char*) "rks11Mono.pk2"
        },
        {
            1,
            6,
            0,
            0,
            (char*) "rks12.pk2"
        },
        {
            1,
            9,
            0,
            0,
            (char*) "rks12.zld"
        },
        {
            1,
            7,
            0,
            0,
            (char*) "rks12_pzb.pak"
        },
        {
            1,
            8,
            0,
            0,
            (char*) "rks12.mh"
        },
        {
            1,
            6,
            0,
            0,
            (char*) "rks12Mono.pk2"
        },
        {
            1,
            6,
            0,
            0,
            (char*) "rks13.pk2"
        },
        {
            1,
            9,
            0,
            0,
            (char*) "rks13.zld"
        },
        {
            1,
            7,
            0,
            0,
            (char*) "rks13_pzb.pak"
        },
        {
            1,
            8,
            0,
            0,
            (char*) "rks13.mh"
        },
        {
            1,
            6,
            0,
            0,
            (char*) "rks13Mono.pk2"
        },
        {
            1,
            6,
            0,
            0,
            (char*) "rks14.pk2"
        },
        {
            1,
            9,
            0,
            0,
            (char*) "rks14.zld"
        },
        {
            1,
            7,
            0,
            0,
            (char*) "rks14_pzb.pak"
        },
        {
            1,
            8,
            0,
            0,
            (char*) "rks14.mh"
        },
        {
            1,
            6,
            0,
            0,
            (char*) "rks14Mono.pk2"
        },
        {
            1,
            6,
            0,
            0,
            (char*) "rkh00.pk2"
        },
        {
            1,
            9,
            0,
            0,
            (char*) "rkh00.zld"
        },
        {
            1,
            7,
            0,
            0,
            (char*) "rkh00_pzb.pak"
        },
        {
            1,
            8,
            0,
            0,
            (char*) "rkh00.mh"
        },
        {
            1,
            6,
            0,
            0,
            (char*) "rkh00Mono.pk2"
        },
        {
            1,
            6,
            0,
            0,
            (char*) "rkc00.pk2"
        },
        {
            1,
            9,
            0,
            0,
            (char*) "rkc00.zld"
        },
        {
            1,
            7,
            0,
            0,
            (char*) "rkc00_pzb.pak"
        },
        {
            1,
            8,
            0,
            0,
            (char*) "rkc00.mh"
        },
        {
            1,
            6,
            0,
            0,
            (char*) "rkc00Mono.pk2"
        },
        {
            1,
            6,
            0,
            0,
            (char*) "rkr00.pk2"
        },
        {
            1,
            9,
            0,
            0,
            (char*) "rkr00.zld"
        },
        {
            1,
            7,
            0,
            0,
            (char*) "rkr00_pzb.pak"
        },
        {
            1,
            8,
            0,
            0,
            (char*) "rkr00.mh"
        },
        {
            1,
            6,
            0,
            0,
            (char*) "rkr00Mono.pk2"
        },
        {
            1,
            6,
            0,
            0,
            (char*) "rch00.pk2"
        },
        {
            1,
            9,
            0,
            0,
            (char*) "rch00.zld"
        },
        {
            1,
            7,
            0,
            0,
            (char*) "rch00_pzb.pak"
        },
        {
            1,
            8,
            0,
            0,
            (char*) "rch00.mh"
        },
        {
            1,
            6,
            0,
            0,
            (char*) "rch00Mono.pk2"
        },
        {
            1,
            6,
            0,
            0,
            (char*) "rch01.pk2"
        },
        {
            1,
            9,
            0,
            0,
            (char*) "rch01.zld"
        },
        {
            1,
            7,
            0,
            0,
            (char*) "rch01_pzb.pak"
        },
        {
            1,
            8,
            0,
            0,
            (char*) "rch01.mh"
        },
        {
            1,
            6,
            0,
            0,
            (char*) "rch01Mono.pk2"
        },
        {
            1,
            6,
            0,
            0,
            (char*) "rch02.pk2"
        },
        {
            1,
            9,
            0,
            0,
            (char*) "rch02.zld"
        },
        {
            1,
            7,
            0,
            0,
            (char*) "rch02_pzb.pak"
        },
        {
            1,
            8,
            0,
            0,
            (char*) "rch02.mh"
        },
        {
            1,
            6,
            0,
            0,
            (char*) "rch02Mono.pk2"
        },
        {
            1,
            6,
            0,
            0,
            (char*) "rch03.pk2"
        },
        {
            1,
            9,
            0,
            0,
            (char*) "rch03.zld"
        },
        {
            1,
            7,
            0,
            0,
            (char*) "rch03_pzb.pak"
        },
        {
            1,
            8,
            0,
            0,
            (char*) "rch03.mh"
        },
        {
            1,
            6,
            0,
            0,
            (char*) "rch03Mono.pk2"
        },
        {
            1,
            6,
            0,
            0,
            (char*) "rch04.pk2"
        },
        {
            1,
            9,
            0,
            0,
            (char*) "rch04.zld"
        },
        {
            1,
            7,
            0,
            0,
            (char*) "rch04_pzb.pak"
        },
        {
            1,
            8,
            0,
            0,
            (char*) "rch04.mh"
        },
        {
            1,
            6,
            0,
            0,
            (char*) "rch04Mono.pk2"
        },
        {
            1,
            6,
            0,
            0,
            (char*) "rch05.pk2"
        },
        {
            1,
            9,
            0,
            0,
            (char*) "rch05.zld"
        },
        {
            1,
            7,
            0,
            0,
            (char*) "rch05_pzb.pak"
        },
        {
            1,
            8,
            0,
            0,
            (char*) "rch05.mh"
        },
        {
            1,
            6,
            0,
            0,
            (char*) "rch05Mono.pk2"
        },
        {
            1,
            6,
            0,
            0,
            (char*) "rch06.pk2"
        },
        {
            1,
            9,
            0,
            0,
            (char*) "rch06.zld"
        },
        {
            1,
            7,
            0,
            0,
            (char*) "rch06_pzb.pak"
        },
        {
            1,
            8,
            0,
            0,
            (char*) "rch06.mh"
        },
        {
            1,
            6,
            0,
            0,
            (char*) "rch06Mono.pk2"
        },
        {
            1,
            6,
            0,
            0,
            (char*) "ry13.pk2"
        },
        {
            1,
            9,
            0,
            0,
            (char*) "ry13.zld"
        },
        {
            1,
            7,
            0,
            0,
            (char*) "ry13_pzb.pak"
        },
        {
            1,
            8,
            0,
            0,
            (char*) "ry13.mh"
        },
        {
            1,
            6,
            0,
            0,
            (char*) "ry13Mono.pk2"
        },
        {
            1,
            21,
            0,
            0,
            (char*) "room_end.dmy"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f000.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f001.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f002.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f003.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f004.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f005.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f006.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f007.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f008.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f009.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f010.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f011.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f012.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f013.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f014.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f015.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f016.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f017.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f018.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f019.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f020.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f021.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f022.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f023.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f024.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f025.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f026.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f027.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f028.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f029.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f030.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f031.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f032.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f033.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f034.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f035.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f036.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f037.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f038.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f039.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f040.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f041.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f042.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f043.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f044.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f045.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f046.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f047.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f048.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f049.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f050.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f051.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f052.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f053.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f054.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f055.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f056.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f057.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f058.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f059.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f060.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f061.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f062.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f063.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f064.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f065.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f066.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f067.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f068.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f069.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f070.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f071.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f072.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f073.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f074.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f075.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f076.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f077.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f078.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f079.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f080.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f081.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f082.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f083.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f084.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f085.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f086.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f087.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f088.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f089.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f090.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f091.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f092.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f093.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f094.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f095.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f096.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f097.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f098.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f099.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f100.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f101.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f102.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f103.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f104.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f105.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f106.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f107.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f108.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f109.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f110.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f111.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f112.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f113.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f114.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f115.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f116.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f117.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f118.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f119.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f120.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f121.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f122.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f123.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f124.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f125.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f126.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f127.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f128.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f129.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f130.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f131.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f132.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f133.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f134.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f135.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f136.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f137.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f138.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f139.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f140.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f141.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f142.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f143.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f144.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f145.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f146.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f147.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f148.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f149.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f150.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f151.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f152.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f153.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f154.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f155.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f156.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f157.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f158.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f159.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f160.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f161.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f162.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f163.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f164.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f165.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f166.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f167.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f168.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f169.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f170.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f171.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f172.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f173.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f174.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f175.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f176.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f177.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f178.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f179.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f180.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f181.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f182.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f183.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f184.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f185.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f186.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f187.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f188.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f189.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f190.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f191.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f192.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f193.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f194.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f195.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f196.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f197.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f198.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f199.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f200.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f201.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f202.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f203.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f204.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f205.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f206.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f207.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f208.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f209.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f210.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f211.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f212.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f213.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f214.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f215.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f216.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f217.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f218.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f219.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f220.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f221.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f222.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f223.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f224.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f225.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f226.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f227.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f228.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f229.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f230.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f231.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f232.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f233.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f234.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f235.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f236.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f237.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f238.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f239.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f240.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f241.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f242.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f243.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f244.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f245.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f246.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f247.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f248.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f249.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f250.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f251.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f252.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f253.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f254.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f255.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f256.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f257.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f258.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f259.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f260.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f261.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f262.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f263.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f264.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f265.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f266.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f267.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f268.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f269.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f270.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f271.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f272.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f273.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f274.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f275.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f276.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f277.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f278.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f279.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f280.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f281.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f282.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f283.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f284.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f285.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f286.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f287.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f288.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f289.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f290.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f291.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f292.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f293.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f294.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f295.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f296.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f297.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f298.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f299.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f300.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f301.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f302.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f303.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f304.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f305.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f306.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f307.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f308.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f309.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f310.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f311.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f312.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f313.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f314.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f315.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f316.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f317.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f318.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f319.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f320.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f321.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f322.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f323.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f324.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f325.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f326.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f327.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f328.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f329.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f330.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f331.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f332.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f333.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f334.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f335.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f336.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f337.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f338.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f339.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f340.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f341.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f342.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f343.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f344.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f345.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f346.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f347.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f348.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f349.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f350.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f351.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f352.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f353.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f354.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f355.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f356.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f357.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f358.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f359.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f360.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f361.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f362.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f363.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f364.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f365.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f366.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f367.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f368.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f369.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f370.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f371.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f372.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f373.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f374.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f375.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f376.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f377.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f378.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f379.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f380.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f381.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f382.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f383.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f384.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f385.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f386.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f387.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f388.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f389.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f390.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f391.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f392.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f393.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f394.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f395.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f396.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f397.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f398.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f399.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f400.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f401.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f402.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f403.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f404.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f405.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f406.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f407.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f408.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f409.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f410.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f411.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f412.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f413.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f414.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f415.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f416.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f417.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f418.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f419.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f420.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f421.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f422.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f423.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f424.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f425.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f426.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f427.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f428.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f429.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f430.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f431.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f432.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f433.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f434.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f435.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f436.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f437.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f438.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f439.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f440.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f441.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f442.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f443.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f444.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f445.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f446.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f447.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f448.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f449.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f450.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f451.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f452.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f453.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f454.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f455.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f456.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f457.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f458.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f459.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f460.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f461.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f462.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f463.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f464.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f465.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f466.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f467.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f468.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f469.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f470.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f471.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f472.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f473.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f474.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f475.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f476.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f477.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f478.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f479.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f480.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f481.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f482.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f483.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f484.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f485.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f486.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f487.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f488.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f489.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f490.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f491.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f492.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f493.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f494.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f495.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f496.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f497.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f498.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f499.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f500.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f501.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f502.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f503.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f504.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f505.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f506.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f507.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f508.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f509.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f510.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f511.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f512.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f513.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f514.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f515.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f516.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f517.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f518.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f519.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f520.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f521.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f522.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f523.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f524.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f525.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f526.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f527.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f528.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f529.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f530.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f531.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f532.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f533.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f534.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f535.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f536.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f537.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f538.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f539.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f540.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f541.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f542.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f543.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f544.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f545.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f546.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f547.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f548.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f549.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f550.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f551.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f552.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f553.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f554.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f555.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f556.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f557.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f558.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f559.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f560.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f561.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f562.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f563.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f564.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f565.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f566.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f567.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f568.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f569.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f570.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f571.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f572.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f573.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f574.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f575.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f576.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f577.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f578.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f579.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f580.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f581.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f582.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f583.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f584.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f585.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f586.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f587.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f588.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f589.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f590.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f591.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f592.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f593.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f594.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f595.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f596.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f597.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f598.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f599.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f600.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f601.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f602.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f603.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f604.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f605.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f606.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f607.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f608.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f609.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f610.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f611.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f612.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f613.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f614.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f615.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f616.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f617.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f618.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f619.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f620.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f621.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f622.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f623.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f624.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f625.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f626.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f627.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f628.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f629.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f630.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f631.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f632.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f633.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f634.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f635.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f636.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f637.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f638.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f639.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f640.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f641.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f642.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f643.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f644.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f645.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f646.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f647.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f648.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f649.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f650.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f651.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f652.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f653.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f654.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f655.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f656.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f657.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f658.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f659.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f660.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f661.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f662.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f663.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f664.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f665.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f666.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f667.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f668.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f669.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f670.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f671.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f672.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f673.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f674.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f675.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f676.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f677.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f678.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f679.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f680.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f681.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f682.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f683.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f684.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f685.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f686.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f687.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f688.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f689.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f690.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f691.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f692.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f693.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f694.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f695.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f696.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f697.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f698.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f699.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f700.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f701.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f702.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f703.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f704.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f705.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f706.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f707.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f708.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f709.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f710.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f711.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f712.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f713.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f714.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f715.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f716.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f717.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f718.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f719.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f720.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f721.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f722.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f723.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f724.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f725.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f726.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f727.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f728.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f729.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f730.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f731.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f732.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f733.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f734.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f735.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f736.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f737.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f738.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f739.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f740.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f741.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f742.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f743.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f744.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f745.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f746.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f747.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f748.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f749.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f750.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f751.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f752.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f753.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f754.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f755.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f756.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f757.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f758.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f759.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f760.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f761.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f762.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f763.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f764.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f765.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f766.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f767.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f768.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f769.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f770.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f771.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f772.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f773.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f774.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f775.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f776.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f777.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f778.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f779.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f780.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f781.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f782.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f783.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f784.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f785.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f786.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f787.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f788.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f789.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f790.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f791.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f792.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f793.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f794.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f795.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f796.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f797.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f798.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f799.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f800.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f801.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f802.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f803.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f804.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f805.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f806.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f807.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f808.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f809.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f810.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f811.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f812.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f813.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f814.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f815.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f816.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f817.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f818.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f819.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f820.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f821.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f822.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f823.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f824.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f825.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f826.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f827.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f828.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f829.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f830.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f831.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f832.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f833.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f834.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f835.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f836.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f837.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f838.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f839.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f840.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f841.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f842.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f843.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f844.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f845.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f846.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f847.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f848.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f849.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f850.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f851.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f852.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f853.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f854.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f855.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f856.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f857.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f858.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f859.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f860.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f861.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f862.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f863.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f864.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f865.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f866.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f867.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f868.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f869.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f870.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f871.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f872.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f873.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f874.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f875.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f876.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f877.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f878.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f879.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f880.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f881.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f882.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f883.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f884.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f885.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f886.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f887.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f888.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f889.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f890.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f891.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f892.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f893.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f894.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f895.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f896.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f897.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f898.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f899.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f900.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f901.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f902.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f903.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f904.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f905.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f906.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f907.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f908.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f909.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f910.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f911.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f912.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f913.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f914.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f915.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f916.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f917.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f918.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f919.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f920.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f921.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f922.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f923.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f924.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f925.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f926.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f927.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f928.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f929.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f930.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f931.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f932.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f933.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f934.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f935.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f936.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f937.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f938.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f939.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f940.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f941.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f942.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f943.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f944.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f945.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f946.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f947.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f948.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f949.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f950.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f951.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f952.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f953.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f954.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f955.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f956.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f957.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f958.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f959.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f960.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f961.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f962.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f963.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f964.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f965.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f966.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f967.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f968.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f969.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f970.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f971.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f972.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f973.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f974.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f975.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f976.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f977.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f978.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f979.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f980.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f981.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f982.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f983.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f984.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f985.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f986.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f987.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f988.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f989.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f990.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f991.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f992.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f993.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f994.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f995.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f996.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f997.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f998.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f999.pk2"
        },
        {
            1,
            11,
            0,
            0,
            (char*) "d000.pk2"
        },
        {
            1,
            11,
            0,
            0,
            (char*) "d001.pk2"
        },
        {
            1,
            11,
            0,
            0,
            (char*) "d002.pk2"
        },
        {
            1,
            11,
            0,
            0,
            (char*) "d003.pk2"
        },
        {
            1,
            11,
            0,
            0,
            (char*) "d004.pk2"
        },
        {
            1,
            11,
            0,
            0,
            (char*) "d005.pk2"
        },
        {
            1,
            11,
            0,
            0,
            (char*) "d006.pk2"
        },
        {
            1,
            11,
            0,
            0,
            (char*) "d007.pk2"
        },
        {
            1,
            11,
            0,
            0,
            (char*) "d008.pk2"
        },
        {
            1,
            11,
            0,
            0,
            (char*) "d009.pk2"
        },
        {
            1,
            11,
            0,
            0,
            (char*) "d010.pk2"
        },
        {
            1,
            11,
            0,
            0,
            (char*) "d100.pk2"
        },
        {
            1,
            11,
            0,
            0,
            (char*) "d101.pk2"
        },
        {
            1,
            11,
            0,
            0,
            (char*) "d102.pk2"
        },
        {
            1,
            11,
            0,
            0,
            (char*) "d103.pk2"
        },
        {
            1,
            11,
            0,
            0,
            (char*) "d104.pk2"
        },
        {
            1,
            11,
            0,
            0,
            (char*) "d105.pk2"
        },
        {
            1,
            11,
            0,
            0,
            (char*) "d106.pk2"
        },
        {
            1,
            11,
            0,
            0,
            (char*) "d107.pk2"
        },
        {
            1,
            11,
            0,
            0,
            (char*) "d108.pk2"
        },
        {
            1,
            11,
            0,
            0,
            (char*) "d109.pk2"
        },
        {
            1,
            11,
            0,
            0,
            (char*) "d110.pk2"
        },
        {
            1,
            11,
            0,
            0,
            (char*) "d111.pk2"
        },
        {
            1,
            11,
            0,
            0,
            (char*) "d112.pk2"
        },
        {
            1,
            11,
            0,
            0,
            (char*) "d113.pk2"
        },
        {
            1,
            11,
            0,
            0,
            (char*) "d114.pk2"
        },
        {
            1,
            11,
            0,
            0,
            (char*) "d115.pk2"
        },
        {
            1,
            11,
            0,
            0,
            (char*) "d116.pk2"
        },
        {
            1,
            11,
            0,
            0,
            (char*) "d117.pk2"
        },
        {
            1,
            11,
            0,
            0,
            (char*) "d118.pk2"
        },
        {
            1,
            11,
            0,
            0,
            (char*) "d119.pk2"
        },
        {
            1,
            11,
            0,
            0,
            (char*) "d120.pk2"
        },
        {
            1,
            11,
            0,
            0,
            (char*) "d121.pk2"
        },
        {
            1,
            11,
            0,
            0,
            (char*) "d122.pk2"
        },
        {
            1,
            11,
            0,
            0,
            (char*) "d123.pk2"
        },
        {
            1,
            11,
            0,
            0,
            (char*) "d124.pk2"
        },
        {
            1,
            11,
            0,
            0,
            (char*) "d125.pk2"
        },
        {
            1,
            11,
            0,
            0,
            (char*) "d126.pk2"
        },
        {
            1,
            11,
            0,
            0,
            (char*) "d127.pk2"
        },
        {
            1,
            11,
            0,
            0,
            (char*) "d128.pk2"
        },
        {
            1,
            11,
            0,
            0,
            (char*) "d129.pk2"
        },
        {
            1,
            11,
            0,
            0,
            (char*) "d130.pk2"
        },
        {
            1,
            11,
            0,
            0,
            (char*) "d200.pk2"
        },
        {
            1,
            11,
            0,
            0,
            (char*) "d201.pk2"
        },
        {
            1,
            11,
            0,
            0,
            (char*) "d202.pk2"
        },
        {
            1,
            11,
            0,
            0,
            (char*) "d203.pk2"
        },
        {
            1,
            11,
            0,
            0,
            (char*) "d204.pk2"
        },
        {
            1,
            11,
            0,
            0,
            (char*) "d205.pk2"
        },
        {
            1,
            11,
            0,
            0,
            (char*) "d206.pk2"
        },
        {
            1,
            11,
            0,
            0,
            (char*) "d207.pk2"
        },
        {
            1,
            11,
            0,
            0,
            (char*) "d208.pk2"
        },
        {
            1,
            11,
            0,
            0,
            (char*) "d209.pk2"
        },
        {
            1,
            11,
            0,
            0,
            (char*) "d210.pk2"
        },
        {
            1,
            11,
            0,
            0,
            (char*) "d211.pk2"
        },
        {
            1,
            11,
            0,
            0,
            (char*) "d212.pk2"
        },
        {
            1,
            11,
            0,
            0,
            (char*) "d213.pk2"
        },
        {
            1,
            11,
            0,
            0,
            (char*) "d214.pk2"
        },
        {
            1,
            11,
            0,
            0,
            (char*) "d215.pk2"
        },
        {
            1,
            11,
            0,
            0,
            (char*) "d216.pk2"
        },
        {
            1,
            11,
            0,
            0,
            (char*) "d217.pk2"
        },
        {
            1,
            11,
            0,
            0,
            (char*) "d218.pk2"
        },
        {
            1,
            11,
            0,
            0,
            (char*) "d219.pk2"
        },
        {
            1,
            11,
            0,
            0,
            (char*) "d220.pk2"
        },
        {
            1,
            11,
            0,
            0,
            (char*) "d221.pk2"
        },
        {
            1,
            11,
            0,
            0,
            (char*) "d222.pk2"
        },
        {
            1,
            11,
            0,
            0,
            (char*) "d223.pk2"
        },
        {
            1,
            11,
            0,
            0,
            (char*) "d224.pk2"
        },
        {
            1,
            11,
            0,
            0,
            (char*) "d225.pk2"
        },
        {
            1,
            11,
            0,
            0,
            (char*) "d226.pk2"
        },
        {
            1,
            11,
            0,
            0,
            (char*) "d227.pk2"
        },
        {
            1,
            11,
            0,
            0,
            (char*) "d228.pk2"
        },
        {
            1,
            11,
            0,
            0,
            (char*) "d229.pk2"
        },
        {
            1,
            11,
            0,
            0,
            (char*) "d230.pk2"
        },
        {
            1,
            11,
            0,
            0,
            (char*) "d231.pk2"
        },
        {
            1,
            11,
            0,
            0,
            (char*) "d232.pk2"
        },
        {
            1,
            11,
            0,
            0,
            (char*) "d300.pk2"
        },
        {
            1,
            11,
            0,
            0,
            (char*) "d301.pk2"
        },
        {
            1,
            11,
            0,
            0,
            (char*) "d302.pk2"
        },
        {
            1,
            11,
            0,
            0,
            (char*) "d303.pk2"
        },
        {
            1,
            11,
            0,
            0,
            (char*) "d304.pk2"
        },
        {
            1,
            11,
            0,
            0,
            (char*) "d305.pk2"
        },
        {
            1,
            11,
            0,
            0,
            (char*) "d306.pk2"
        },
        {
            1,
            11,
            0,
            0,
            (char*) "d307.pk2"
        },
        {
            1,
            11,
            0,
            0,
            (char*) "d308.pk2"
        },
        {
            1,
            11,
            0,
            0,
            (char*) "d309.pk2"
        },
        {
            1,
            11,
            0,
            0,
            (char*) "d310.pk2"
        },
        {
            1,
            11,
            0,
            0,
            (char*) "d311.pk2"
        },
        {
            1,
            11,
            0,
            0,
            (char*) "d312.pk2"
        },
        {
            1,
            11,
            0,
            0,
            (char*) "d313.pk2"
        },
        {
            1,
            11,
            0,
            0,
            (char*) "d314.pk2"
        },
        {
            1,
            11,
            0,
            0,
            (char*) "d315.pk2"
        },
        {
            1,
            11,
            0,
            0,
            (char*) "d316.pk2"
        },
        {
            1,
            11,
            0,
            0,
            (char*) "d317.pk2"
        },
        {
            1,
            11,
            0,
            0,
            (char*) "d318.pk2"
        },
        {
            1,
            11,
            0,
            0,
            (char*) "d319.pk2"
        },
        {
            1,
            11,
            0,
            0,
            (char*) "d320.pk2"
        },
        {
            1,
            11,
            0,
            0,
            (char*) "d321.pk2"
        },
        {
            1,
            11,
            0,
            0,
            (char*) "d322.pk2"
        },
        {
            1,
            11,
            0,
            0,
            (char*) "d323.pk2"
        },
        {
            1,
            11,
            0,
            0,
            (char*) "d324.pk2"
        },
        {
            1,
            11,
            0,
            0,
            (char*) "d325.pk2"
        },
        {
            1,
            11,
            0,
            0,
            (char*) "d326.pk2"
        },
        {
            1,
            11,
            0,
            0,
            (char*) "d327.pk2"
        },
        {
            1,
            11,
            0,
            0,
            (char*) "d328.pk2"
        },
        {
            1,
            11,
            0,
            0,
            (char*) "d329.pk2"
        },
        {
            1,
            11,
            0,
            0,
            (char*) "d330.pk2"
        },
        {
            1,
            11,
            0,
            0,
            (char*) "d331.pk2"
        },
        {
            1,
            11,
            0,
            0,
            (char*) "d332.pk2"
        },
        {
            1,
            11,
            0,
            0,
            (char*) "d333.pk2"
        },
        {
            1,
            11,
            0,
            0,
            (char*) "d334.pk2"
        },
        {
            1,
            11,
            0,
            0,
            (char*) "d335.pk2"
        },
        {
            1,
            11,
            0,
            0,
            (char*) "d336.pk2"
        },
        {
            1,
            11,
            0,
            0,
            (char*) "d337.pk2"
        },
        {
            1,
            11,
            0,
            0,
            (char*) "d338.pk2"
        },
        {
            1,
            11,
            0,
            0,
            (char*) "d339.pk2"
        },
        {
            1,
            11,
            0,
            0,
            (char*) "d340.pk2"
        },
        {
            1,
            11,
            0,
            0,
            (char*) "d400.pk2"
        },
        {
            1,
            11,
            0,
            0,
            (char*) "d800.pk2"
        },
        {
            1,
            11,
            0,
            0,
            (char*) "d801.pk2"
        },
        {
            1,
            11,
            0,
            0,
            (char*) "d802.pk2"
        },
        {
            1,
            11,
            0,
            0,
            (char*) "d803.pk2"
        },
        {
            1,
            11,
            0,
            0,
            (char*) "d804.pk2"
        },
        {
            1,
            11,
            0,
            0,
            (char*) "d805.pk2"
        },
        {
            1,
            11,
            0,
            0,
            (char*) "d806.pk2"
        },
        {
            1,
            11,
            0,
            0,
            (char*) "d807.pk2"
        },
        {
            1,
            11,
            0,
            0,
            (char*) "d808.pk2"
        },
        {
            1,
            11,
            0,
            0,
            (char*) "d809.pk2"
        },
        {
            1,
            11,
            0,
            0,
            (char*) "d810.pk2"
        },
        {
            1,
            12,
            0,
            0,
            (char*) "i000_play_camera.pk2"
        },
        {
            1,
            12,
            0,
            0,
            (char*) "i001_play_light.pk2"
        },
        {
            1,
            12,
            0,
            0,
            (char*) "i002_note.pk2"
        },
        {
            1,
            12,
            0,
            0,
            (char*) "i003_gyakusatu.pk2"
        },
        {
            1,
            12,
            0,
            0,
            (char*) "i004_dummy.pk2"
        },
        {
            1,
            12,
            0,
            0,
            (char*) "i005_key.pk2"
        },
        {
            1,
            12,
            0,
            0,
            (char*) "i006_megane.pk2"
        },
        {
            1,
            12,
            0,
            0,
            (char*) "i007_megane.pk2"
        },
        {
            1,
            12,
            0,
            0,
            (char*) "i008_gantai.pk2"
        },
        {
            0,
            21,
            0,
            0,
            (char*) "bgm_start.dmy"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "Danmatu_male.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "Danmatu_male.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "Danmatu_female.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "Danmatu_female.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "ese_kusaki_zawameki.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "ese_kusaki_zawameki.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "ese_kodomo_hasirimawari.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "ese_kodomo_hasirimawari.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "kan043_rakurai.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "kan043_rakurai.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "kan042_kaminari.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "kan042_kaminari.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "ese_kaminari.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "ese_kaminari.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "ese_hinadan_kagi.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "ese_hinadan_kagi.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "kan020_tyou.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "kan020_tyou.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "kan003_kureha.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "kan003_kureha.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "kan002_kutiki.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "kan002_kutiki.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "voice_murarei.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "voice_murarei.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "ykn25_kusa.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "ykn25_kusa.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "ykn21_imibito.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "ykn21_imibito.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "ykn20_guujirei.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "ykn20_guujirei.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "ykn19_suishi.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "ykn19_suishi.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "ykn15_karakurishi.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "ykn15_karakurishi.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "ykn14_kubiore.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "ykn14_kubiore.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "ykn07_kusabi3.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "ykn07_kusabi3.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "ykn06_kusabi2.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "ykn06_kusabi2.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "ykn05_kusabi1.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "ykn05_kusabi1.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "scene0240.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "scene0240.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "scene0210.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "scene0210.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "scene0190.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "scene0190.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "scene0170.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "scene0170.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "scene0160.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "scene0160.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "scene0150.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "scene0150.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "scene0133.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "scene0133.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "scene0132.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "scene0132.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "scene0130.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "scene0130.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "ykn12_hahaoyarei.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "ykn12_hahaoyarei.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "ykn10_waninngyou.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "ykn10_waninngyou.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "flashout.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "flashout.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "flashin.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "flashin.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "ykn16_onikodomo.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "ykn16_onikodomo.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "ykn08_chitose.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "ykn08_chitose.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "ykn31_saerei3.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "ykn31_saerei3.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "ykn03_saerei2.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "ykn03_saerei2.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "ykn02_saerei1.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "ykn02_saerei1.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "bgm010_prm90.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "bgm010_prm90.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "ese_door_huuindoor.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "ese_door_huuindoor.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "menyu.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "menyu.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "ane_yarare.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "ane_yarare.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "kan033_Nazo.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "kan033_Nazo.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "kan032_okyou.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "kan032_okyou.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "ykn13_hako.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "ykn13_hako.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "rt002_ner.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "rt002_ner.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MIYAKO_AG_10.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MIYAKO_AG_10.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MIYAKO_AG_09.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MIYAKO_AG_09.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MIYAKO_AG_08.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MIYAKO_AG_08.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MIYAKO_AG_07.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MIYAKO_AG_07.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MIYAKO_AG_06.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MIYAKO_AG_06.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MIYAKO_AG_05.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MIYAKO_AG_05.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MIYAKO_AG_04.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MIYAKO_AG_04.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MIYAKO_AG_03.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MIYAKO_AG_03.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MIYAKO_AG_02.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MIYAKO_AG_02.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MIYAKO_AG_01.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MIYAKO_AG_01.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MIYAKO_AG_00.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MIYAKO_AG_00.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "ese_Door_mon_sime.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "ese_Door_mon_sime.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "ese_Door_mon_open.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "ese_Door_mon_open.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "ese_door_fusuma_sime.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "ese_door_fusuma_sime.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "itsuki_talk_05.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "itsuki_talk_05.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "itsuki_talk_04.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "itsuki_talk_04.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "itsuki_talk_03.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "itsuki_talk_03.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "itsuki_talk_02.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "itsuki_talk_02.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_36.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_36.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_35.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_35.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_34.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_34.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_33.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_33.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_32.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_32.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_31.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_31.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_30.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_30.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_29.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_29.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_28.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_28.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_27.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_27.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_26.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_26.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_25.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_25.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_24.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_24.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_23.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_23.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_21.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_21.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_20.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_20.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_19.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_19.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_18.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_18.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_17.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_17.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_16.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_16.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_15.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_15.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_14.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_14.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_13.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_13.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_12.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_12.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_11.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_11.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_10.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_10.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_09.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_09.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_08.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_08.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_07.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_07.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_06.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_06.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_05.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_05.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_04.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_04.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_03.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_03.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_02.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_02.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_01.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_01.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_00.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_00.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "itsuki_talk_01.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "itsuki_talk_01.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "ese_door_fusuma_open.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "ese_door_fusuma_open.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "itsuki_talk_00.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "itsuki_talk_00.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "ykn09_rakka.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "ykn09_rakka.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "bgm004_menu1.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "bgm004_menu1.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "bgm000_title.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "bgm000_title.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "ykn30_makirei.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "ykn30_makirei.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "ykn22_murarei.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "ykn22_murarei.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "ykn00_yami.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "ykn00_yami.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "showtitle.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "showtitle.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "kan037_conte.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "kan037_conte.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "kan036_nanika.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "kan036_nanika.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "kan035_menniwa.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "kan035_menniwa.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "kan029_sandou.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "kan029_sandou.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "kan028_mura1.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "kan028_mura1.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "kan025_misono.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "kan025_misono.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "kan023_okunai1.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "kan023_okunai1.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "kan022_hosoi.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "kan022_hosoi.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "kan021_hiroi.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "kan021_hiroi.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "kan018_sae.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "kan018_sae.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "kan017_rhythm.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "kan017_rhythm.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "kan007_kurosawa.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "kan007_kurosawa.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "kan006_tachibana.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "kan006_tachibana.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "kan005_kiryuu.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "kan005_kiryuu.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "ese001_knockdoor.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "ese001_knockdoor.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "kan004_ousaka.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "kan004_ousaka.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "scene0120.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "scene0120.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "scene0121.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "scene0121.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "scene0122.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "scene0122.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "scene0140.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "scene0140.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "kan010_hasino_ue.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "kan010_hasino_ue.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "ykn26_kusa2.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "ykn26_kusa2.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "scene0230.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "scene0230.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "scene0231.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "scene0231.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "scene0350.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "scene0350.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "scene0352.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "scene0352.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "scene9001.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "scene9001.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "ykn23_murarei_B.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "ykn23_murarei_B.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "ykn24_murarei_C.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "ykn24_murarei_C.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "ESE_TOUSYUTALK.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "ESE_TOUSYUTALK.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "GUUJI_AG_00.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "GUUJI_AG_00.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAKABE_AG_00.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAKABE_AG_00.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MURA_AG_00.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MURA_AG_00.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MURA_AG_01.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MURA_AG_01.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MURA_AG_02.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MURA_AG_02.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "TOUSYU_AG_00.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "TOUSYU_AG_00.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "TOUSYU_AG_01.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "TOUSYU_AG_01.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "TOUSYU_AG_02.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "TOUSYU_AG_02.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "ESE_GUUJITALK.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "ESE_GUUJITALK.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "scene0410.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "scene0410.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "scene9002.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "scene9002.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "scene0330.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "scene0330.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "scene0340.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "scene0340.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "scene9302.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "scene9302.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "scene9501.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "scene9501.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "ese_wasan_01.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "ese_wasan_01.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "ese_wasan_00.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "ese_wasan_00.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "itsuki_talk_06.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "itsuki_talk_06.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "itsuki_talk_07.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "itsuki_talk_07.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "itsuki_talk_08.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "itsuki_talk_08.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "itsuki_talk_09.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "itsuki_talk_09.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "itsuki_talk_10.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "itsuki_talk_10.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_37.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_37.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_38.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_38.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_39.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_39.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_40.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_40.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_41.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_41.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "ese_hashigo.hxd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "ese_hashigo.bd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "ese_hashigo.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "ese_hikido.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "ese_hikido.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "ese_oshiire_goto.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "ese_oshiire_goto.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "ese_oshiire_suzu.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "ese_oshiire_suzu.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "ese_tobiratataki.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "ese_tobiratataki.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "ese_yukashita.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "ese_yukashita.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "kan_ame_00.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "kan_ame_00.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "kan_wasan_00.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "kan_wasan_00.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "kan_wasan_01.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "kan_wasan_01.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "kan_wasan_02.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "kan_wasan_02.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "ese_onechan00.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "ese_onechan00.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "ese_onechan01.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "ese_onechan01.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "ese_onechan02.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "ese_onechan02.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "ese_onechan03.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "ese_onechan03.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "NINGYOU_AG_01.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "NINGYOU_AG_01.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "NINGYOU_AG_02.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "NINGYOU_AG_02.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "TOUSYU_AG_03.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "TOUSYU_AG_03.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "GD042.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "GD042.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "GD053.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "GD053.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "reiseki_voise_00.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "reiseki_voise_00.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "reiseki_voise_01.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "reiseki_voise_01.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "reiseki_voise_02.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "reiseki_voise_02.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "reiseki_voise_03.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "reiseki_voise_03.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "reiseki_voise_04.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "reiseki_voise_04.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "reiseki_voise_05.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "reiseki_voise_05.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "reiseki_voise_06.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "reiseki_voise_06.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "reiseki_voise_07.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "reiseki_voise_07.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "reiseki_voise_08.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "reiseki_voise_08.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "reiseki_voise_09.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "reiseki_voise_09.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "reiseki_voise_10.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "reiseki_voise_10.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "reiseki_voise_11.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "reiseki_voise_11.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "itsuki_talk_11.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "itsuki_talk_11.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "itsuki_talk_12.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "itsuki_talk_12.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "itsuki_talk_13.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "itsuki_talk_13.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "itsuki_talk_14.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "itsuki_talk_14.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "itsuki_talk_15.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "itsuki_talk_15.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "itsuki_talk_16.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "itsuki_talk_16.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "itsuki_talk_17.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "itsuki_talk_17.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "itsuki_talk_18.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "itsuki_talk_18.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "itsuki_talk_19.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "itsuki_talk_19.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "itsuki_talk_20.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "itsuki_talk_20.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "itsuki_talk_21.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "itsuki_talk_21.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "itsuki_talk_22.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "itsuki_talk_22.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "itsuki_talk_23.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "itsuki_talk_23.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_42.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_42.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_43.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_43.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_44.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_44.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_45.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_45.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_46.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_46.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_47.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_47.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_48.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_48.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_49.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_49.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_50.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_50.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_51.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_51.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_52.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_52.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_53.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_53.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_54.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_54.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_55.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_55.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_56.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_56.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_57.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_57.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_58.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_58.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_59.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_59.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_60.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_60.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_61.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_61.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_62.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_62.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_63.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_63.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "ykn04_masumi.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "ykn04_masumi.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "ese_shikake.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "ese_shikake.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "scene0110.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "scene0110.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "scene0510.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "scene0510.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "scene0520.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "scene0520.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "ykn11_futagorei.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "ykn11_futagorei.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "ykn17_onikodomo_B.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "ykn17_onikodomo_B.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "ykn18_onikodomo_C.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "ykn18_onikodomo_C.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "ykn27_tousyu.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "ykn27_tousyu.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "kan044_chika.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "kan044_chika.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "bgm005_menu2.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "bgm005_menu2.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "bgm006_clear.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "bgm006_clear.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "bgm007_win.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "bgm007_win.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "bgm008_lose.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "bgm008_lose.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "bgm009_start.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "bgm009_start.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAKABE_AG_01.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAKABE_AG_01.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAKABE_AG_02.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAKABE_AG_02.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "ESE_CHITOSE_RUN.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "ESE_CHITOSE_RUN.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "ESE_CHITOSE_RUN_FO.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "ESE_CHITOSE_RUN_FO.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "CHITOSE_AG_00.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "CHITOSE_AG_00.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "KDM_by_AG_00.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "KDM_by_AG_00.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "KDM_by_AG_01.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "KDM_by_AG_01.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "KDM_by_AG_02.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "KDM_by_AG_02.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "KDM_by_AG_03.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "KDM_by_AG_03.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "KDM_by_AG_04.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "KDM_by_AG_04.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "KDM_gl_AG_00.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "KDM_gl_AG_00.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "KDM_gl_AG_01.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "KDM_gl_AG_01.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "KDM_gl_AG_02.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "KDM_gl_AG_02.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "KDM_gl_AG_03.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "KDM_gl_AG_03.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "KDM_gl_AG_04.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "KDM_gl_AG_04.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "scene0610.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "scene0610.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "scene0620.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "scene0620.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "scene0720.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "scene0720.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "scene0730.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "scene0730.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "scene9101.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "scene9101.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "scene9203.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "scene9203.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "scene9204.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "scene9204.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "scene9205.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "scene9205.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "scene9303.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "scene9303.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "scene0820.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "scene0820.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "RT_KOKONIITE_STR.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "RT_KOKONIITE_STR.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "GD210_CHAKUMI_STR.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "GD210_CHAKUMI_STR.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "bgm010_omake.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "bgm010_omake.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "chitose_AG_01.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "chitose_AG_01.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "futago_AG_00.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "futago_AG_00.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "futago_AG_01.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "futago_AG_01.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "futago_AG_02.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "futago_AG_02.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "KDM_hshs_AG.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "KDM_hshs_AG.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "SAE_laugh_01.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "SAE_laugh_01.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "SAE_laugh_02.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "SAE_laugh_02.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "SAE_laugh_03.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "SAE_laugh_03.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "ESE_GHOST_VOICE_STR.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "ESE_GHOST_VOICE_STR.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "ese_miyako_dokonano.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "ese_miyako_dokonano.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "ese_miyako_okaeri.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "ese_miyako_okaeri.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "ese_miyako_susurinaki.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "ese_miyako_susurinaki.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "ese_miyako_umeki.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "ese_miyako_umeki.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "ese_miyako_yurusite.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "ese_miyako_yurusite.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "ese_suzunone_fo.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "ese_suzunone_fo.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "gd105_chitose.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "gd105_chitose.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "kan_36_nanika2.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "kan_36_nanika2.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "kan_fukamiti_wasan.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "kan_fukamiti_wasan.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "kan_nieza.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "kan_nieza.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "kan_uturo.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "kan_uturo.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "scene0721.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "scene0721.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "ese_ohuda.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "ese_ohuda.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "reiseki_voise_12.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "reiseki_voise_12.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "reiseki_voise_13.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "reiseki_voise_13.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "reiseki_voise_14.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "reiseki_voise_14.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "reiseki_voise_15.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "reiseki_voise_15.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "reiseki_voise_16.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "reiseki_voise_16.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "reiseki_voise_17.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "reiseki_voise_17.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "reiseki_voise_18.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "reiseki_voise_18.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "reiseki_voise_19.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "reiseki_voise_19.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "reiseki_voise_20.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "reiseki_voise_20.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "reiseki_voise_21.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "reiseki_voise_21.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "reiseki_voise_22.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "reiseki_voise_22.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "reiseki_voise_23.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "reiseki_voise_23.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "reiseki_voise_24.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "reiseki_voise_24.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "reiseki_voise_25.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "reiseki_voise_25.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "reiseki_voise_26.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "reiseki_voise_26.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "reiseki_voise_26_1.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "reiseki_voise_26_1.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "reiseki_voise_27.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "reiseki_voise_27.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "reiseki_voise_28.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "reiseki_voise_28.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "reiseki_voise_29.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "reiseki_voise_29.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "reiseki_voise_30.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "reiseki_voise_30.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "reiseki_voise_31.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "reiseki_voise_31.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "reiseki_voise_32.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "reiseki_voise_32.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "reiseki_voise_33.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "reiseki_voise_33.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "reiseki_voise_34.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "reiseki_voise_34.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAKABE_AG_03.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAKABE_AG_03.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAKABE_AG_04.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAKABE_AG_04.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAKABE_AG_05.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAKABE_AG_05.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAKABE_AG_06.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAKABE_AG_06.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAKABE_AG_07.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAKABE_AG_07.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAKABE_AG_08.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAKABE_AG_08.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAKABE_AG_09.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAKABE_AG_09.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAKABE_AG_10.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAKABE_AG_10.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAKABE_AG_11.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAKABE_AG_11.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAKABE_AG_12.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAKABE_AG_12.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAKABE_AG_13.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAKABE_AG_13.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAKABE_AG_14.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAKABE_AG_14.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAKABE_AG_15.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAKABE_AG_15.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_100.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_100.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_101.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_101.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_102.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_102.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_103.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_103.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_104.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_104.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_105.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_105.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_106.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_106.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_107.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_107.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_108.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_108.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_109.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_109.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_110.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_110.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_111.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_111.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_112.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_112.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_113.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_113.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_114.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_114.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_115.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_115.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_116.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_116.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_117.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_117.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_118.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_118.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_119.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_119.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_120.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_120.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_121.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_121.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_122.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_122.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_123.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_123.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_124.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_124.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_125.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_125.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_126.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_126.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_127.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_127.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_128.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_128.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_129.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_129.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_130.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_130.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_131.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_131.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_132.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_132.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_133.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_133.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_134.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_134.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_135.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_135.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_136.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_136.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_137.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_137.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_138.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_138.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_139.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_139.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_140.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_140.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_141.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_141.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_142.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_142.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_143.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_143.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_144.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_144.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_145.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_145.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_146.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_146.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_147.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_147.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_148.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_148.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_149.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_149.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_150.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_150.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_151.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_151.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_152.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_152.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_153.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_153.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_154.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_154.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_155.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_155.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_156.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_156.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_157.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_157.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_158.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_158.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_159.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_159.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_160.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_160.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_161.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_161.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_162.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_162.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_163.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_163.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_164.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_164.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_165.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_165.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_166.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_166.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_167.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_167.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_168.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_168.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_169.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_169.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_170.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_170.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_171.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_171.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_172.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_172.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_173.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_173.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_174.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_174.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_175.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_175.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_176.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_176.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_177.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_177.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_178.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_178.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_179.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_179.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_180.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_180.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_181.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_181.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_182.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_182.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_183.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_183.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_184.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_184.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_185.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_185.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_186.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_186.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_187.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_187.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_188.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_188.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_189.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_189.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_190.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_190.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_191.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_191.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_192.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_192.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_193.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_193.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_194.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_194.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_195.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_195.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_196.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_196.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_197.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_197.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_198.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_198.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_199.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_199.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_200.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_200.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_201.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_201.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_202.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_202.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_203.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_203.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_204.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_204.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_205.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_205.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_206.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_206.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_207.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_207.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_208.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_208.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_209.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_209.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_210.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_210.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_211.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_211.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_212.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_212.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_213.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_213.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_214.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_214.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_215.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_215.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_216.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_216.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_217.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_217.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_64.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_64.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_65.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_65.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_66.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_66.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_67.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_67.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_68.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_68.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_69.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_69.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_70.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_70.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_71.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_71.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_72.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_72.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_73.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_73.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_74.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_74.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_75.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_75.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_76.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_76.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_77.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_77.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_78.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_78.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_79.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_79.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_80.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_80.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_81.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_81.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_82.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_82.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_83.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_83.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_84.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_84.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_85.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_85.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_86.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_86.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_87.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_87.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_88.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_88.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_89.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_89.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_90.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_90.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_91.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_91.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_92.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_92.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_93.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_93.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_94.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_94.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_95.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_95.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_96.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_96.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_97.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_97.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_98.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_98.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_99.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_99.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MURA_AG_03.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MURA_AG_03.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MURA_AG_04.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MURA_AG_04.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MURA_AG_05.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MURA_AG_05.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "NINGYOU_AG_03.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "NINGYOU_AG_03.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "NINGYOU_AG_04.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "NINGYOU_AG_04.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "NINGYOU_AG_05.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "NINGYOU_AG_05.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "NINGYOU_AG_06.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "NINGYOU_AG_06.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "TOUSYU_AG_04.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "TOUSYU_AG_04.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "TOUSYU_AG_05.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "TOUSYU_AG_05.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "TOUSYU_AG_06.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "TOUSYU_AG_06.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "TOUSYU_AG_07.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "TOUSYU_AG_07.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "TOUSYU_AG_08.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "TOUSYU_AG_08.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_218.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_218.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "synchro_2syou.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "synchro_2syou.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "synchro_3syou.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "synchro_3syou.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "synchro_5syou.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "synchro_5syou.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "synchro_9syou_a.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "synchro_9syou_a.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "synchro_9syou_b.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "synchro_9syou_b.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_221.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_221.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_220.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_220.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_219.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_219.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "scene9206.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "scene9206.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "scene1010.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "scene1010.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "ese_tasukete.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "ese_tasukete.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "ese_uturo_futago.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "ese_uturo_futago.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "bgm011_gameover.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "bgm011_gameover.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_222.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_222.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "GD243_yunomi_str.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "GD243_yunomi_str.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "ESE_RT_MARI.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "ESE_RT_MARI.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "ESE_RT_TANAGATA.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "ESE_RT_TANAGATA.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "REISEKI_VOISE_35.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "REISEKI_VOISE_35.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "REISEKI_VOISE_36.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "REISEKI_VOISE_36.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "REISEKI_VOISE_37.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "REISEKI_VOISE_37.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "REISEKI_VOISE_38.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "REISEKI_VOISE_38.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "REISEKI_VOISE_39.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "REISEKI_VOISE_39.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "RT_ESE_KATANA.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "RT_ESE_KATANA.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "REISEKI_VOISE_40.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "REISEKI_VOISE_40.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "REISEKI_VOISE_41.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "REISEKI_VOISE_41.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "itsuki_talk_24.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "itsuki_talk_24.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "ESE_KUSABI_TOJYO.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "ESE_KUSABI_TOJYO.str"
        },
        {
            0,
            21,
            0,
            0,
            (char*) "bgm_end.dmy"
        },
        {
            0,
            21,
            0,
            0,
            (char*) "se_start.dmy"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "yamib_se_btl.hxd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "yamib_se_btl.bd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "miya_se_btl.hxd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "miya_se_btl.bd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "kusabi_se_btl.hxd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "kusabi_se_btl.bd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "murac_se_btl.hxd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "murac_se_btl.bd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "tes.hxd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "tes.bd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "aj_001_32.hxd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "aj_001_32.bd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "aj_002_32.hxd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "aj_002_32.bd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "aj_003_32.hxd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "aj_003_32.bd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "aj_004_32.hxd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "aj_004_32.bd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "aj_005_32.hxd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "aj_005_32.bd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "aj_006_32.hxd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "aj_006_32.bd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "aj_007_32.hxd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "aj_007_32.bd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "aj_008_32.hxd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "aj_008_32.bd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "aj_009_22.hxd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "aj_009_22.bd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "aj_011_22.hxd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "aj_011_22.bd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "aj_012_22.hxd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "aj_012_22.bd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "aj_013a_22.hxd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "aj_013a_22.bd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "aj_013b_22.hxd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "aj_013b_22.bd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "aj_013c_22.hxd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "aj_013c_22.bd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "aj_013d_22.hxd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "aj_013d_22.bd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "aj_015_32.hxd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "aj_015_32.bd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "aj_016_22.hxd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "aj_016_22.bd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "Door009_kagi_tyuu.hxd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "Door009_kagi_tyuu.bd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "Door008_kagi_syou.hxd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "Door008_kagi_syou.bd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "Door007_dai_akanai.hxd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "Door007_dai_akanai.bd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "Door006_tyuu_akanai.hxd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "Door006_tyuu_akanai.bd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "Door004_kuguri.hxd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "Door004_kuguri.bd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "Door003_hikido.hxd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "Door003_hikido.bd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "Door002_oosaka.hxd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "Door002_oosaka.bd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "Door005_husuma_akana.hxd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "Door005_husuma_akana.bd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "ese006_hutasimeru.hxd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "ese006_hutasimeru.bd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "ese007_hutaakeru.hxd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "ese007_hutaakeru.bd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "ese005_hutaugoku.hxd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "ese005_hutaugoku.bd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "Foot016_kusa.hxd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "Foot016_kusa.bd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "Foot015_tuti.hxd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "Foot015_tuti.bd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "Foot014_itanoma3.hxd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "Foot014_itanoma3.bd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "Foot013_doma1.hxd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "Foot013_doma1.bd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "Foot012_extkisimi.hxd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "Foot012_extkisimi.bd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "Foot011_otibamajiri.hxd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "Foot011_otibamajiri.bd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "Foot010_jyarimajiri.hxd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "Foot010_jyarimajiri.bd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "Foot009_waretouki.hxd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "Foot009_waretouki.bd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "Foot008_itanoma2.hxd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "Foot008_itanoma2.bd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "Foot007_itanoma.hxd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "Foot007_itanoma.bd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "Foot006_itakaidan.hxd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "Foot006_itakaidan.bd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "Foot005_tatami.hxd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "Foot005_tatami.bd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "Foot004_kamoi.hxd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "Foot004_kamoi.bd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "Foot003_doma2.hxd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "Foot003_doma2.bd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "Foot002_mokuhen.hxd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "Foot002_mokuhen.bd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "Foot001_isidatami.hxd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "Foot001_isidatami.bd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "Foot000_isikaidan.hxd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "Foot000_isikaidan.bd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "ane_sisutemu.hxd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "ane_sisutemu.bd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "sj009_117.hxd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "sj009_117.bd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "sj008_116.hxd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "sj008_116.bd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "sj007_115.hxd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "sj007_115.bd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "sj006_kokirie.hxd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "sj006_kokirie.bd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "sj005_110.hxd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "sj005_110.bd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "sj004_109.hxd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "sj004_109.bd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "sj003_kirie.hxd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "sj003_kirie.bd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "sj001_104.hxd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "sj001_104.bd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "sj000_102.hxd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "sj000_102.bd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "han001_husuma.hxd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "han001_husuma.bd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "han000_tyuu.hxd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "han000_tyuu.bd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "Foot011_isinoue.hxd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "Foot011_isinoue.bd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "Foot010_jyari.hxd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "Foot010_jyari.bd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "Foot009_tuti2.hxd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "Foot009_tuti2.bd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "Foot008_tuti.hxd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "Foot008_tuti.bd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "Foot007_kamoi.hxd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "Foot007_kamoi.bd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "Foot006_tatami.hxd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "Foot006_tatami.bd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "Foot005_itakaidan.hxd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "Foot005_itakaidan.bd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "Foot004_mokuhen.hxd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "Foot004_mokuhen.bd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "Foot003_itanoma2.hxd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "Foot003_itanoma2.bd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "Foot002_itanoma1.hxd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "Foot002_itanoma1.bd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "Foot001_doma2.hxd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "Foot001_doma2.bd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "Foot000_doma1.hxd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "Foot000_doma1.bd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "Door001_tyuu.hxd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "Door001_tyuu.bd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "Door000_husuma.hxd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "Door000_husuma.bd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "ese004_nagabituakesi.hxd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "ese004_nagabituakesi.bd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "ese000_abareru.hxd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "ese000_abareru.bd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "sisutemu.hxd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "sisutemu.bd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "guji_se_btl.hxd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "guji_se_btl.bd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "hako_se_btl.hxd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "hako_se_btl.bd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "kusaa_se_btl.hxd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "kusaa_se_btl.bd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "kusab_se_btl.hxd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "kusab_se_btl.bd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "muraa_se_btl.hxd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "muraa_se_btl.bd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "murab_se_btl.hxd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "murab_se_btl.bd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "suis_se_btl.hxd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "suis_se_btl.bd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "yamia_se_btl.hxd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "yamia_se_btl.bd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "pzl_hinadan.hxd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "pzl_hinadan.bd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "pzl_rokumen.hxd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "pzl_rokumen.bd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "kan_kawa.hxd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "kan_kawa.bd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "ese_tanagata.hxd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "ese_tanagata.bd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "ese_suiteki_yuka.hxd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "ese_suiteki_yuka.bd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "kan_kagaribi.hxd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "kan_kagaribi.bd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "ese_mokuhen.hxd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "ese_mokuhen.bd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "ese_mari.hxd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "ese_mari.bd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "ese_ike_otiru.hxd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "ese_ike_otiru.bd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "ese_door_opcl.hxd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "ese_door_opcl.bd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "ese_box_otiru.hxd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "ese_box_otiru.bd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "ESE_SCREAM00.hxd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "ESE_SCREAM00.bd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "ESE_SCREAM01.hxd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "ESE_SCREAM01.bd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "TEST005.hxd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "TEST005.bd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "TEST006.hxd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "TEST006.bd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "TEST007.hxd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "TEST007.bd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "kubi_se_btl.hxd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "kubi_se_btl.bd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "masu_se_btl.hxd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "masu_se_btl.bd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "tousyu_se_btl.hxd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "tousyu_se_btl.bd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "nin_se_btl.hxd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "nin_se_btl.bd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "akane_se_btl.hxd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "akane_se_btl.bd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "azami_se_btl.hxd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "azami_se_btl.bd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "chitose_se_btl.hxd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "chitose_se_btl.bd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "imi_se_btl.hxd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "imi_se_btl.bd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "kdma_se_btl.hxd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "kdma_se_btl.bd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "kdmb_se_btl.hxd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "kdmb_se_btl.bd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "kdmc_se_btl.hxd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "kdmc_se_btl.bd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "suis2_se_btl.hxd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "suis2_se_btl.bd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "rakka_se_btl.hxd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "rakka_se_btl.bd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "base_sys_bd.hxd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "base_sys_bd.bd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "finder_sys_bd.hxd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "finder_sys_bd.bd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "mio_sys_bd.hxd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "mio_sys_bd.bd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "kan_kagarihaze_bd.hxd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "kan_kagarihaze_bd.bd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "Foot016_soft.hxd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "Foot016_soft.bd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "ese_chitosesuzu_bd.hxd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "ese_chitosesuzu_bd.bd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "kan_meimetu_bd.hxd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "kan_meimetu_bd.bd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "pzl_kazaguruma.hxd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "pzl_kazaguruma.bd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "GD130_bd.hxd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "GD130_bd.bd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "GD062_bd.hxd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "GD062_bd.bd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "ese_rakurai.hxd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "ese_rakurai.bd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "ESE_SUITEKI_SUIMEN.hxd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "ESE_SUITEKI_SUIMEN.bd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "KAN_KAWA_FAST.hxd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "KAN_KAWA_FAST.bd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "ESE_FILMREEL.hxd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "ESE_FILMREEL.bd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "pzl_futago.hxd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "pzl_futago.bd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "kan_screen_noise.hxd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "kan_screen_noise.bd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "kan_rare_near.hxd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "kan_rare_near.bd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "kan_chiteiko.hxd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "kan_chiteiko.bd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "ese_synchro_last.hxd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "ese_synchro_last.bd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "ese_chitosesuzu.hxd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "ese_chitosesuzu.bd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "ese_door_open_mon.hxd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "ese_door_open_mon.bd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "ese_hashigo_bd.hxd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "ese_hashigo_bd.bd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "sae_se_btl.hxd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "sae_se_btl.bd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "ningyou_se_btl.hxd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "ningyou_se_btl.bd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "kusabi2_se_btl.hxd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "kusabi2_se_btl.bd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "kan_kaze.hxd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "kan_kaze.bd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "jisin.hxd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "jisin.bd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "ese_tanagata_rt.hxd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "ese_tanagata_rt.bd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "ese_mari_rt.hxd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "ese_mari_rt.bd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "ese_hasigo2.hxd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "ese_hasigo2.bd"
        },
        {
            0,
            21,
            0,
            0,
            (char*) "se_end.dmy"
        },
        {
            0,
            17,
            0,
            0,
            (char*) "event.obj"
        },
        {
            0,
            17,
            0,
            0,
            (char*) "mission.obj"
        },
        {
            0,
            18,
            0,
            0,
            (char*) "msg.obj"
        },
        {
            1,
            19,
            0,
            0,
            (char*) "title_bg.pk2"
        },
        {
            1,
            19,
            0,
            0,
            (char*) "title_logo.pk2"
        },
        {
            0,
            5,
            0,
            0,
            (char*) "movie_room_000.pss"
        },
        {
            0,
            5,
            0,
            0,
            (char*) "movie_room_001.pss"
        },
        {
            0,
            5,
            0,
            0,
            (char*) "movie_room_002.pss"
        },
        {
            0,
            5,
            0,
            0,
            (char*) "movie_room_003.pss"
        },
        {
            0,
            5,
            0,
            0,
            (char*) "movie_room_004.pss"
        },
        {
            0,
            5,
            0,
            0,
            (char*) "movie_room_005.pss"
        },
        {
            0,
            5,
            0,
            0,
            (char*) "movie_room_006.pss"
        },
        {
            0,
            5,
            0,
            0,
            (char*) "s0010.pss"
        },
        {
            0,
            22,
            0,
            0,
            (char*) "scene0010_movie.slt"
        },
        {
            0,
            22,
            0,
            0,
            (char*) "scene0010_movie.eff"
        },
        {
            0,
            5,
            0,
            0,
            (char*) "s0020.pss"
        },
        {
            0,
            22,
            0,
            0,
            (char*) "scene0020_movie.slt"
        },
        {
            0,
            22,
            0,
            0,
            (char*) "scene0020_movie.eff"
        },
        {
            1,
            22,
            0,
            0,
            (char*) "scene0110.scn"
        },
        {
            0,
            22,
            0,
            0,
            (char*) "scene0110.slt"
        },
        {
            0,
            22,
            0,
            0,
            (char*) "scene0110.eff"
        },
        {
            1,
            22,
            0,
            0,
            (char*) "scene0120.scn"
        },
        {
            0,
            22,
            0,
            0,
            (char*) "scene0120.slt"
        },
        {
            0,
            22,
            0,
            0,
            (char*) "scene0120.eff"
        },
        {
            0,
            5,
            0,
            0,
            (char*) "s0121.pss"
        },
        {
            0,
            22,
            0,
            0,
            (char*) "scene0121_movie.slt"
        },
        {
            0,
            22,
            0,
            0,
            (char*) "scene0121_movie.eff"
        },
        {
            1,
            22,
            0,
            0,
            (char*) "scene0122.scn"
        },
        {
            0,
            22,
            0,
            0,
            (char*) "scene0122.slt"
        },
        {
            0,
            22,
            0,
            0,
            (char*) "scene0122.eff"
        },
        {
            1,
            22,
            0,
            0,
            (char*) "scene0130.scn"
        },
        {
            0,
            22,
            0,
            0,
            (char*) "scene0130.slt"
        },
        {
            0,
            22,
            0,
            0,
            (char*) "scene0130.eff"
        },
        {
            1,
            22,
            0,
            0,
            (char*) "scene0132.scn"
        },
        {
            0,
            22,
            0,
            0,
            (char*) "scene0132.slt"
        },
        {
            0,
            22,
            0,
            0,
            (char*) "scene0132.eff"
        },
        {
            1,
            22,
            0,
            0,
            (char*) "scene0133.scn"
        },
        {
            0,
            22,
            0,
            0,
            (char*) "scene0133.slt"
        },
        {
            0,
            22,
            0,
            0,
            (char*) "scene0133.eff"
        },
        {
            1,
            22,
            0,
            0,
            (char*) "scene0140.scn"
        },
        {
            0,
            22,
            0,
            0,
            (char*) "scene0140.slt"
        },
        {
            0,
            22,
            0,
            0,
            (char*) "scene0140.eff"
        },
        {
            0,
            5,
            0,
            0,
            (char*) "s0141.pss"
        },
        {
            0,
            22,
            0,
            0,
            (char*) "scene0141_movie.slt"
        },
        {
            0,
            22,
            0,
            0,
            (char*) "scene0141_movie.eff"
        },
        {
            1,
            22,
            0,
            0,
            (char*) "scene0150.scn"
        },
        {
            0,
            22,
            0,
            0,
            (char*) "scene0150.slt"
        },
        {
            0,
            22,
            0,
            0,
            (char*) "scene0150.eff"
        },
        {
            1,
            22,
            0,
            0,
            (char*) "scene0160.scn"
        },
        {
            0,
            22,
            0,
            0,
            (char*) "scene0160.slt"
        },
        {
            0,
            22,
            0,
            0,
            (char*) "scene0160.eff"
        },
        {
            1,
            22,
            0,
            0,
            (char*) "scene0170.scn"
        },
        {
            0,
            22,
            0,
            0,
            (char*) "scene0170.slt"
        },
        {
            0,
            22,
            0,
            0,
            (char*) "scene0170.eff"
        },
        {
            0,
            5,
            0,
            0,
            (char*) "s0180.pss"
        },
        {
            0,
            22,
            0,
            0,
            (char*) "scene0180_movie.slt"
        },
        {
            0,
            22,
            0,
            0,
            (char*) "scene0180_movie.eff"
        },
        {
            1,
            22,
            0,
            0,
            (char*) "scene0190.scn"
        },
        {
            0,
            22,
            0,
            0,
            (char*) "scene0190.slt"
        },
        {
            0,
            22,
            0,
            0,
            (char*) "scene0190.eff"
        },
        {
            0,
            5,
            0,
            0,
            (char*) "s0200.pss"
        },
        {
            0,
            22,
            0,
            0,
            (char*) "scene0200_movie.slt"
        },
        {
            0,
            22,
            0,
            0,
            (char*) "scene0200_movie.eff"
        },
        {
            1,
            22,
            0,
            0,
            (char*) "scene0210.scn"
        },
        {
            0,
            22,
            0,
            0,
            (char*) "scene0210.slt"
        },
        {
            0,
            22,
            0,
            0,
            (char*) "scene0210.eff"
        },
        {
            0,
            5,
            0,
            0,
            (char*) "s0220.pss"
        },
        {
            0,
            22,
            0,
            0,
            (char*) "scene0220_movie.slt"
        },
        {
            0,
            22,
            0,
            0,
            (char*) "scene0220_movie.eff"
        },
        {
            0,
            5,
            0,
            0,
            (char*) "s0230.pss"
        },
        {
            0,
            22,
            0,
            0,
            (char*) "scene0230_movie.slt"
        },
        {
            0,
            22,
            0,
            0,
            (char*) "scene0230_movie.eff"
        },
        {
            1,
            22,
            0,
            0,
            (char*) "scene0231.scn"
        },
        {
            0,
            22,
            0,
            0,
            (char*) "scene0231.slt"
        },
        {
            0,
            22,
            0,
            0,
            (char*) "scene0231.eff"
        },
        {
            1,
            22,
            0,
            0,
            (char*) "scene0240.scn"
        },
        {
            0,
            22,
            0,
            0,
            (char*) "scene0240.slt"
        },
        {
            0,
            22,
            0,
            0,
            (char*) "scene0240.eff"
        },
        {
            0,
            5,
            0,
            0,
            (char*) "s0310.pss"
        },
        {
            0,
            22,
            0,
            0,
            (char*) "scene0310_movie.slt"
        },
        {
            0,
            22,
            0,
            0,
            (char*) "scene0310_movie.eff"
        },
        {
            0,
            5,
            0,
            0,
            (char*) "s0330.pss"
        },
        {
            0,
            22,
            0,
            0,
            (char*) "scene0330.slt"
        },
        {
            0,
            22,
            0,
            0,
            (char*) "scene0330.eff"
        },
        {
            1,
            22,
            0,
            0,
            (char*) "scene0340.scn"
        },
        {
            0,
            22,
            0,
            0,
            (char*) "scene0340.slt"
        },
        {
            0,
            22,
            0,
            0,
            (char*) "scene0340.eff"
        },
        {
            1,
            22,
            0,
            0,
            (char*) "scene0350.scn"
        },
        {
            0,
            22,
            0,
            0,
            (char*) "scene0350.slt"
        },
        {
            0,
            22,
            0,
            0,
            (char*) "scene0350.eff"
        },
        {
            0,
            5,
            0,
            0,
            (char*) "s0351.pss"
        },
        {
            0,
            22,
            0,
            0,
            (char*) "scene0351_movie.slt"
        },
        {
            0,
            22,
            0,
            0,
            (char*) "scene0351_movie.eff"
        },
        {
            1,
            22,
            0,
            0,
            (char*) "scene0352.scn"
        },
        {
            0,
            22,
            0,
            0,
            (char*) "scene0352.slt"
        },
        {
            0,
            22,
            0,
            0,
            (char*) "scene0352.eff"
        },
        {
            1,
            22,
            0,
            0,
            (char*) "scene0410.scn"
        },
        {
            0,
            22,
            0,
            0,
            (char*) "scene0410.slt"
        },
        {
            0,
            22,
            0,
            0,
            (char*) "scene0410.eff"
        },
        {
            1,
            22,
            0,
            0,
            (char*) "scene0510.scn"
        },
        {
            0,
            22,
            0,
            0,
            (char*) "scene0510.slt"
        },
        {
            0,
            22,
            0,
            0,
            (char*) "scene0510.eff"
        },
        {
            1,
            22,
            0,
            0,
            (char*) "scene0520.scn"
        },
        {
            0,
            22,
            0,
            0,
            (char*) "scene0520.slt"
        },
        {
            0,
            22,
            0,
            0,
            (char*) "scene0520.eff"
        },
        {
            1,
            22,
            0,
            0,
            (char*) "scene0610.scn"
        },
        {
            0,
            22,
            0,
            0,
            (char*) "scene0610.slt"
        },
        {
            0,
            22,
            0,
            0,
            (char*) "scene0610.eff"
        },
        {
            0,
            5,
            0,
            0,
            (char*) "s0611.pss"
        },
        {
            0,
            22,
            0,
            0,
            (char*) "scene0611_movie.slt"
        },
        {
            0,
            22,
            0,
            0,
            (char*) "scene0611_movie.eff"
        },
        {
            1,
            22,
            0,
            0,
            (char*) "scene0620.scn"
        },
        {
            0,
            22,
            0,
            0,
            (char*) "scene0620.slt"
        },
        {
            0,
            22,
            0,
            0,
            (char*) "scene0620.eff"
        },
        {
            0,
            5,
            0,
            0,
            (char*) "s0710.pss"
        },
        {
            0,
            22,
            0,
            0,
            (char*) "scene0710_movie.slt"
        },
        {
            0,
            22,
            0,
            0,
            (char*) "scene0710_movie.eff"
        },
        {
            0,
            5,
            0,
            0,
            (char*) "s0711.pss"
        },
        {
            0,
            22,
            0,
            0,
            (char*) "scene0711_movie.slt"
        },
        {
            0,
            22,
            0,
            0,
            (char*) "scene0711_movie.eff"
        },
        {
            0,
            5,
            0,
            0,
            (char*) "s0712.pss"
        },
        {
            0,
            22,
            0,
            0,
            (char*) "scene0712_movie.slt"
        },
        {
            0,
            22,
            0,
            0,
            (char*) "scene0712_movie.eff"
        },
        {
            0,
            5,
            0,
            0,
            (char*) "s0713.pss"
        },
        {
            0,
            22,
            0,
            0,
            (char*) "scene0713_movie.slt"
        },
        {
            0,
            22,
            0,
            0,
            (char*) "scene0713_movie.eff"
        },
        {
            1,
            22,
            0,
            0,
            (char*) "scene0720.scn"
        },
        {
            0,
            22,
            0,
            0,
            (char*) "scene0720.slt"
        },
        {
            0,
            22,
            0,
            0,
            (char*) "scene0720.eff"
        },
        {
            1,
            22,
            0,
            0,
            (char*) "scene0721.scn"
        },
        {
            0,
            22,
            0,
            0,
            (char*) "scene0721.slt"
        },
        {
            0,
            22,
            0,
            0,
            (char*) "scene0721.eff"
        },
        {
            1,
            22,
            0,
            0,
            (char*) "scene0730.scn"
        },
        {
            0,
            22,
            0,
            0,
            (char*) "scene0730.slt"
        },
        {
            0,
            22,
            0,
            0,
            (char*) "scene0730.eff"
        },
        {
            0,
            5,
            0,
            0,
            (char*) "s0731.pss"
        },
        {
            0,
            22,
            0,
            0,
            (char*) "scene0731_movie.slt"
        },
        {
            0,
            22,
            0,
            0,
            (char*) "scene0731_movie.eff"
        },
        {
            0,
            5,
            0,
            0,
            (char*) "s0740.pss"
        },
        {
            0,
            22,
            0,
            0,
            (char*) "scene0740_movie.slt"
        },
        {
            0,
            22,
            0,
            0,
            (char*) "scene0740_movie.eff"
        },
        {
            0,
            5,
            0,
            0,
            (char*) "s0810.pss"
        },
        {
            0,
            22,
            0,
            0,
            (char*) "scene0810_movie.slt"
        },
        {
            0,
            22,
            0,
            0,
            (char*) "scene0810_movie.eff"
        },
        {
            1,
            22,
            0,
            0,
            (char*) "scene0820.scn"
        },
        {
            0,
            22,
            0,
            0,
            (char*) "scene0820.slt"
        },
        {
            0,
            22,
            0,
            0,
            (char*) "scene0820.eff"
        },
        {
            0,
            5,
            0,
            0,
            (char*) "s0910.pss"
        },
        {
            0,
            22,
            0,
            0,
            (char*) "scene0910_movie.slt"
        },
        {
            0,
            22,
            0,
            0,
            (char*) "scene0910_movie.eff"
        },
        {
            0,
            5,
            0,
            0,
            (char*) "s0920.pss"
        },
        {
            0,
            22,
            0,
            0,
            (char*) "scene0920_movie.slt"
        },
        {
            0,
            22,
            0,
            0,
            (char*) "scene0920_movie.eff"
        },
        {
            0,
            5,
            0,
            0,
            (char*) "s0930.pss"
        },
        {
            0,
            22,
            0,
            0,
            (char*) "scene0930_movie.slt"
        },
        {
            0,
            22,
            0,
            0,
            (char*) "scene0930_movie.eff"
        },
        {
            0,
            5,
            0,
            0,
            (char*) "s0940.pss"
        },
        {
            0,
            22,
            0,
            0,
            (char*) "scene0940_movie.slt"
        },
        {
            0,
            22,
            0,
            0,
            (char*) "scene0940_movie.eff"
        },
        {
            0,
            5,
            0,
            0,
            (char*) "s0960.pss"
        },
        {
            0,
            22,
            0,
            0,
            (char*) "scene0960_movie.slt"
        },
        {
            0,
            22,
            0,
            0,
            (char*) "scene0960_movie.eff"
        },
        {
            1,
            22,
            0,
            0,
            (char*) "scene1010.scn"
        },
        {
            0,
            22,
            0,
            0,
            (char*) "scene1010.slt"
        },
        {
            0,
            22,
            0,
            0,
            (char*) "scene1010.eff"
        },
        {
            0,
            5,
            0,
            0,
            (char*) "s1020.pss"
        },
        {
            0,
            22,
            0,
            0,
            (char*) "scene1020_movie.slt"
        },
        {
            0,
            22,
            0,
            0,
            (char*) "scene1020_movie.eff"
        },
        {
            0,
            5,
            0,
            0,
            (char*) "s1030.pss"
        },
        {
            0,
            22,
            0,
            0,
            (char*) "scene1030_movie.slt"
        },
        {
            0,
            22,
            0,
            0,
            (char*) "scene1030_movie.eff"
        },
        {
            0,
            5,
            0,
            0,
            (char*) "s1040.pss"
        },
        {
            0,
            22,
            0,
            0,
            (char*) "scene1040_movie.slt"
        },
        {
            0,
            22,
            0,
            0,
            (char*) "scene1040_movie.eff"
        },
        {
            1,
            22,
            0,
            0,
            (char*) "scene9001.scn"
        },
        {
            0,
            22,
            0,
            0,
            (char*) "scene9001.slt"
        },
        {
            0,
            22,
            0,
            0,
            (char*) "scene9001.eff"
        },
        {
            1,
            22,
            0,
            0,
            (char*) "scene9002.scn"
        },
        {
            0,
            22,
            0,
            0,
            (char*) "scene9002.slt"
        },
        {
            0,
            22,
            0,
            0,
            (char*) "scene9002.eff"
        },
        {
            0,
            5,
            0,
            0,
            (char*) "s9005.pss"
        },
        {
            0,
            22,
            0,
            0,
            (char*) "scene9005_movie.slt"
        },
        {
            0,
            22,
            0,
            0,
            (char*) "scene9005_movie.eff"
        },
        {
            1,
            22,
            0,
            0,
            (char*) "scene9101.scn"
        },
        {
            0,
            22,
            0,
            0,
            (char*) "scene9101.slt"
        },
        {
            0,
            22,
            0,
            0,
            (char*) "scene9101.eff"
        },
        {
            1,
            22,
            0,
            0,
            (char*) "scene9203.scn"
        },
        {
            0,
            22,
            0,
            0,
            (char*) "scene9203.slt"
        },
        {
            0,
            22,
            0,
            0,
            (char*) "scene9203.eff"
        },
        {
            1,
            22,
            0,
            0,
            (char*) "scene9204.scn"
        },
        {
            0,
            22,
            0,
            0,
            (char*) "scene9204.slt"
        },
        {
            0,
            22,
            0,
            0,
            (char*) "scene9204.eff"
        },
        {
            1,
            22,
            0,
            0,
            (char*) "scene9205.scn"
        },
        {
            0,
            22,
            0,
            0,
            (char*) "scene9205.slt"
        },
        {
            0,
            22,
            0,
            0,
            (char*) "scene9205.eff"
        },
        {
            1,
            22,
            0,
            0,
            (char*) "scene9206.scn"
        },
        {
            0,
            22,
            0,
            0,
            (char*) "scene9206.slt"
        },
        {
            0,
            22,
            0,
            0,
            (char*) "scene9206.eff"
        },
        {
            1,
            22,
            0,
            0,
            (char*) "scene9302.scn"
        },
        {
            0,
            22,
            0,
            0,
            (char*) "scene9302.slt"
        },
        {
            0,
            22,
            0,
            0,
            (char*) "scene9302.eff"
        },
        {
            1,
            22,
            0,
            0,
            (char*) "scene9303.scn"
        },
        {
            0,
            22,
            0,
            0,
            (char*) "scene9303.slt"
        },
        {
            0,
            22,
            0,
            0,
            (char*) "scene9303.eff"
        },
        {
            1,
            22,
            0,
            0,
            (char*) "scene9501.scn"
        },
        {
            0,
            22,
            0,
            0,
            (char*) "scene9501.slt"
        },
        {
            0,
            22,
            0,
            0,
            (char*) "scene9501.eff"
        },
        {
            0,
            5,
            0,
            0,
            (char*) "promo_48.pss"
        },
        {
            0,
            22,
            0,
            0,
            (char*) "promo_48.slt"
        },
        {
            0,
            22,
            0,
            0,
            (char*) "promo_48.eff"
        },
        {
            0,
            5,
            0,
            0,
            (char*) "promo_01.pss"
        },
        {
            0,
            22,
            0,
            0,
            (char*) "promo_01.slt"
        },
        {
            0,
            22,
            0,
            0,
            (char*) "promo_01.eff"
        },
        {
            0,
            5,
            0,
            0,
            (char*) "promo_02.pss"
        },
        {
            0,
            22,
            0,
            0,
            (char*) "promo_02.slt"
        },
        {
            0,
            22,
            0,
            0,
            (char*) "promo_02.eff"
        },
        {
            0,
            5,
            0,
            0,
            (char*) "promo_03.pss"
        },
        {
            0,
            22,
            0,
            0,
            (char*) "promo_03.slt"
        },
        {
            0,
            22,
            0,
            0,
            (char*) "promo_03.eff"
        },
        {
            0,
            5,
            0,
            0,
            (char*) "game_over.pss"
        },
        {
            0,
            22,
            0,
            0,
            (char*) "game_over.slt"
        },
        {
            0,
            22,
            0,
            0,
            (char*) "game_over.eff"
        },
        {
            0,
            5,
            0,
            0,
            (char*) "ubi_rogo.pss"
        },
        {
            0,
            23,
            0,
            0,
            (char*) "calibration.tm2"
        },
        {
            0,
            13,
            0,
            0,
            (char*) "VciTest.pk2"
        },
        {
            1,
            26,
            0,
            0,
            (char*) "chapter1.tm2"
        },
        {
            1,
            26,
            0,
            0,
            (char*) "chapter2.tm2"
        },
        {
            1,
            26,
            0,
            0,
            (char*) "chapter3.tm2"
        },
        {
            1,
            26,
            0,
            0,
            (char*) "chapter4.tm2"
        },
        {
            1,
            26,
            0,
            0,
            (char*) "chapter5.tm2"
        },
        {
            1,
            26,
            0,
            0,
            (char*) "chapter6.tm2"
        },
        {
            1,
            26,
            0,
            0,
            (char*) "chapter7.tm2"
        },
        {
            1,
            26,
            0,
            0,
            (char*) "chapter8.tm2"
        },
        {
            1,
            26,
            0,
            0,
            (char*) "chapter9.tm2"
        },
        {
            1,
            26,
            0,
            0,
            (char*) "chapter10.tm2"
        },
        {
            1,
            26,
            0,
            0,
            (char*) "chapter11.tm2"
        },
        {
            1,
            27,
            0,
            0,
            (char*) "item_000.tm2"
        },
        {
            1,
            27,
            0,
            0,
            (char*) "item_001.tm2"
        },
        {
            1,
            27,
            0,
            0,
            (char*) "item_002.tm2"
        },
        {
            1,
            27,
            0,
            0,
            (char*) "item_003.tm2"
        },
        {
            1,
            27,
            0,
            0,
            (char*) "item_004.tm2"
        },
        {
            1,
            27,
            0,
            0,
            (char*) "item_005.tm2"
        },
        {
            1,
            27,
            0,
            0,
            (char*) "item_006.tm2"
        },
        {
            1,
            27,
            0,
            0,
            (char*) "item_007.tm2"
        },
        {
            1,
            27,
            0,
            0,
            (char*) "item_008.tm2"
        },
        {
            1,
            27,
            0,
            0,
            (char*) "item_009.tm2"
        },
        {
            1,
            27,
            0,
            0,
            (char*) "item_010.tm2"
        },
        {
            1,
            27,
            0,
            0,
            (char*) "item_011.tm2"
        },
        {
            1,
            27,
            0,
            0,
            (char*) "item_012.tm2"
        },
        {
            1,
            27,
            0,
            0,
            (char*) "item_013.tm2"
        },
        {
            1,
            27,
            0,
            0,
            (char*) "item_014.tm2"
        },
        {
            1,
            27,
            0,
            0,
            (char*) "item_015.tm2"
        },
        {
            1,
            27,
            0,
            0,
            (char*) "item_016.tm2"
        },
        {
            1,
            27,
            0,
            0,
            (char*) "item_017.tm2"
        },
        {
            1,
            27,
            0,
            0,
            (char*) "item_018.tm2"
        },
        {
            1,
            27,
            0,
            0,
            (char*) "item_019.tm2"
        },
        {
            1,
            27,
            0,
            0,
            (char*) "item_020.tm2"
        },
        {
            1,
            27,
            0,
            0,
            (char*) "item_021.tm2"
        },
        {
            1,
            27,
            0,
            0,
            (char*) "item_022.tm2"
        },
        {
            1,
            27,
            0,
            0,
            (char*) "item_023.tm2"
        },
        {
            1,
            27,
            0,
            0,
            (char*) "item_024.tm2"
        },
        {
            1,
            27,
            0,
            0,
            (char*) "item_025.tm2"
        },
        {
            1,
            27,
            0,
            0,
            (char*) "item_026.tm2"
        },
        {
            1,
            27,
            0,
            0,
            (char*) "item_027.tm2"
        },
        {
            1,
            27,
            0,
            0,
            (char*) "item_028.tm2"
        },
        {
            1,
            27,
            0,
            0,
            (char*) "item_029.tm2"
        },
        {
            1,
            27,
            0,
            0,
            (char*) "item_030.tm2"
        },
        {
            1,
            27,
            0,
            0,
            (char*) "item_031.tm2"
        },
        {
            1,
            27,
            0,
            0,
            (char*) "item_032.tm2"
        },
        {
            1,
            27,
            0,
            0,
            (char*) "item_033.tm2"
        },
        {
            1,
            27,
            0,
            0,
            (char*) "item_034.tm2"
        },
        {
            1,
            27,
            0,
            0,
            (char*) "item_035.tm2"
        },
        {
            1,
            27,
            0,
            0,
            (char*) "item_036.tm2"
        },
        {
            1,
            27,
            0,
            0,
            (char*) "item_037.tm2"
        },
        {
            1,
            27,
            0,
            0,
            (char*) "item_038.tm2"
        },
        {
            1,
            27,
            0,
            0,
            (char*) "item_039.tm2"
        },
        {
            1,
            27,
            0,
            0,
            (char*) "item_040.tm2"
        },
        {
            1,
            27,
            0,
            0,
            (char*) "item_041.tm2"
        },
        {
            1,
            27,
            0,
            0,
            (char*) "item_042.tm2"
        },
        {
            1,
            27,
            0,
            0,
            (char*) "item_043.tm2"
        },
        {
            1,
            27,
            0,
            0,
            (char*) "item_044.tm2"
        },
        {
            1,
            27,
            0,
            0,
            (char*) "item_045.tm2"
        },
        {
            1,
            27,
            0,
            0,
            (char*) "item_046.tm2"
        },
        {
            1,
            27,
            0,
            0,
            (char*) "item_047.tm2"
        },
        {
            1,
            27,
            0,
            0,
            (char*) "item_048.tm2"
        },
        {
            1,
            27,
            0,
            0,
            (char*) "item_049.tm2"
        },
        {
            1,
            27,
            0,
            0,
            (char*) "item_050.tm2"
        },
        {
            1,
            27,
            0,
            0,
            (char*) "item_051.tm2"
        },
        {
            1,
            27,
            0,
            0,
            (char*) "item_052.tm2"
        },
        {
            1,
            27,
            0,
            0,
            (char*) "item_053.tm2"
        },
        {
            1,
            27,
            0,
            0,
            (char*) "item_054.tm2"
        },
        {
            1,
            27,
            0,
            0,
            (char*) "item_055.tm2"
        },
        {
            1,
            27,
            0,
            0,
            (char*) "item_056.tm2"
        },
        {
            1,
            27,
            0,
            0,
            (char*) "item_057.tm2"
        },
        {
            1,
            27,
            0,
            0,
            (char*) "item_058.tm2"
        },
        {
            1,
            27,
            0,
            0,
            (char*) "item_059.tm2"
        },
        {
            1,
            27,
            0,
            0,
            (char*) "item_060.tm2"
        },
        {
            1,
            27,
            0,
            0,
            (char*) "item_061.tm2"
        },
        {
            1,
            27,
            0,
            0,
            (char*) "item_062.tm2"
        },
        {
            1,
            27,
            0,
            0,
            (char*) "item_063.tm2"
        },
        {
            1,
            27,
            0,
            0,
            (char*) "item_064.tm2"
        },
        {
            1,
            27,
            0,
            0,
            (char*) "item_065.tm2"
        },
        {
            1,
            27,
            0,
            0,
            (char*) "item_066.tm2"
        },
        {
            1,
            27,
            0,
            0,
            (char*) "item_067.tm2"
        },
        {
            1,
            27,
            0,
            0,
            (char*) "item_068.tm2"
        },
        {
            1,
            27,
            0,
            0,
            (char*) "item_069.tm2"
        },
        {
            1,
            35,
            0,
            0,
            (char*) "doc_pocketbook_000.tm2"
        },
        {
            1,
            35,
            0,
            0,
            (char*) "doc_pocketbook_001.tm2"
        },
        {
            1,
            35,
            0,
            0,
            (char*) "doc_pocketbook_002.tm2"
        },
        {
            1,
            35,
            0,
            0,
            (char*) "doc_pocketbook_003.tm2"
        },
        {
            1,
            35,
            0,
            0,
            (char*) "doc_pocketbook_004.tm2"
        },
        {
            1,
            35,
            0,
            0,
            (char*) "doc_pocketbook_005.tm2"
        },
        {
            1,
            35,
            0,
            0,
            (char*) "doc_pocketbook_006.tm2"
        },
        {
            1,
            35,
            0,
            0,
            (char*) "doc_pocketbook_007.tm2"
        },
        {
            1,
            35,
            0,
            0,
            (char*) "doc_pocketbook_008.tm2"
        },
        {
            1,
            35,
            0,
            0,
            (char*) "doc_pocketbook_009.tm2"
        },
        {
            1,
            35,
            0,
            0,
            (char*) "doc_pocketbook_010.tm2"
        },
        {
            1,
            35,
            0,
            0,
            (char*) "doc_pocketbook_011.tm2"
        },
        {
            1,
            35,
            0,
            0,
            (char*) "doc_pocketbook_012.tm2"
        },
        {
            1,
            35,
            0,
            0,
            (char*) "doc_pocketbook_013.tm2"
        },
        {
            1,
            35,
            0,
            0,
            (char*) "doc_pocketbook_014.tm2"
        },
        {
            1,
            35,
            0,
            0,
            (char*) "doc_pocketbook_015.tm2"
        },
        {
            1,
            35,
            0,
            0,
            (char*) "doc_pocketbook_016.tm2"
        },
        {
            1,
            35,
            0,
            0,
            (char*) "doc_pocketbook_017.tm2"
        },
        {
            1,
            35,
            0,
            0,
            (char*) "doc_pocketbook_018.tm2"
        },
        {
            1,
            35,
            0,
            0,
            (char*) "doc_pocketbook_019.tm2"
        },
        {
            1,
            35,
            0,
            0,
            (char*) "doc_pocketbook_020.tm2"
        },
        {
            1,
            35,
            0,
            0,
            (char*) "doc_pocketbook_021.tm2"
        },
        {
            1,
            35,
            0,
            0,
            (char*) "doc_pocketbook_022.tm2"
        },
        {
            1,
            35,
            0,
            0,
            (char*) "doc_pocketbook_023.tm2"
        },
        {
            1,
            35,
            0,
            0,
            (char*) "doc_pocketbook_024.tm2"
        },
        {
            1,
            35,
            0,
            0,
            (char*) "doc_pocketbook_025.tm2"
        },
        {
            1,
            35,
            0,
            0,
            (char*) "doc_pocketbook_026.tm2"
        },
        {
            1,
            35,
            0,
            0,
            (char*) "doc_pocketbook_027.tm2"
        },
        {
            1,
            35,
            0,
            0,
            (char*) "doc_pocketbook_028.tm2"
        },
        {
            1,
            35,
            0,
            0,
            (char*) "doc_pocketbook_029.tm2"
        },
        {
            1,
            35,
            0,
            0,
            (char*) "doc_pocketbook_masumi04_broken.tm2"
        },
        {
            1,
            35,
            0,
            0,
            (char*) "doc_pocketbook_masumi04.tm2"
        },
        {
            1,
            35,
            0,
            0,
            (char*) "doc_pocketbook_030.tm2"
        },
        {
            1,
            35,
            0,
            0,
            (char*) "doc_pocketbook_031.tm2"
        },
        {
            1,
            35,
            0,
            0,
            (char*) "doc_pocketbook_032.tm2"
        },
        {
            1,
            35,
            0,
            0,
            (char*) "doc_pocketbook_033.tm2"
        },
        {
            1,
            35,
            0,
            0,
            (char*) "doc_pocketbook_034.tm2"
        },
        {
            1,
            35,
            0,
            0,
            (char*) "doc_pocketbook_035.tm2"
        },
        {
            1,
            35,
            0,
            0,
            (char*) "doc_pocketbook_036.tm2"
        },
        {
            1,
            35,
            0,
            0,
            (char*) "doc_pocketbook_037.tm2"
        },
        {
            1,
            35,
            0,
            0,
            (char*) "doc_pocketbook_038.tm2"
        },
        {
            1,
            35,
            0,
            0,
            (char*) "doc_pocketbook_039.tm2"
        },
        {
            1,
            36,
            0,
            0,
            (char*) "doc_scrap_000.tm2"
        },
        {
            1,
            36,
            0,
            0,
            (char*) "doc_scrap_001.tm2"
        },
        {
            1,
            36,
            0,
            0,
            (char*) "doc_scrap_002.tm2"
        },
        {
            1,
            36,
            0,
            0,
            (char*) "doc_scrap_003.tm2"
        },
        {
            1,
            36,
            0,
            0,
            (char*) "doc_scrap_004.tm2"
        },
        {
            1,
            36,
            0,
            0,
            (char*) "doc_scrap_005.tm2"
        },
        {
            1,
            36,
            0,
            0,
            (char*) "doc_scrap_006.tm2"
        },
        {
            1,
            36,
            0,
            0,
            (char*) "doc_scrap_007.tm2"
        },
        {
            1,
            36,
            0,
            0,
            (char*) "doc_scrap_008.tm2"
        },
        {
            1,
            36,
            0,
            0,
            (char*) "doc_scrap_009.tm2"
        },
        {
            1,
            36,
            0,
            0,
            (char*) "doc_scrap_010.tm2"
        },
        {
            1,
            36,
            0,
            0,
            (char*) "doc_scrap_011.tm2"
        },
        {
            1,
            36,
            0,
            0,
            (char*) "doc_scrap_012.tm2"
        },
        {
            1,
            36,
            0,
            0,
            (char*) "doc_scrap_013.tm2"
        },
        {
            1,
            36,
            0,
            0,
            (char*) "doc_scrap_014.tm2"
        },
        {
            1,
            36,
            0,
            0,
            (char*) "doc_scrap_015.tm2"
        },
        {
            1,
            36,
            0,
            0,
            (char*) "doc_scrap_016.tm2"
        },
        {
            1,
            36,
            0,
            0,
            (char*) "doc_scrap_017.tm2"
        },
        {
            1,
            36,
            0,
            0,
            (char*) "doc_scrap_018.tm2"
        },
        {
            1,
            36,
            0,
            0,
            (char*) "doc_scrap_019.tm2"
        },
        {
            1,
            36,
            0,
            0,
            (char*) "doc_scrap_020.tm2"
        },
        {
            1,
            36,
            0,
            0,
            (char*) "doc_scrap_021.tm2"
        },
        {
            1,
            36,
            0,
            0,
            (char*) "doc_scrap_022.tm2"
        },
        {
            1,
            36,
            0,
            0,
            (char*) "doc_scrap_023.tm2"
        },
        {
            1,
            36,
            0,
            0,
            (char*) "doc_scrap_024.tm2"
        },
        {
            1,
            36,
            0,
            0,
            (char*) "doc_scrap_025.tm2"
        },
        {
            1,
            36,
            0,
            0,
            (char*) "doc_scrap_026.tm2"
        },
        {
            1,
            36,
            0,
            0,
            (char*) "doc_scrap_027.tm2"
        },
        {
            1,
            36,
            0,
            0,
            (char*) "doc_scrap_028.tm2"
        },
        {
            1,
            36,
            0,
            0,
            (char*) "doc_scrap_029.tm2"
        },
        {
            1,
            36,
            0,
            0,
            (char*) "doc_scrap_030.tm2"
        },
        {
            1,
            36,
            0,
            0,
            (char*) "doc_scrap_031.tm2"
        },
        {
            1,
            36,
            0,
            0,
            (char*) "doc_scrap_032.tm2"
        },
        {
            1,
            36,
            0,
            0,
            (char*) "doc_scrap_033.tm2"
        },
        {
            1,
            36,
            0,
            0,
            (char*) "doc_scrap_034.tm2"
        },
        {
            1,
            36,
            0,
            0,
            (char*) "doc_scrap_035.tm2"
        },
        {
            1,
            36,
            0,
            0,
            (char*) "doc_scrap_036.tm2"
        },
        {
            1,
            36,
            0,
            0,
            (char*) "doc_scrap_037.tm2"
        },
        {
            1,
            36,
            0,
            0,
            (char*) "doc_scrap_038.tm2"
        },
        {
            1,
            36,
            0,
            0,
            (char*) "doc_scrap_039.tm2"
        },
        {
            1,
            36,
            0,
            0,
            (char*) "doc_scrap_040.tm2"
        },
        {
            1,
            36,
            0,
            0,
            (char*) "doc_scrap_041.tm2"
        },
        {
            1,
            37,
            0,
            0,
            (char*) "doc_oldbook_000.tm2"
        },
        {
            1,
            37,
            0,
            0,
            (char*) "doc_oldbook_001.tm2"
        },
        {
            1,
            37,
            0,
            0,
            (char*) "doc_oldbook_002.tm2"
        },
        {
            1,
            37,
            0,
            0,
            (char*) "doc_oldbook_003.tm2"
        },
        {
            1,
            37,
            0,
            0,
            (char*) "doc_oldbook_004.tm2"
        },
        {
            1,
            37,
            0,
            0,
            (char*) "doc_oldbook_005.tm2"
        },
        {
            1,
            37,
            0,
            0,
            (char*) "doc_oldbook_006.tm2"
        },
        {
            1,
            37,
            0,
            0,
            (char*) "doc_oldbook_007.tm2"
        },
        {
            1,
            37,
            0,
            0,
            (char*) "doc_oldbook_008.tm2"
        },
        {
            1,
            37,
            0,
            0,
            (char*) "doc_oldbook_009.tm2"
        },
        {
            1,
            37,
            0,
            0,
            (char*) "doc_oldbook_010.tm2"
        },
        {
            1,
            37,
            0,
            0,
            (char*) "doc_oldbook_011.tm2"
        },
        {
            1,
            37,
            0,
            0,
            (char*) "doc_oldbook_012.tm2"
        },
        {
            1,
            37,
            0,
            0,
            (char*) "doc_oldbook_013.tm2"
        },
        {
            1,
            37,
            0,
            0,
            (char*) "doc_oldbook_014.tm2"
        },
        {
            1,
            37,
            0,
            0,
            (char*) "doc_oldbook_015.tm2"
        },
        {
            1,
            37,
            0,
            0,
            (char*) "doc_oldbook_016.tm2"
        },
        {
            1,
            37,
            0,
            0,
            (char*) "doc_oldbook_017.tm2"
        },
        {
            1,
            37,
            0,
            0,
            (char*) "doc_oldbook_018.tm2"
        },
        {
            1,
            37,
            0,
            0,
            (char*) "doc_oldbook_019.tm2"
        },
        {
            1,
            37,
            0,
            0,
            (char*) "doc_oldbook_020.tm2"
        },
        {
            1,
            37,
            0,
            0,
            (char*) "doc_oldbook_021.tm2"
        },
        {
            1,
            37,
            0,
            0,
            (char*) "doc_oldbook_022.tm2"
        },
        {
            1,
            37,
            0,
            0,
            (char*) "doc_oldbook_023.tm2"
        },
        {
            1,
            37,
            0,
            0,
            (char*) "doc_oldbook_024.tm2"
        },
        {
            1,
            37,
            0,
            0,
            (char*) "doc_oldbook_025.tm2"
        },
        {
            1,
            37,
            0,
            0,
            (char*) "doc_oldbook_026.tm2"
        },
        {
            1,
            37,
            0,
            0,
            (char*) "doc_oldbook_027.tm2"
        },
        {
            1,
            37,
            0,
            0,
            (char*) "doc_oldbook_028.tm2"
        },
        {
            1,
            37,
            0,
            0,
            (char*) "doc_oldbook_029.tm2"
        },
        {
            1,
            37,
            0,
            0,
            (char*) "doc_oldbook_030.tm2"
        },
        {
            1,
            37,
            0,
            0,
            (char*) "doc_oldbook_031.tm2"
        },
        {
            1,
            37,
            0,
            0,
            (char*) "doc_oldbook_032.tm2"
        },
        {
            1,
            37,
            0,
            0,
            (char*) "doc_oldbook_033.tm2"
        },
        {
            1,
            37,
            0,
            0,
            (char*) "doc_oldbook_034.tm2"
        },
        {
            1,
            37,
            0,
            0,
            (char*) "doc_oldbook_035.tm2"
        },
        {
            1,
            37,
            0,
            0,
            (char*) "doc_oldbook_036.tm2"
        },
        {
            1,
            37,
            0,
            0,
            (char*) "doc_oldbook_037.tm2"
        },
        {
            1,
            37,
            0,
            0,
            (char*) "doc_oldbook_038.tm2"
        },
        {
            1,
            37,
            0,
            0,
            (char*) "doc_oldbook_039.tm2"
        },
        {
            1,
            39,
            0,
            0,
            (char*) "pht_dts.pk2"
        },
        {
            1,
            39,
            0,
            0,
            (char*) "pht_top_000.tm2"
        },
        {
            1,
            39,
            0,
            0,
            (char*) "pht_top_001.tm2"
        },
        {
            1,
            39,
            0,
            0,
            (char*) "pht_top_002.tm2"
        },
        {
            1,
            39,
            0,
            0,
            (char*) "pht_top_003.tm2"
        },
        {
            1,
            39,
            0,
            0,
            (char*) "pht_top_004.tm2"
        },
        {
            1,
            39,
            0,
            0,
            (char*) "pht_top_005.tm2"
        },
        {
            1,
            39,
            0,
            0,
            (char*) "pht_top_006.tm2"
        },
        {
            1,
            39,
            0,
            0,
            (char*) "pht_top_007.tm2"
        },
        {
            1,
            39,
            0,
            0,
            (char*) "pht_top_008.tm2"
        },
        {
            1,
            39,
            0,
            0,
            (char*) "pht_top_009.tm2"
        },
        {
            1,
            39,
            0,
            0,
            (char*) "pht_top_010.tm2"
        },
        {
            1,
            39,
            0,
            0,
            (char*) "pht_top_011.tm2"
        },
        {
            1,
            39,
            0,
            0,
            (char*) "pht_top_012.tm2"
        },
        {
            1,
            39,
            0,
            0,
            (char*) "pht_top_013.tm2"
        },
        {
            1,
            39,
            0,
            0,
            (char*) "pht_top_014.tm2"
        },
        {
            1,
            39,
            0,
            0,
            (char*) "pht_top_015.tm2"
        },
        {
            1,
            39,
            0,
            0,
            (char*) "pht_top_016.tm2"
        },
        {
            1,
            39,
            0,
            0,
            (char*) "pht_top_017.tm2"
        },
        {
            1,
            39,
            0,
            0,
            (char*) "pht_top_018.tm2"
        },
        {
            1,
            39,
            0,
            0,
            (char*) "pht_top_019.tm2"
        },
        {
            1,
            39,
            0,
            0,
            (char*) "pht_top_020.tm2"
        },
        {
            1,
            39,
            0,
            0,
            (char*) "pht_top_021.tm2"
        },
        {
            1,
            39,
            0,
            0,
            (char*) "pht_top_022.tm2"
        },
        {
            1,
            39,
            0,
            0,
            (char*) "pht_top_023.tm2"
        },
        {
            1,
            39,
            0,
            0,
            (char*) "pht_top_024.tm2"
        },
        {
            1,
            39,
            0,
            0,
            (char*) "pht_top_025.tm2"
        },
        {
            1,
            20,
            0,
            0,
            (char*) "pht_get_000.pk2"
        },
        {
            1,
            20,
            0,
            0,
            (char*) "pht_get_001.pk2"
        },
        {
            1,
            20,
            0,
            0,
            (char*) "pht_get_002.pk2"
        },
        {
            1,
            20,
            0,
            0,
            (char*) "pht_get_003.pk2"
        },
        {
            1,
            20,
            0,
            0,
            (char*) "pht_get_004.pk2"
        },
        {
            1,
            20,
            0,
            0,
            (char*) "pht_get_005.pk2"
        },
        {
            1,
            20,
            0,
            0,
            (char*) "pht_get_006.pk2"
        },
        {
            1,
            20,
            0,
            0,
            (char*) "pht_get_007.pk2"
        },
        {
            1,
            20,
            0,
            0,
            (char*) "pht_get_008.pk2"
        },
        {
            1,
            20,
            0,
            0,
            (char*) "pht_get_009.pk2"
        },
        {
            1,
            20,
            0,
            0,
            (char*) "pht_get_010.pk2"
        },
        {
            1,
            20,
            0,
            0,
            (char*) "pht_get_011.pk2"
        },
        {
            1,
            20,
            0,
            0,
            (char*) "pht_get_012.pk2"
        },
        {
            1,
            20,
            0,
            0,
            (char*) "pht_get_013.pk2"
        },
        {
            1,
            20,
            0,
            0,
            (char*) "pht_get_014.pk2"
        },
        {
            1,
            20,
            0,
            0,
            (char*) "pht_get_015.pk2"
        },
        {
            1,
            20,
            0,
            0,
            (char*) "pht_get_016.pk2"
        },
        {
            1,
            20,
            0,
            0,
            (char*) "pht_get_017.pk2"
        },
        {
            1,
            20,
            0,
            0,
            (char*) "pht_get_018.pk2"
        },
        {
            1,
            20,
            0,
            0,
            (char*) "pht_get_019.pk2"
        },
        {
            1,
            20,
            0,
            0,
            (char*) "pht_get_020.pk2"
        },
        {
            1,
            20,
            0,
            0,
            (char*) "pht_get_021.pk2"
        },
        {
            1,
            20,
            0,
            0,
            (char*) "pht_get_022.pk2"
        },
        {
            1,
            20,
            0,
            0,
            (char*) "pht_get_023.pk2"
        },
        {
            1,
            20,
            0,
            0,
            (char*) "pht_get_024.pk2"
        },
        {
            1,
            20,
            0,
            0,
            (char*) "pht_get_025.pk2"
        },
        {
            1,
            39,
            0,
            0,
            (char*) "pht_dtl_000.tm2"
        },
        {
            1,
            39,
            0,
            0,
            (char*) "pht_dtl_001.tm2"
        },
        {
            1,
            39,
            0,
            0,
            (char*) "pht_dtl_002.tm2"
        },
        {
            1,
            39,
            0,
            0,
            (char*) "pht_dtl_003.tm2"
        },
        {
            1,
            39,
            0,
            0,
            (char*) "pht_dtl_004.tm2"
        },
        {
            1,
            39,
            0,
            0,
            (char*) "pht_dtl_005.tm2"
        },
        {
            1,
            39,
            0,
            0,
            (char*) "pht_dtl_006.tm2"
        },
        {
            1,
            39,
            0,
            0,
            (char*) "pht_dtl_007.tm2"
        },
        {
            1,
            39,
            0,
            0,
            (char*) "pht_dtl_008.tm2"
        },
        {
            1,
            39,
            0,
            0,
            (char*) "pht_dtl_009.tm2"
        },
        {
            1,
            39,
            0,
            0,
            (char*) "pht_dtl_010.tm2"
        },
        {
            1,
            39,
            0,
            0,
            (char*) "pht_dtl_011.tm2"
        },
        {
            1,
            39,
            0,
            0,
            (char*) "pht_dtl_012.tm2"
        },
        {
            1,
            39,
            0,
            0,
            (char*) "pht_dtl_013.tm2"
        },
        {
            1,
            39,
            0,
            0,
            (char*) "pht_dtl_014.tm2"
        },
        {
            1,
            39,
            0,
            0,
            (char*) "pht_dtl_015.tm2"
        },
        {
            1,
            39,
            0,
            0,
            (char*) "pht_dtl_016.tm2"
        },
        {
            1,
            39,
            0,
            0,
            (char*) "pht_dtl_017.tm2"
        },
        {
            1,
            39,
            0,
            0,
            (char*) "pht_dtl_018.tm2"
        },
        {
            1,
            39,
            0,
            0,
            (char*) "pht_dtl_019.tm2"
        },
        {
            1,
            39,
            0,
            0,
            (char*) "pht_dtl_020.tm2"
        },
        {
            1,
            39,
            0,
            0,
            (char*) "pht_dtl_021.tm2"
        },
        {
            1,
            39,
            0,
            0,
            (char*) "pht_dtl_022.tm2"
        },
        {
            1,
            39,
            0,
            0,
            (char*) "pht_dtl_023.tm2"
        },
        {
            1,
            39,
            0,
            0,
            (char*) "pht_dtl_024.tm2"
        },
        {
            1,
            39,
            0,
            0,
            (char*) "pht_dtl_025.tm2"
        },
        {
            1,
            38,
            0,
            0,
            (char*) "pic_dts.pk2"
        },
        {
            1,
            38,
            0,
            0,
            (char*) "pic_get_000.tm2"
        },
        {
            1,
            38,
            0,
            0,
            (char*) "pic_get_001.tm2"
        },
        {
            1,
            38,
            0,
            0,
            (char*) "pic_get_002.tm2"
        },
        {
            1,
            38,
            0,
            0,
            (char*) "pic_get_003.tm2"
        },
        {
            1,
            38,
            0,
            0,
            (char*) "pic_get_004.tm2"
        },
        {
            1,
            38,
            0,
            0,
            (char*) "pic_get_005.tm2"
        },
        {
            1,
            38,
            0,
            0,
            (char*) "pic_get_006.tm2"
        },
        {
            1,
            38,
            0,
            0,
            (char*) "pic_get_007.tm2"
        },
        {
            1,
            38,
            0,
            0,
            (char*) "pic_get_008.tm2"
        },
        {
            1,
            38,
            0,
            0,
            (char*) "pic_get_009.tm2"
        },
        {
            1,
            38,
            0,
            0,
            (char*) "pic_dtl_000.tm2"
        },
        {
            1,
            38,
            0,
            0,
            (char*) "pic_dtl_001.tm2"
        },
        {
            1,
            38,
            0,
            0,
            (char*) "pic_dtl_002.tm2"
        },
        {
            1,
            38,
            0,
            0,
            (char*) "pic_dtl_003.tm2"
        },
        {
            1,
            38,
            0,
            0,
            (char*) "pic_dtl_004.tm2"
        },
        {
            1,
            38,
            0,
            0,
            (char*) "pic_dtl_005.tm2"
        },
        {
            1,
            38,
            0,
            0,
            (char*) "pic_dtl_006.tm2"
        },
        {
            1,
            38,
            0,
            0,
            (char*) "pic_dtl_007.tm2"
        },
        {
            1,
            38,
            0,
            0,
            (char*) "pic_dtl_008.tm2"
        },
        {
            1,
            38,
            0,
            0,
            (char*) "pic_dtl_009.tm2"
        },
        {
            1,
            43,
            0,
            0,
            (char*) "radio_crystal_01.pk2"
        },
        {
            1,
            43,
            0,
            0,
            (char*) "radio_crystal_02.pk2"
        },
        {
            1,
            43,
            0,
            0,
            (char*) "radio_crystal_03.pk2"
        },
        {
            1,
            43,
            0,
            0,
            (char*) "radio_crystal_04.pk2"
        },
        {
            1,
            43,
            0,
            0,
            (char*) "radio_crystal_05.pk2"
        },
        {
            1,
            43,
            0,
            0,
            (char*) "radio_crystal_06.pk2"
        },
        {
            1,
            43,
            0,
            0,
            (char*) "radio_crystal_07.pk2"
        },
        {
            1,
            43,
            0,
            0,
            (char*) "radio_crystal_08.pk2"
        },
        {
            1,
            43,
            0,
            0,
            (char*) "radio_crystal_09.pk2"
        },
        {
            1,
            43,
            0,
            0,
            (char*) "radio_crystal_10.pk2"
        },
        {
            1,
            43,
            0,
            0,
            (char*) "radio_crystal_11.pk2"
        },
        {
            1,
            43,
            0,
            0,
            (char*) "radio_crystal_12.pk2"
        },
        {
            1,
            43,
            0,
            0,
            (char*) "radio_crystal_13.pk2"
        },
        {
            1,
            43,
            0,
            0,
            (char*) "radio_crystal_14.pk2"
        },
        {
            1,
            43,
            0,
            0,
            (char*) "radio_crystal_15.pk2"
        },
        {
            1,
            43,
            0,
            0,
            (char*) "radio_crystal_16.pk2"
        },
        {
            1,
            43,
            0,
            0,
            (char*) "radio_crystal_17.pk2"
        },
        {
            1,
            43,
            0,
            0,
            (char*) "radio_crystal_18.pk2"
        },
        {
            1,
            43,
            0,
            0,
            (char*) "radio_crystal_19.pk2"
        },
        {
            1,
            43,
            0,
            0,
            (char*) "radio_crystal_20.pk2"
        },
        {
            1,
            43,
            0,
            0,
            (char*) "radio_crystal_21.pk2"
        },
        {
            1,
            43,
            0,
            0,
            (char*) "radio_crystal_22.pk2"
        },
        {
            1,
            43,
            0,
            0,
            (char*) "radio_crystal_23.pk2"
        },
        {
            1,
            43,
            0,
            0,
            (char*) "radio_crystal_24.pk2"
        },
        {
            1,
            43,
            0,
            0,
            (char*) "radio_crystal_25.pk2"
        },
        {
            1,
            43,
            0,
            0,
            (char*) "radio_crystal_26.pk2"
        },
        {
            1,
            43,
            0,
            0,
            (char*) "radio_crystal_27.pk2"
        },
        {
            1,
            43,
            0,
            0,
            (char*) "radio_crystal_28.pk2"
        },
        {
            1,
            43,
            0,
            0,
            (char*) "radio_crystal_29.pk2"
        },
        {
            1,
            43,
            0,
            0,
            (char*) "radio_crystal_30.pk2"
        },
        {
            1,
            43,
            0,
            0,
            (char*) "radio_crystal_31.pk2"
        },
        {
            1,
            43,
            0,
            0,
            (char*) "radio_crystal_32.pk2"
        },
        {
            1,
            43,
            0,
            0,
            (char*) "radio_crystal_33.pk2"
        },
        {
            1,
            43,
            0,
            0,
            (char*) "radio_crystal_34.pk2"
        },
        {
            1,
            43,
            0,
            0,
            (char*) "radio_crystal_35.pk2"
        },
        {
            1,
            43,
            0,
            0,
            (char*) "radio_crystal_36.pk2"
        },
        {
            1,
            43,
            0,
            0,
            (char*) "radio_crystal_37.pk2"
        },
        {
            1,
            43,
            0,
            0,
            (char*) "radio_crystal_38.pk2"
        },
        {
            1,
            43,
            0,
            0,
            (char*) "radio_crystal_39.pk2"
        },
        {
            1,
            43,
            0,
            0,
            (char*) "radio_crystal_40.pk2"
        },
        {
            1,
            43,
            0,
            0,
            (char*) "cry_001.tm2"
        },
        {
            1,
            43,
            0,
            0,
            (char*) "cry_002.tm2"
        },
        {
            1,
            43,
            0,
            0,
            (char*) "cry_003.tm2"
        },
        {
            1,
            43,
            0,
            0,
            (char*) "cry_004.tm2"
        },
        {
            1,
            43,
            0,
            0,
            (char*) "cry_005.tm2"
        },
        {
            1,
            43,
            0,
            0,
            (char*) "cry_006.tm2"
        },
        {
            1,
            43,
            0,
            0,
            (char*) "cry_007.tm2"
        },
        {
            1,
            43,
            0,
            0,
            (char*) "cry_008.tm2"
        },
        {
            1,
            43,
            0,
            0,
            (char*) "cry_009.tm2"
        },
        {
            1,
            43,
            0,
            0,
            (char*) "cry_010.tm2"
        },
        {
            1,
            43,
            0,
            0,
            (char*) "cry_011.tm2"
        },
        {
            1,
            43,
            0,
            0,
            (char*) "cry_012.tm2"
        },
        {
            1,
            43,
            0,
            0,
            (char*) "cry_013.tm2"
        },
        {
            1,
            43,
            0,
            0,
            (char*) "cry_014.tm2"
        },
        {
            1,
            43,
            0,
            0,
            (char*) "cry_015.tm2"
        },
        {
            1,
            43,
            0,
            0,
            (char*) "cry_016.tm2"
        },
        {
            1,
            43,
            0,
            0,
            (char*) "cry_017.tm2"
        },
        {
            1,
            43,
            0,
            0,
            (char*) "cry_018.tm2"
        },
        {
            1,
            43,
            0,
            0,
            (char*) "cry_019.tm2"
        },
        {
            1,
            43,
            0,
            0,
            (char*) "cry_020.tm2"
        },
        {
            1,
            43,
            0,
            0,
            (char*) "cry_021.tm2"
        },
        {
            1,
            43,
            0,
            0,
            (char*) "cry_022.tm2"
        },
        {
            1,
            43,
            0,
            0,
            (char*) "cry_023.tm2"
        },
        {
            1,
            43,
            0,
            0,
            (char*) "cry_024.tm2"
        },
        {
            1,
            43,
            0,
            0,
            (char*) "cry_025.tm2"
        },
        {
            1,
            43,
            0,
            0,
            (char*) "cry_026.tm2"
        },
        {
            1,
            43,
            0,
            0,
            (char*) "cry_027.tm2"
        },
        {
            1,
            43,
            0,
            0,
            (char*) "cry_028.tm2"
        },
        {
            1,
            43,
            0,
            0,
            (char*) "cry_029.tm2"
        },
        {
            1,
            43,
            0,
            0,
            (char*) "cry_030.tm2"
        },
        {
            1,
            43,
            0,
            0,
            (char*) "cry_031.tm2"
        },
        {
            1,
            43,
            0,
            0,
            (char*) "cry_032.tm2"
        },
        {
            1,
            43,
            0,
            0,
            (char*) "cry_033.tm2"
        },
        {
            1,
            43,
            0,
            0,
            (char*) "cry_034.tm2"
        },
        {
            1,
            43,
            0,
            0,
            (char*) "cry_035.tm2"
        },
        {
            1,
            43,
            0,
            0,
            (char*) "cry_036.tm2"
        },
        {
            1,
            43,
            0,
            0,
            (char*) "cry_037.tm2"
        },
        {
            1,
            43,
            0,
            0,
            (char*) "cry_038.tm2"
        },
        {
            1,
            43,
            0,
            0,
            (char*) "cry_039.tm2"
        },
        {
            1,
            43,
            0,
            0,
            (char*) "cry_040.tm2"
        },
        {
            1,
            45,
            0,
            0,
            (char*) "rei_pht_000.tm2"
        },
        {
            1,
            45,
            0,
            0,
            (char*) "rei_pht_001.tm2"
        },
        {
            1,
            45,
            0,
            0,
            (char*) "rei_pht_002.tm2"
        },
        {
            1,
            45,
            0,
            0,
            (char*) "rei_pht_003.tm2"
        },
        {
            1,
            45,
            0,
            0,
            (char*) "rei_pht_004.tm2"
        },
        {
            1,
            45,
            0,
            0,
            (char*) "rei_pht_005.tm2"
        },
        {
            1,
            45,
            0,
            0,
            (char*) "rei_pht_006.tm2"
        },
        {
            1,
            45,
            0,
            0,
            (char*) "rei_pht_007.tm2"
        },
        {
            1,
            45,
            0,
            0,
            (char*) "rei_pht_008.tm2"
        },
        {
            1,
            45,
            0,
            0,
            (char*) "rei_pht_009.tm2"
        },
        {
            1,
            45,
            0,
            0,
            (char*) "rei_pht_010.tm2"
        },
        {
            1,
            45,
            0,
            0,
            (char*) "rei_pht_011.tm2"
        },
        {
            1,
            45,
            0,
            0,
            (char*) "rei_pht_012.tm2"
        },
        {
            1,
            45,
            0,
            0,
            (char*) "rei_pht_013.tm2"
        },
        {
            1,
            45,
            0,
            0,
            (char*) "rei_pht_014.tm2"
        },
        {
            1,
            45,
            0,
            0,
            (char*) "rei_pht_015.tm2"
        },
        {
            1,
            45,
            0,
            0,
            (char*) "rei_pht_016.tm2"
        },
        {
            1,
            45,
            0,
            0,
            (char*) "rei_pht_017.tm2"
        },
        {
            1,
            45,
            0,
            0,
            (char*) "rei_pht_018.tm2"
        },
        {
            1,
            45,
            0,
            0,
            (char*) "rei_pht_019.tm2"
        },
        {
            1,
            45,
            0,
            0,
            (char*) "rei_pht_020.tm2"
        },
        {
            1,
            45,
            0,
            0,
            (char*) "rei_pht_021.tm2"
        },
        {
            1,
            45,
            0,
            0,
            (char*) "rei_pht_022.tm2"
        },
        {
            1,
            45,
            0,
            0,
            (char*) "rei_pht_023.tm2"
        },
        {
            1,
            45,
            0,
            0,
            (char*) "rei_pht_024.tm2"
        },
        {
            1,
            45,
            0,
            0,
            (char*) "rei_pht_026.tm2"
        },
        {
            1,
            45,
            0,
            0,
            (char*) "rei_pht_027.tm2"
        },
        {
            1,
            45,
            0,
            0,
            (char*) "rei_pht_028.tm2"
        },
        {
            1,
            45,
            0,
            0,
            (char*) "rei_pht_029.tm2"
        },
        {
            1,
            45,
            0,
            0,
            (char*) "rei_pht_030.tm2"
        },
        {
            1,
            45,
            0,
            0,
            (char*) "rei_pht_031.tm2"
        },
        {
            1,
            45,
            0,
            0,
            (char*) "rei_pht_032.tm2"
        },
        {
            1,
            45,
            0,
            0,
            (char*) "rei_pht_033.tm2"
        },
        {
            1,
            45,
            0,
            0,
            (char*) "rei_pht_034.tm2"
        },
        {
            1,
            45,
            0,
            0,
            (char*) "rei_pht_035.tm2"
        },
        {
            1,
            45,
            0,
            0,
            (char*) "rei_pht_036.tm2"
        },
        {
            1,
            45,
            0,
            0,
            (char*) "rei_pht_037.tm2"
        },
        {
            1,
            45,
            0,
            0,
            (char*) "rei_pht_038.tm2"
        },
        {
            1,
            45,
            0,
            0,
            (char*) "rei_pht_039.tm2"
        },
        {
            1,
            45,
            0,
            0,
            (char*) "rei_pht_040.tm2"
        },
        {
            1,
            45,
            0,
            0,
            (char*) "rei_pht_041.tm2"
        },
        {
            1,
            45,
            0,
            0,
            (char*) "rei_pht_042.tm2"
        },
        {
            1,
            45,
            0,
            0,
            (char*) "rei_pht_043.tm2"
        },
        {
            1,
            45,
            0,
            0,
            (char*) "rei_pht_044.tm2"
        },
        {
            1,
            45,
            0,
            0,
            (char*) "rei_pht_045.tm2"
        },
        {
            1,
            45,
            0,
            0,
            (char*) "rei_pht_046.tm2"
        },
        {
            1,
            45,
            0,
            0,
            (char*) "rei_pht_047.tm2"
        },
        {
            1,
            45,
            0,
            0,
            (char*) "rei_pht_048.tm2"
        },
        {
            1,
            45,
            0,
            0,
            (char*) "rei_pht_049.tm2"
        },
        {
            1,
            45,
            0,
            0,
            (char*) "rei_pht_050.tm2"
        },
        {
            1,
            45,
            0,
            0,
            (char*) "rei_pht_051.tm2"
        },
        {
            1,
            45,
            0,
            0,
            (char*) "rei_pht_052.tm2"
        },
        {
            1,
            45,
            0,
            0,
            (char*) "rei_pht_053.tm2"
        },
        {
            1,
            45,
            0,
            0,
            (char*) "rei_pht_054.tm2"
        },
        {
            1,
            45,
            0,
            0,
            (char*) "rei_pht_055.tm2"
        },
        {
            1,
            45,
            0,
            0,
            (char*) "rei_pht_056.tm2"
        },
        {
            1,
            45,
            0,
            0,
            (char*) "rei_pht_057.tm2"
        },
        {
            1,
            45,
            0,
            0,
            (char*) "rei_pht_058.tm2"
        },
        {
            1,
            45,
            0,
            0,
            (char*) "rei_pht_059.tm2"
        },
        {
            1,
            45,
            0,
            0,
            (char*) "rei_pht_060.tm2"
        },
        {
            1,
            45,
            0,
            0,
            (char*) "rei_pht_061.tm2"
        },
        {
            1,
            45,
            0,
            0,
            (char*) "rei_pht_062.tm2"
        },
        {
            1,
            45,
            0,
            0,
            (char*) "rei_pht_063.tm2"
        },
        {
            1,
            45,
            0,
            0,
            (char*) "rei_pht_064.tm2"
        },
        {
            1,
            45,
            0,
            0,
            (char*) "rei_pht_065.tm2"
        },
        {
            1,
            45,
            0,
            0,
            (char*) "rei_pht_066.tm2"
        },
        {
            1,
            45,
            0,
            0,
            (char*) "rei_pht_067.tm2"
        },
        {
            1,
            45,
            0,
            0,
            (char*) "rei_pht_068.tm2"
        },
        {
            1,
            45,
            0,
            0,
            (char*) "rei_pht_069.tm2"
        },
        {
            1,
            45,
            0,
            0,
            (char*) "rei_pht_070.tm2"
        },
        {
            1,
            45,
            0,
            0,
            (char*) "rei_pht_071.tm2"
        },
        {
            1,
            45,
            0,
            0,
            (char*) "rei_pht_072.tm2"
        },
        {
            1,
            45,
            0,
            0,
            (char*) "rei_pht_073.tm2"
        },
        {
            1,
            45,
            0,
            0,
            (char*) "rei_pht_074.tm2"
        },
        {
            1,
            45,
            0,
            0,
            (char*) "rei_pht_075.tm2"
        },
        {
            1,
            45,
            0,
            0,
            (char*) "rei_pht_076.tm2"
        },
        {
            1,
            45,
            0,
            0,
            (char*) "rei_pht_077.tm2"
        },
        {
            1,
            45,
            0,
            0,
            (char*) "rei_pht_078.tm2"
        },
        {
            1,
            45,
            0,
            0,
            (char*) "rei_pht_079.tm2"
        },
        {
            1,
            45,
            0,
            0,
            (char*) "rei_pht_080.tm2"
        },
        {
            1,
            45,
            0,
            0,
            (char*) "rei_pht_081.tm2"
        },
        {
            1,
            45,
            0,
            0,
            (char*) "rei_pht_082.tm2"
        },
        {
            1,
            45,
            0,
            0,
            (char*) "rei_pht_083.tm2"
        },
        {
            1,
            45,
            0,
            0,
            (char*) "rei_pht_084.tm2"
        },
        {
            1,
            45,
            0,
            0,
            (char*) "rei_pht_085.tm2"
        },
        {
            1,
            45,
            0,
            0,
            (char*) "rei_pht_086.tm2"
        },
        {
            1,
            45,
            0,
            0,
            (char*) "rei_pht_087.tm2"
        },
        {
            1,
            45,
            0,
            0,
            (char*) "rei_pht_088.tm2"
        },
        {
            1,
            45,
            0,
            0,
            (char*) "rei_pht_089.tm2"
        },
        {
            1,
            45,
            0,
            0,
            (char*) "rei_pht_090.tm2"
        },
        {
            1,
            45,
            0,
            0,
            (char*) "rei_pht_091.tm2"
        },
        {
            1,
            45,
            0,
            0,
            (char*) "rei_pht_092.tm2"
        },
        {
            1,
            45,
            0,
            0,
            (char*) "rei_pht_093.tm2"
        },
        {
            1,
            45,
            0,
            0,
            (char*) "rei_pht_094.tm2"
        },
        {
            1,
            45,
            0,
            0,
            (char*) "rei_pht_095.tm2"
        },
        {
            1,
            45,
            0,
            0,
            (char*) "rei_pht_096.tm2"
        },
        {
            1,
            45,
            0,
            0,
            (char*) "rei_pht_097.tm2"
        },
        {
            1,
            45,
            0,
            0,
            (char*) "rei_pht_098.tm2"
        },
        {
            1,
            45,
            0,
            0,
            (char*) "rei_pht_099.tm2"
        },
        {
            1,
            45,
            0,
            0,
            (char*) "rei_pht_100.tm2"
        },
        {
            1,
            45,
            0,
            0,
            (char*) "rei_pht_101.tm2"
        },
        {
            1,
            45,
            0,
            0,
            (char*) "rei_pht_102.tm2"
        },
        {
            1,
            45,
            0,
            0,
            (char*) "rei_pht_103.tm2"
        },
        {
            1,
            45,
            0,
            0,
            (char*) "rei_pht_104.tm2"
        },
        {
            1,
            45,
            0,
            0,
            (char*) "rei_pht_105.tm2"
        },
        {
            1,
            45,
            0,
            0,
            (char*) "rei_pht_106.tm2"
        },
        {
            1,
            45,
            0,
            0,
            (char*) "rei_pht_107.tm2"
        },
        {
            1,
            45,
            0,
            0,
            (char*) "rei_pht_108.tm2"
        },
        {
            1,
            45,
            0,
            0,
            (char*) "rei_pht_109.tm2"
        },
        {
            1,
            45,
            0,
            0,
            (char*) "rei_pht_110.tm2"
        },
        {
            1,
            45,
            0,
            0,
            (char*) "rei_pht_111.tm2"
        },
        {
            1,
            45,
            0,
            0,
            (char*) "rei_pht_112.tm2"
        },
        {
            1,
            45,
            0,
            0,
            (char*) "rei_pht_113.tm2"
        },
        {
            1,
            45,
            0,
            0,
            (char*) "rei_pht_114.tm2"
        },
        {
            1,
            45,
            0,
            0,
            (char*) "rei_pht_115.tm2"
        },
        {
            1,
            45,
            0,
            0,
            (char*) "rei_pht_116.tm2"
        },
        {
            1,
            45,
            0,
            0,
            (char*) "rei_pht_117.tm2"
        },
        {
            1,
            45,
            0,
            0,
            (char*) "rei_pht_118.tm2"
        },
        {
            1,
            45,
            0,
            0,
            (char*) "rei_pht_119.tm2"
        },
        {
            1,
            45,
            0,
            0,
            (char*) "rei_pht_120.tm2"
        },
        {
            1,
            45,
            0,
            0,
            (char*) "rei_pht_121.tm2"
        },
        {
            1,
            45,
            0,
            0,
            (char*) "rei_pht_122.tm2"
        },
        {
            1,
            45,
            0,
            0,
            (char*) "rei_pht_123.tm2"
        },
        {
            1,
            45,
            0,
            0,
            (char*) "rei_pht_124.tm2"
        },
        {
            1,
            45,
            0,
            0,
            (char*) "rei_pht_125.tm2"
        },
        {
            1,
            45,
            0,
            0,
            (char*) "rei_pht_126.tm2"
        },
        {
            1,
            45,
            0,
            0,
            (char*) "rei_pht_127.tm2"
        },
        {
            1,
            45,
            0,
            0,
            (char*) "rei_pht_128.tm2"
        },
        {
            1,
            45,
            0,
            0,
            (char*) "rei_pht_129.tm2"
        },
        {
            1,
            45,
            0,
            0,
            (char*) "rei_pht_130.tm2"
        },
        {
            1,
            45,
            0,
            0,
            (char*) "rei_pht_131.tm2"
        },
        {
            1,
            45,
            0,
            0,
            (char*) "rei_pht_132.tm2"
        },
        {
            1,
            45,
            0,
            0,
            (char*) "rei_pht_133.tm2"
        },
        {
            1,
            45,
            0,
            0,
            (char*) "rei_pht_134.tm2"
        },
        {
            1,
            45,
            0,
            0,
            (char*) "rei_pht_135.tm2"
        },
        {
            1,
            45,
            0,
            0,
            (char*) "rei_pht_136.tm2"
        },
        {
            1,
            45,
            0,
            0,
            (char*) "rei_pht_137.tm2"
        },
        {
            1,
            45,
            0,
            0,
            (char*) "rei_pht_138.tm2"
        },
        {
            1,
            45,
            0,
            0,
            (char*) "rei_pht_139.tm2"
        },
        {
            1,
            45,
            0,
            0,
            (char*) "rei_pht_140.tm2"
        },
        {
            1,
            45,
            0,
            0,
            (char*) "rei_pht_141.tm2"
        },
        {
            1,
            45,
            0,
            0,
            (char*) "rei_pht_142.tm2"
        },
        {
            1,
            45,
            0,
            0,
            (char*) "rei_pht_143.tm2"
        },
        {
            1,
            45,
            0,
            0,
            (char*) "rei_pht_144.tm2"
        },
        {
            1,
            45,
            0,
            0,
            (char*) "rei_pht_145.tm2"
        },
        {
            1,
            45,
            0,
            0,
            (char*) "rei_pht_146.tm2"
        },
        {
            1,
            45,
            0,
            0,
            (char*) "rei_pht_147.tm2"
        },
        {
            1,
            45,
            0,
            0,
            (char*) "rei_pht_148.tm2"
        },
        {
            1,
            45,
            0,
            0,
            (char*) "rei_pht_149.tm2"
        },
        {
            1,
            45,
            0,
            0,
            (char*) "rei_pht_150.tm2"
        },
        {
            1,
            45,
            0,
            0,
            (char*) "rei_pht_151.tm2"
        },
        {
            1,
            45,
            0,
            0,
            (char*) "rei_pht_152.tm2"
        },
        {
            1,
            45,
            0,
            0,
            (char*) "rei_pht_153.tm2"
        },
        {
            1,
            45,
            0,
            0,
            (char*) "rei_pht_154.tm2"
        },
        {
            1,
            45,
            0,
            0,
            (char*) "rei_pht_155.tm2"
        },
        {
            1,
            45,
            0,
            0,
            (char*) "rei_pht_156.tm2"
        },
        {
            1,
            45,
            0,
            0,
            (char*) "rei_pht_157.tm2"
        },
        {
            1,
            45,
            0,
            0,
            (char*) "rei_pht_158.tm2"
        },
        {
            1,
            45,
            0,
            0,
            (char*) "rei_pht_159.tm2"
        },
        {
            1,
            45,
            0,
            0,
            (char*) "rei_pht_160.tm2"
        },
        {
            1,
            45,
            0,
            0,
            (char*) "rei_pht_161.tm2"
        },
        {
            1,
            45,
            0,
            0,
            (char*) "rei_pht_162.tm2"
        },
        {
            1,
            45,
            0,
            0,
            (char*) "rei_pht_163.tm2"
        },
        {
            1,
            45,
            0,
            0,
            (char*) "rei_pht_164.tm2"
        },
        {
            1,
            45,
            0,
            0,
            (char*) "rei_pht_165.tm2"
        },
        {
            1,
            45,
            0,
            0,
            (char*) "rei_pht_166.tm2"
        },
        {
            1,
            45,
            0,
            0,
            (char*) "rei_pht_167.tm2"
        },
        {
            1,
            45,
            0,
            0,
            (char*) "rei_pht_168.tm2"
        },
        {
            1,
            45,
            0,
            0,
            (char*) "rei_pht_169.tm2"
        },
        {
            1,
            45,
            0,
            0,
            (char*) "rei_pht_170.tm2"
        },
        {
            1,
            45,
            0,
            0,
            (char*) "rei_pht_171.tm2"
        },
        {
            1,
            45,
            0,
            0,
            (char*) "rei_pht_172.tm2"
        },
        {
            1,
            45,
            0,
            0,
            (char*) "rei_pht_173.tm2"
        },
        {
            1,
            45,
            0,
            0,
            (char*) "rei_pht_174.tm2"
        },
        {
            1,
            45,
            0,
            0,
            (char*) "rei_pht_175.tm2"
        },
        {
            1,
            45,
            0,
            0,
            (char*) "rei_pht_176.tm2"
        },
        {
            1,
            45,
            0,
            0,
            (char*) "rei_pht_177.tm2"
        },
        {
            1,
            20,
            0,
            0,
            (char*) "rei_get_000.pk2"
        },
        {
            1,
            20,
            0,
            0,
            (char*) "rei_get_001.pk2"
        },
        {
            1,
            20,
            0,
            0,
            (char*) "rei_get_002.pk2"
        },
        {
            1,
            20,
            0,
            0,
            (char*) "rei_get_003.pk2"
        },
        {
            1,
            20,
            0,
            0,
            (char*) "rei_get_004.pk2"
        },
        {
            1,
            20,
            0,
            0,
            (char*) "rei_get_005.pk2"
        },
        {
            1,
            20,
            0,
            0,
            (char*) "rei_get_006.pk2"
        },
        {
            1,
            20,
            0,
            0,
            (char*) "rei_get_007.pk2"
        },
        {
            1,
            20,
            0,
            0,
            (char*) "rei_get_008.pk2"
        },
        {
            1,
            20,
            0,
            0,
            (char*) "rei_get_009.pk2"
        },
        {
            1,
            20,
            0,
            0,
            (char*) "rei_get_010.pk2"
        },
        {
            1,
            20,
            0,
            0,
            (char*) "rei_get_011.pk2"
        },
        {
            1,
            20,
            0,
            0,
            (char*) "rei_get_012.pk2"
        },
        {
            1,
            20,
            0,
            0,
            (char*) "rei_get_013.pk2"
        },
        {
            1,
            20,
            0,
            0,
            (char*) "rei_get_014.pk2"
        },
        {
            1,
            20,
            0,
            0,
            (char*) "rei_get_015.pk2"
        },
        {
            1,
            20,
            0,
            0,
            (char*) "rei_get_016.pk2"
        },
        {
            1,
            20,
            0,
            0,
            (char*) "rei_get_017.pk2"
        },
        {
            1,
            20,
            0,
            0,
            (char*) "rei_get_018.pk2"
        },
        {
            1,
            20,
            0,
            0,
            (char*) "rei_get_019.pk2"
        },
        {
            1,
            20,
            0,
            0,
            (char*) "rei_get_020.pk2"
        },
        {
            1,
            20,
            0,
            0,
            (char*) "rei_get_021.pk2"
        },
        {
            1,
            20,
            0,
            0,
            (char*) "rei_get_022.pk2"
        },
        {
            1,
            20,
            0,
            0,
            (char*) "rei_get_023.pk2"
        },
        {
            1,
            20,
            0,
            0,
            (char*) "rei_get_024.pk2"
        },
        {
            1,
            20,
            0,
            0,
            (char*) "rei_get_025.pk2"
        },
        {
            1,
            20,
            0,
            0,
            (char*) "rei_get_026.pk2"
        },
        {
            1,
            20,
            0,
            0,
            (char*) "rei_get_027.pk2"
        },
        {
            1,
            20,
            0,
            0,
            (char*) "rei_get_028.pk2"
        },
        {
            1,
            20,
            0,
            0,
            (char*) "rei_get_029.pk2"
        },
        {
            1,
            20,
            0,
            0,
            (char*) "rei_get_030.pk2"
        },
        {
            1,
            20,
            0,
            0,
            (char*) "rei_get_031.pk2"
        },
        {
            1,
            20,
            0,
            0,
            (char*) "rei_get_032.pk2"
        },
        {
            1,
            20,
            0,
            0,
            (char*) "rei_get_033.pk2"
        },
        {
            1,
            20,
            0,
            0,
            (char*) "rei_get_034.pk2"
        },
        {
            1,
            20,
            0,
            0,
            (char*) "rei_get_035.pk2"
        },
        {
            0,
            29,
            0,
            0,
            (char*) "kagiana.tm2"
        },
        {
            1,
            29,
            0,
            0,
            (char*) "game_000.tm2"
        },
        {
            1,
            29,
            0,
            0,
            (char*) "game_001.tm2"
        },
        {
            1,
            29,
            0,
            0,
            (char*) "game_002.tm2"
        },
        {
            1,
            29,
            0,
            0,
            (char*) "game_003.tm2"
        },
        {
            1,
            29,
            0,
            0,
            (char*) "game_004.tm2"
        },
        {
            1,
            29,
            0,
            0,
            (char*) "game_005.tm2"
        },
        {
            1,
            29,
            0,
            0,
            (char*) "game_006.tm2"
        },
        {
            1,
            29,
            0,
            0,
            (char*) "game_007.tm2"
        },
        {
            1,
            29,
            0,
            0,
            (char*) "game_008.tm2"
        },
        {
            1,
            29,
            0,
            0,
            (char*) "game_009.tm2"
        },
        {
            1,
            29,
            0,
            0,
            (char*) "game_010.tm2"
        },
        {
            1,
            29,
            0,
            0,
            (char*) "game_011.tm2"
        },
        {
            1,
            29,
            0,
            0,
            (char*) "game_012.tm2"
        },
        {
            1,
            29,
            0,
            0,
            (char*) "game_013.tm2"
        },
        {
            1,
            29,
            0,
            0,
            (char*) "game_014.tm2"
        },
        {
            1,
            29,
            0,
            0,
            (char*) "game_015.tm2"
        },
        {
            1,
            29,
            0,
            0,
            (char*) "game_016.tm2"
        },
        {
            1,
            29,
            0,
            0,
            (char*) "game_017.tm2"
        },
        {
            1,
            29,
            0,
            0,
            (char*) "game_018.tm2"
        },
        {
            1,
            29,
            0,
            0,
            (char*) "game_019.tm2"
        },
        {
            1,
            29,
            0,
            0,
            (char*) "game_020.tm2"
        },
        {
            1,
            29,
            0,
            0,
            (char*) "game_021.tm2"
        },
        {
            1,
            29,
            0,
            0,
            (char*) "game_022.tm2"
        },
        {
            1,
            29,
            0,
            0,
            (char*) "game_023.tm2"
        },
        {
            1,
            29,
            0,
            0,
            (char*) "game_024.tm2"
        },
        {
            1,
            31,
            0,
            0,
            (char*) "puzzle_hina.pk2"
        },
        {
            1,
            31,
            0,
            0,
            (char*) "puzzle_roku.pk2"
        },
        {
            1,
            31,
            0,
            0,
            (char*) "puzzle_kaza.pk2"
        },
        {
            1,
            31,
            0,
            0,
            (char*) "puzzle_kaza_2.pk2"
        },
        {
            1,
            46,
            0,
            0,
            (char*) "albm_cmn.pk2"
        },
        {
            1,
            46,
            0,
            0,
            (char*) "albm_hensyu.pk2"
        },
        {
            1,
            46,
            0,
            0,
            (char*) "albm_kkd_pat0.pk2"
        },
        {
            1,
            46,
            0,
            0,
            (char*) "albm_kkd_pat1.pk2"
        },
        {
            1,
            46,
            0,
            0,
            (char*) "albm_kkd_pat2.pk2"
        },
        {
            1,
            46,
            0,
            0,
            (char*) "albm_kkd_pat3.pk2"
        },
        {
            1,
            46,
            0,
            0,
            (char*) "albm_kkd_pat4.pk2"
        },
        {
            1,
            46,
            0,
            0,
            (char*) "albm_kkd_pat5.pk2"
        },
        {
            1,
            46,
            0,
            0,
            (char*) "albm_sl.pk2"
        },
        {
            1,
            46,
            0,
            0,
            (char*) "albm_slot_sl.pk2"
        },
        {
            1,
            47,
            0,
            0,
            (char*) "setup_bg.pk2"
        },
        {
            1,
            47,
            0,
            0,
            (char*) "setup_font.pk2"
        },
        {
            1,
            48,
            0,
            0,
            (char*) "option_top.pk2"
        },
        {
            1,
            48,
            0,
            0,
            (char*) "option_meido.pk2"
        },
        {
            1,
            48,
            0,
            0,
            (char*) "option_key.pk2"
        },
        {
            1,
            49,
            0,
            0,
            (char*) "msn_sl.pk2"
        },
        {
            1,
            49,
            0,
            0,
            (char*) "msn_start.pk2"
        },
        {
            1,
            49,
            0,
            0,
            (char*) "msn_result.pk2"
        },
        {
            1,
            50,
            0,
            0,
            (char*) "gallery_cmn.pk2"
        },
        {
            1,
            50,
            0,
            0,
            (char*) "gallery_top.pk2"
        },
        {
            1,
            50,
            0,
            0,
            (char*) "gallery_view.pk2"
        },
        {
            1,
            50,
            0,
            0,
            (char*) "gallery_settei_00.pk2"
        },
        {
            1,
            50,
            0,
            0,
            (char*) "gallery_settei_01.pk2"
        },
        {
            1,
            50,
            0,
            0,
            (char*) "gallery_settei_02.pk2"
        },
        {
            1,
            50,
            0,
            0,
            (char*) "gallery_settei_03.pk2"
        },
        {
            1,
            50,
            0,
            0,
            (char*) "gallery_settei_04.pk2"
        },
        {
            1,
            50,
            0,
            0,
            (char*) "gallery_settei_05.pk2"
        },
        {
            1,
            50,
            0,
            0,
            (char*) "gallery_settei_06.pk2"
        },
        {
            1,
            50,
            0,
            0,
            (char*) "gallery_settei_07.pk2"
        },
        {
            1,
            50,
            0,
            0,
            (char*) "gallery_settei_08.pk2"
        },
        {
            1,
            50,
            0,
            0,
            (char*) "gallery_settei_09.pk2"
        },
        {
            1,
            50,
            0,
            0,
            (char*) "gallery_settei_10.pk2"
        },
        {
            1,
            50,
            0,
            0,
            (char*) "gallery_settei_11.pk2"
        },
        {
            1,
            50,
            0,
            0,
            (char*) "gallery_settei_12.pk2"
        },
        {
            1,
            50,
            0,
            0,
            (char*) "gallery_settei_13.pk2"
        },
        {
            1,
            50,
            0,
            0,
            (char*) "gallery_settei_14.pk2"
        },
        {
            1,
            50,
            0,
            0,
            (char*) "gallery_settei_15.pk2"
        },
        {
            1,
            50,
            0,
            0,
            (char*) "gallery_settei_16.pk2"
        },
        {
            1,
            50,
            0,
            0,
            (char*) "gallery_settei_17.pk2"
        },
        {
            1,
            50,
            0,
            0,
            (char*) "gallery_settei_18.pk2"
        },
        {
            1,
            50,
            0,
            0,
            (char*) "gallery_settei_19.pk2"
        },
        {
            1,
            50,
            0,
            0,
            (char*) "gallery_image_00.pk2"
        },
        {
            1,
            50,
            0,
            0,
            (char*) "gallery_image_01.pk2"
        },
        {
            1,
            50,
            0,
            0,
            (char*) "gallery_image_02.pk2"
        },
        {
            1,
            50,
            0,
            0,
            (char*) "gallery_image_03.pk2"
        },
        {
            1,
            50,
            0,
            0,
            (char*) "gallery_image_04.pk2"
        },
        {
            1,
            50,
            0,
            0,
            (char*) "gallery_image_05.pk2"
        },
        {
            1,
            50,
            0,
            0,
            (char*) "gallery_image_06.pk2"
        },
        {
            1,
            50,
            0,
            0,
            (char*) "gallery_image_07.pk2"
        },
        {
            1,
            50,
            0,
            0,
            (char*) "gallery_image_08.pk2"
        },
        {
            1,
            50,
            0,
            0,
            (char*) "gallery_image_09.pk2"
        },
        {
            1,
            50,
            0,
            0,
            (char*) "gallery_promo_00.pk2"
        },
        {
            1,
            50,
            0,
            0,
            (char*) "gallery_promo_01.pk2"
        },
        {
            1,
            50,
            0,
            0,
            (char*) "gallery_promo_02.pk2"
        },
        {
            1,
            52,
            0,
            0,
            (char*) "gameclear_bg_a.pk2"
        },
        {
            1,
            52,
            0,
            0,
            (char*) "gameclear_bg_b.pk2"
        },
        {
            1,
            52,
            0,
            0,
            (char*) "gameclear_chara.pk2"
        },
        {
            1,
            52,
            0,
            0,
            (char*) "clear_menu.pk2"
        },
        {
            1,
            32,
            0,
            0,
            (char*) "loading.pk2"
        },
        {
            1,
            33,
            0,
            0,
            (char*) "ef_kusabi_pht1.pk2"
        },
        {
            1,
            33,
            0,
            0,
            (char*) "ef_kusabi_pht2.pk2"
        },
        {
            1,
            33,
            0,
            0,
            (char*) "ef_kusabi_pht3.pk2"
        },
        {
            1,
            33,
            0,
            0,
            (char*) "ef_kusabi_pht4.pk2"
        },
        {
            1,
            33,
            0,
            0,
            (char*) "ef_kusabi_pht5.pk2"
        },
        {
            1,
            34,
            0,
            0,
            (char*) "savepoint_bg.pk2"
        },
        {
            1,
            34,
            0,
            0,
            (char*) "savepoint_moji.pk2"
        },
        {
            1,
            34,
            0,
            0,
            (char*) "save_load.pk2"
        },
        {
            1,
            34,
            0,
            0,
            (char*) "snp_clear_data.pk2"
        },
        {
            0,
            42,
            0,
            0,
            (char*) "zero2game.ico"
        },
        {
            0,
            42,
            0,
            0,
            (char*) "zero2album0.ico"
        },
        {
            0,
            42,
            0,
            0,
            (char*) "zero2album1.ico"
        },
        {
            0,
            42,
            0,
            0,
            (char*) "zero2album2.ico"
        },
        {
            0,
            42,
            0,
            0,
            (char*) "zero2album3.ico"
        },
        {
            0,
            42,
            0,
            0,
            (char*) "zero2album4.ico"
        },
        {
            0,
            44,
            0,
            0,
            (char*) "CandlePos.pk2"
        },
        {
            1,
            53,
            0,
            0,
            (char*) "subtitle.obj"
        },
        {
            0,
            24,
            0,
            0,
            (char*) "sitaji.pk2"
        },
        {
            0,
            24,
            0,
            0,
            (char*) "grd.pk2"
        },
        {
            0,
            24,
            0,
            0,
            (char*) "moyou.pk2"
        },
        {
            0,
            24,
            0,
            0,
            (char*) "overlay.pk2"
        },
        {
            0,
            24,
            0,
            0,
            (char*) "test_bg.pk2"
        },
        {
            0,
            24,
            0,
            0,
            (char*) "brightness.pk2"
        },
};

inline Zero2FileInfo filename_dat[4491] =
    {
        {
            0,
            1,
            0,
            0,
            (char*) "comp_tes.pks"
        },
        {
            0,
            1,
            0,
            0,
            (char*) "comp_tes.cmp"
        },
        {
            1,
            0,
            0,
            0,
            (char*) "logo.pk2"
        },
        {
            1,
            0,
            0,
            0,
            (char*) "zero_logo.pk2"
        },
        {
            1,
            0,
            0,
            0,
            (char*) "vram_tex.pk2"
        },
        {
            1,
            0,
            0,
            0,
            (char*) "vram_tex_f.pk2"
        },
        {
            1,
            0,
            0,
            0,
            (char*) "vram_tex_g.pk2"
        },
        {
            1,
            0,
            0,
            0,
            (char*) "vram_tex_s.pk2"
        },
        {
            1,
            0,
            0,
            0,
            (char*) "vram_tex_i.pk2"
        },
        {
            1,
            0,
            0,
            0,
            (char*) "n_finder.pk2"
        },
        {
            1,
            0,
            0,
            0,
            (char*) "n_finder_f.pk2"
        },
        {
            1,
            0,
            0,
            0,
            (char*) "n_finder_g.pk2"
        },
        {
            1,
            0,
            0,
            0,
            (char*) "n_finder_s.pk2"
        },
        {
            1,
            0,
            0,
            0,
            (char*) "n_finder_i.pk2"
        },
        {
            1,
            0,
            0,
            0,
            (char*) "n_life.pk2"
        },
        {
            1,
            0,
            0,
            0,
            (char*) "n_life_f.pk2"
        },
        {
            1,
            0,
            0,
            0,
            (char*) "n_life_g.pk2"
        },
        {
            1,
            0,
            0,
            0,
            (char*) "n_life_s.pk2"
        },
        {
            1,
            0,
            0,
            0,
            (char*) "n_life_i.pk2"
        },
        {
            1,
            0,
            0,
            0,
            (char*) "outgame.pk2"
        },
        {
            1,
            0,
            0,
            0,
            (char*) "ScreenSaver.pk2"
        },
        {
            1,
            0,
            0,
            0,
            (char*) "ScreenSaver2.pk2"
        },
        {
            1,
            20,
            0,
            0,
            (char*) "os_r00.tm2"
        },
        {
            1,
            20,
            0,
            0,
            (char*) "os_r04.tm2"
        },
        {
            1,
            20,
            0,
            0,
            (char*) "ok_r04.tm2"
        },
        {
            1,
            20,
            0,
            0,
            (char*) "pht_hint_get_000.tm2"
        },
        {
            1,
            20,
            0,
            0,
            (char*) "pht_etc_get_000.pk2"
        },
        {
            1,
            25,
            0,
            0,
            (char*) "menu_bg.pk2"
        },
        {
            1,
            25,
            0,
            0,
            (char*) "menu_bg_f.pk2"
        },
        {
            1,
            25,
            0,
            0,
            (char*) "menu_bg_g.pk2"
        },
        {
            1,
            25,
            0,
            0,
            (char*) "menu_bg_s.pk2"
        },
        {
            1,
            25,
            0,
            0,
            (char*) "menu_bg_i.pk2"
        },
        {
            1,
            25,
            0,
            0,
            (char*) "menu_playdata.pk2"
        },
        {
            1,
            25,
            0,
            0,
            (char*) "menu_playdata_f.pk2"
        },
        {
            1,
            25,
            0,
            0,
            (char*) "menu_playdata_g.pk2"
        },
        {
            1,
            25,
            0,
            0,
            (char*) "menu_playdata_s.pk2"
        },
        {
            1,
            25,
            0,
            0,
            (char*) "menu_playdata_i.pk2"
        },
        {
            1,
            25,
            0,
            0,
            (char*) "menu_status.pk2"
        },
        {
            1,
            25,
            0,
            0,
            (char*) "menu_status_f.pk2"
        },
        {
            1,
            25,
            0,
            0,
            (char*) "menu_status_g.pk2"
        },
        {
            1,
            25,
            0,
            0,
            (char*) "menu_status_s.pk2"
        },
        {
            1,
            25,
            0,
            0,
            (char*) "menu_status_i.pk2"
        },
        {
            1,
            25,
            0,
            0,
            (char*) "menu_tourou.pk2"
        },
        {
            1,
            25,
            0,
            0,
            (char*) "menu_item.pk2"
        },
        {
            1,
            25,
            0,
            0,
            (char*) "menu_item_f.pk2"
        },
        {
            1,
            25,
            0,
            0,
            (char*) "menu_item_g.pk2"
        },
        {
            1,
            25,
            0,
            0,
            (char*) "menu_item_s.pk2"
        },
        {
            1,
            25,
            0,
            0,
            (char*) "menu_item_i.pk2"
        },
        {
            1,
            25,
            0,
            0,
            (char*) "menu_photo.pk2"
        },
        {
            1,
            25,
            0,
            0,
            (char*) "menu_photo_f.pk2"
        },
        {
            1,
            25,
            0,
            0,
            (char*) "menu_photo_g.pk2"
        },
        {
            1,
            25,
            0,
            0,
            (char*) "menu_photo_s.pk2"
        },
        {
            1,
            25,
            0,
            0,
            (char*) "menu_photo_i.pk2"
        },
        {
            1,
            25,
            0,
            0,
            (char*) "menu_file_cmn.pk2"
        },
        {
            1,
            25,
            0,
            0,
            (char*) "menu_file_cmn_f.pk2"
        },
        {
            1,
            25,
            0,
            0,
            (char*) "menu_file_cmn_g.pk2"
        },
        {
            1,
            25,
            0,
            0,
            (char*) "menu_file_cmn_s.pk2"
        },
        {
            1,
            25,
            0,
            0,
            (char*) "menu_file_cmn_i.pk2"
        },
        {
            1,
            25,
            0,
            0,
            (char*) "menu_file_top.pk2"
        },
        {
            1,
            25,
            0,
            0,
            (char*) "menu_file_top_f.pk2"
        },
        {
            1,
            25,
            0,
            0,
            (char*) "menu_file_top_g.pk2"
        },
        {
            1,
            25,
            0,
            0,
            (char*) "menu_file_top_s.pk2"
        },
        {
            1,
            25,
            0,
            0,
            (char*) "menu_file_top_i.pk2"
        },
        {
            1,
            25,
            0,
            0,
            (char*) "menu_file_photo.pk2"
        },
        {
            1,
            25,
            0,
            0,
            (char*) "menu_file_txt.pk2"
        },
        {
            1,
            25,
            0,
            0,
            (char*) "menu_file_map.pk2"
        },
        {
            1,
            25,
            0,
            0,
            (char*) "menu_map.pk2"
        },
        {
            1,
            25,
            0,
            0,
            (char*) "menu_map_f.pk2"
        },
        {
            1,
            25,
            0,
            0,
            (char*) "menu_map_g.pk2"
        },
        {
            1,
            25,
            0,
            0,
            (char*) "menu_map_s.pk2"
        },
        {
            1,
            25,
            0,
            0,
            (char*) "menu_map_i.pk2"
        },
        {
            1,
            25,
            0,
            0,
            (char*) "menu_radio.pk2"
        },
        {
            1,
            25,
            0,
            0,
            (char*) "menu_radio_f.pk2"
        },
        {
            1,
            25,
            0,
            0,
            (char*) "menu_radio_g.pk2"
        },
        {
            1,
            25,
            0,
            0,
            (char*) "menu_radio_s.pk2"
        },
        {
            1,
            25,
            0,
            0,
            (char*) "menu_radio_i.pk2"
        },
        {
            1,
            25,
            0,
            0,
            (char*) "menu_memo.pk2"
        },
        {
            1,
            25,
            0,
            0,
            (char*) "menu_memo_f.pk2"
        },
        {
            1,
            25,
            0,
            0,
            (char*) "menu_memo_g.pk2"
        },
        {
            1,
            25,
            0,
            0,
            (char*) "menu_memo_s.pk2"
        },
        {
            1,
            25,
            0,
            0,
            (char*) "menu_memo_i.pk2"
        },
        {
            1,
            25,
            0,
            0,
            (char*) "menu_camera.pk2"
        },
        {
            1,
            25,
            0,
            0,
            (char*) "menu_camera_f.pk2"
        },
        {
            1,
            25,
            0,
            0,
            (char*) "menu_camera_g.pk2"
        },
        {
            1,
            25,
            0,
            0,
            (char*) "menu_camera_s.pk2"
        },
        {
            1,
            25,
            0,
            0,
            (char*) "menu_camera_i.pk2"
        },
        {
            1,
            25,
            0,
            0,
            (char*) "menu_camera_edt.pk2"
        },
        {
            1,
            25,
            0,
            0,
            (char*) "menu_camera_edt_f.pk2"
        },
        {
            1,
            25,
            0,
            0,
            (char*) "menu_camera_edt_g.pk2"
        },
        {
            1,
            25,
            0,
            0,
            (char*) "menu_camera_edt_s.pk2"
        },
        {
            1,
            25,
            0,
            0,
            (char*) "menu_camera_edt_i.pk2"
        },
        {
            1,
            25,
            0,
            0,
            (char*) "menu_glist.pk2"
        },
        {
            1,
            25,
            0,
            0,
            (char*) "menu_glist_f.pk2"
        },
        {
            1,
            25,
            0,
            0,
            (char*) "menu_glist_g.pk2"
        },
        {
            1,
            25,
            0,
            0,
            (char*) "menu_glist_s.pk2"
        },
        {
            1,
            25,
            0,
            0,
            (char*) "menu_glist_i.pk2"
        },
        {
            1,
            25,
            0,
            0,
            (char*) "menu_map_snp_os00.pk2"
        },
        {
            1,
            25,
            0,
            0,
            (char*) "menu_chp1.pk2"
        },
        {
            1,
            25,
            0,
            0,
            (char*) "menu_chp1_f.pk2"
        },
        {
            1,
            25,
            0,
            0,
            (char*) "menu_chp1_g.pk2"
        },
        {
            1,
            25,
            0,
            0,
            (char*) "menu_chp1_s.pk2"
        },
        {
            1,
            25,
            0,
            0,
            (char*) "menu_chp1_i.pk2"
        },
        {
            1,
            25,
            0,
            0,
            (char*) "menu_chp2.pk2"
        },
        {
            1,
            25,
            0,
            0,
            (char*) "menu_chp2_f.pk2"
        },
        {
            1,
            25,
            0,
            0,
            (char*) "menu_chp2_g.pk2"
        },
        {
            1,
            25,
            0,
            0,
            (char*) "menu_chp2_s.pk2"
        },
        {
            1,
            25,
            0,
            0,
            (char*) "menu_chp2_i.pk2"
        },
        {
            1,
            25,
            0,
            0,
            (char*) "menu_chp3.pk2"
        },
        {
            1,
            25,
            0,
            0,
            (char*) "menu_chp3_f.pk2"
        },
        {
            1,
            25,
            0,
            0,
            (char*) "menu_chp3_g.pk2"
        },
        {
            1,
            25,
            0,
            0,
            (char*) "menu_chp3_s.pk2"
        },
        {
            1,
            25,
            0,
            0,
            (char*) "menu_chp3_i.pk2"
        },
        {
            1,
            25,
            0,
            0,
            (char*) "menu_chp4.pk2"
        },
        {
            1,
            25,
            0,
            0,
            (char*) "menu_chp4_f.pk2"
        },
        {
            1,
            25,
            0,
            0,
            (char*) "menu_chp4_g.pk2"
        },
        {
            1,
            25,
            0,
            0,
            (char*) "menu_chp4_s.pk2"
        },
        {
            1,
            25,
            0,
            0,
            (char*) "menu_chp4_i.pk2"
        },
        {
            1,
            25,
            0,
            0,
            (char*) "menu_chp5.pk2"
        },
        {
            1,
            25,
            0,
            0,
            (char*) "menu_chp5_f.pk2"
        },
        {
            1,
            25,
            0,
            0,
            (char*) "menu_chp5_g.pk2"
        },
        {
            1,
            25,
            0,
            0,
            (char*) "menu_chp5_s.pk2"
        },
        {
            1,
            25,
            0,
            0,
            (char*) "menu_chp5_i.pk2"
        },
        {
            1,
            25,
            0,
            0,
            (char*) "menu_chp6.pk2"
        },
        {
            1,
            25,
            0,
            0,
            (char*) "menu_chp6_f.pk2"
        },
        {
            1,
            25,
            0,
            0,
            (char*) "menu_chp6_g.pk2"
        },
        {
            1,
            25,
            0,
            0,
            (char*) "menu_chp6_s.pk2"
        },
        {
            1,
            25,
            0,
            0,
            (char*) "menu_chp6_i.pk2"
        },
        {
            1,
            25,
            0,
            0,
            (char*) "menu_chp7.pk2"
        },
        {
            1,
            25,
            0,
            0,
            (char*) "menu_chp7_f.pk2"
        },
        {
            1,
            25,
            0,
            0,
            (char*) "menu_chp7_g.pk2"
        },
        {
            1,
            25,
            0,
            0,
            (char*) "menu_chp7_s.pk2"
        },
        {
            1,
            25,
            0,
            0,
            (char*) "menu_chp7_i.pk2"
        },
        {
            1,
            25,
            0,
            0,
            (char*) "menu_chp8.pk2"
        },
        {
            1,
            25,
            0,
            0,
            (char*) "menu_chp8_f.pk2"
        },
        {
            1,
            25,
            0,
            0,
            (char*) "menu_chp8_g.pk2"
        },
        {
            1,
            25,
            0,
            0,
            (char*) "menu_chp8_s.pk2"
        },
        {
            1,
            25,
            0,
            0,
            (char*) "menu_chp8_i.pk2"
        },
        {
            1,
            25,
            0,
            0,
            (char*) "menu_chp9.pk2"
        },
        {
            1,
            25,
            0,
            0,
            (char*) "menu_chp9_f.pk2"
        },
        {
            1,
            25,
            0,
            0,
            (char*) "menu_chp9_g.pk2"
        },
        {
            1,
            25,
            0,
            0,
            (char*) "menu_chp9_s.pk2"
        },
        {
            1,
            25,
            0,
            0,
            (char*) "menu_chp9_i.pk2"
        },
        {
            1,
            25,
            0,
            0,
            (char*) "menu_chp10.pk2"
        },
        {
            1,
            25,
            0,
            0,
            (char*) "menu_chp10_f.pk2"
        },
        {
            1,
            25,
            0,
            0,
            (char*) "menu_chp10_g.pk2"
        },
        {
            1,
            25,
            0,
            0,
            (char*) "menu_chp10_s.pk2"
        },
        {
            1,
            25,
            0,
            0,
            (char*) "menu_chp10_i.pk2"
        },
        {
            1,
            25,
            0,
            0,
            (char*) "menu_chp11.pk2"
        },
        {
            1,
            25,
            0,
            0,
            (char*) "menu_chp11_f.pk2"
        },
        {
            1,
            25,
            0,
            0,
            (char*) "menu_chp11_g.pk2"
        },
        {
            1,
            25,
            0,
            0,
            (char*) "menu_chp11_s.pk2"
        },
        {
            1,
            25,
            0,
            0,
            (char*) "menu_chp11_i.pk2"
        },
        {
            1,
            25,
            0,
            0,
            (char*) "menu_chp_msn.pk2"
        },
        {
            1,
            25,
            0,
            0,
            (char*) "menu_chp_msn_f.pk2"
        },
        {
            1,
            25,
            0,
            0,
            (char*) "menu_chp_msn_g.pk2"
        },
        {
            1,
            25,
            0,
            0,
            (char*) "menu_chp_msn_s.pk2"
        },
        {
            1,
            25,
            0,
            0,
            (char*) "menu_chp_msn_i.pk2"
        },
        {
            1,
            28,
            0,
            0,
            (char*) "sora.pak"
        },
        {
            1,
            41,
            0,
            0,
            (char*) "gameover.pk2"
        },
        {
            1,
            41,
            0,
            0,
            (char*) "gameover_f.pk2"
        },
        {
            1,
            41,
            0,
            0,
            (char*) "gameover_g.pk2"
        },
        {
            1,
            41,
            0,
            0,
            (char*) "gameover_s.pk2"
        },
        {
            1,
            41,
            0,
            0,
            (char*) "gameover_i.pk2"
        },
        {
            1,
            30,
            0,
            0,
            (char*) "menu_map_soto.pk2"
        },
        {
            1,
            30,
            0,
            0,
            (char*) "menu_map_os1.pk2"
        },
        {
            1,
            30,
            0,
            0,
            (char*) "menu_map_os2.pk2"
        },
        {
            1,
            30,
            0,
            0,
            (char*) "menu_map_os0.pk2"
        },
        {
            1,
            30,
            0,
            0,
            (char*) "menu_map_ks0.pk2"
        },
        {
            1,
            30,
            0,
            0,
            (char*) "menu_map_ks1.pk2"
        },
        {
            1,
            30,
            0,
            0,
            (char*) "menu_map_ks2.pk2"
        },
        {
            1,
            30,
            0,
            0,
            (char*) "menu_map_ry1.pk2"
        },
        {
            1,
            30,
            0,
            0,
            (char*) "menu_map_ry2.pk2"
        },
        {
            1,
            30,
            0,
            0,
            (char*) "menu_map_ry0.pk2"
        },
        {
            1,
            30,
            0,
            0,
            (char*) "menu_map_tb1.pk2"
        },
        {
            1,
            30,
            0,
            0,
            (char*) "menu_map_tb2.pk2"
        },
        {
            1,
            30,
            0,
            0,
            (char*) "menu_map_tb0.pk2"
        },
        {
            1,
            30,
            0,
            0,
            (char*) "menu_map_chika.pk2"
        },
        {
            1,
            30,
            0,
            0,
            (char*) "menu_map_kuc.pk2"
        },
        {
            1,
            30,
            0,
            0,
            (char*) "menu_map_kuh.pk2"
        },
        {
            1,
            30,
            0,
            0,
            (char*) "menu_map_kur.pk2"
        },
        {
            1,
            40,
            0,
            0,
            (char*) "snp_soto_mis.pk2"
        },
        {
            1,
            40,
            0,
            0,
            (char*) "snp_soto_mis_e.pk2"
        },
        {
            1,
            40,
            0,
            0,
            (char*) "snp_soto_mis_w.pk2"
        },
        {
            1,
            40,
            0,
            0,
            (char*) "snp_soto_osa.pk2"
        },
        {
            1,
            40,
            0,
            0,
            (char*) "snp_soto_ido.pk2"
        },
        {
            1,
            40,
            0,
            0,
            (char*) "snp_soto_minami.pk2"
        },
        {
            1,
            40,
            0,
            0,
            (char*) "snp_soto_kir.pk2"
        },
        {
            1,
            40,
            0,
            0,
            (char*) "snp_soto_tac.pk2"
        },
        {
            1,
            40,
            0,
            0,
            (char*) "snp_soto_kita.pk2"
        },
        {
            1,
            40,
            0,
            0,
            (char*) "snp_soto_mon.pk2"
        },
        {
            1,
            40,
            0,
            0,
            (char*) "snp_soto_sas.pk2"
        },
        {
            1,
            40,
            0,
            0,
            (char*) "snp_soto_kur_mae.pk2"
        },
        {
            1,
            40,
            0,
            0,
            (char*) "snp_soto_min.pk2"
        },
        {
            1,
            40,
            0,
            0,
            (char*) "snp_soto_boc.pk2"
        },
        {
            1,
            40,
            0,
            0,
            (char*) "snp_soto_kuc.pk2"
        },
        {
            1,
            40,
            0,
            0,
            (char*) "snp_soto_san_iri.pk2"
        },
        {
            1,
            40,
            0,
            0,
            (char*) "snp_soto_san.pk2"
        },
        {
            1,
            40,
            0,
            0,
            (char*) "snp_soto_kur.pk2"
        },
        {
            1,
            40,
            0,
            0,
            (char*) "snp_soto_kro.pk2"
        },
        {
            1,
            40,
            0,
            0,
            (char*) "snp_soto_tac_ie.pk2"
        },
        {
            1,
            40,
            0,
            0,
            (char*) "snp_os1_gen.pk2"
        },
        {
            1,
            40,
            0,
            0,
            (char*) "snp_os1_kim.pk2"
        },
        {
            1,
            40,
            0,
            0,
            (char*) "snp_os1_nan.pk2"
        },
        {
            1,
            40,
            0,
            0,
            (char*) "snp_os1_iro.pk2"
        },
        {
            1,
            40,
            0,
            0,
            (char*) "snp_os1_dom2.pk2"
        },
        {
            1,
            40,
            0,
            0,
            (char*) "snp_os1_dom1.pk2"
        },
        {
            1,
            40,
            0,
            0,
            (char*) "snp_os1_dom0.pk2"
        },
        {
            1,
            40,
            0,
            0,
            (char*) "snp_os1_oza.pk2"
        },
        {
            1,
            40,
            0,
            0,
            (char*) "snp_os1_but.pk2"
        },
        {
            1,
            40,
            0,
            0,
            (char*) "snp_os1_kam.pk2"
        },
        {
            1,
            40,
            0,
            0,
            (char*) "snp_os1_oku.pk2"
        },
        {
            1,
            40,
            0,
            0,
            (char*) "snp_os2_dom.pk2"
        },
        {
            1,
            40,
            0,
            0,
            (char*) "snp_os2_sei.pk2"
        },
        {
            1,
            40,
            0,
            0,
            (char*) "snp_os2_kya.pk2"
        },
        {
            1,
            40,
            0,
            0,
            (char*) "snp_os2_sin.pk2"
        },
        {
            1,
            40,
            0,
            0,
            (char*) "snp_os2_sho.pk2"
        },
        {
            1,
            40,
            0,
            0,
            (char*) "snp_ks1_kei.pk2"
        },
        {
            1,
            40,
            0,
            0,
            (char*) "snp_ks1_gen.pk2"
        },
        {
            1,
            40,
            0,
            0,
            (char*) "snp_ks1_mei.pk2"
        },
        {
            1,
            40,
            0,
            0,
            (char*) "snp_ks1_tuc.pk2"
        },
        {
            1,
            40,
            0,
            0,
            (char*) "snp_ks1_tuc_chi.pk2"
        },
        {
            1,
            40,
            0,
            0,
            (char*) "snp_ks1_ohi.pk2"
        },
        {
            1,
            40,
            0,
            0,
            (char*) "snp_ks1_tub.pk2"
        },
        {
            1,
            40,
            0,
            0,
            (char*) "snp_ks1_nun_mon.pk2"
        },
        {
            1,
            40,
            0,
            0,
            (char*) "snp_ks1_nun.pk2"
        },
        {
            1,
            40,
            0,
            0,
            (char*) "snp_ks1_doz.pk2"
        },
        {
            1,
            40,
            0,
            0,
            (char*) "snp_ks1_doz_zas.pk2"
        },
        {
            1,
            40,
            0,
            0,
            (char*) "snp_ks1_doz_tuu.pk2"
        },
        {
            1,
            40,
            0,
            0,
            (char*) "snp_ks1_but.pk2"
        },
        {
            1,
            40,
            0,
            0,
            (char*) "snp_ks1_wat.pk2"
        },
        {
            1,
            40,
            0,
            0,
            (char*) "snp_ks1_kus_kob.pk2"
        },
        {
            1,
            40,
            0,
            0,
            (char*) "snp_ks1_kus.pk2"
        },
        {
            1,
            40,
            0,
            0,
            (char*) "snp_ks1_kus_tuu.pk2"
        },
        {
            1,
            40,
            0,
            0,
            (char*) "snp_ks0_chi.pk2"
        },
        {
            1,
            40,
            0,
            0,
            (char*) "snp_ks2_tub.pk2"
        },
        {
            1,
            40,
            0,
            0,
            (char*) "snp_ks2_nun.pk2"
        },
        {
            1,
            40,
            0,
            0,
            (char*) "snp_ks2_mei.pk2"
        },
        {
            1,
            40,
            0,
            0,
            (char*) "snp_ks2_meimetu.pk2"
        },
        {
            1,
            40,
            0,
            0,
            (char*) "snp_ks2_kya_rou.pk2"
        },
        {
            1,
            40,
            0,
            0,
            (char*) "snp_ks2_kya.pk2"
        },
        {
            1,
            40,
            0,
            0,
            (char*) "snp_ks2_hin.pk2"
        },
        {
            1,
            40,
            0,
            0,
            (char*) "snp_ks2_tou.pk2"
        },
        {
            1,
            40,
            0,
            0,
            (char*) "snp_ks0_but.pk2"
        },
        {
            1,
            40,
            0,
            0,
            (char*) "snp_ks0_wat_w.pk2"
        },
        {
            1,
            40,
            0,
            0,
            (char*) "snp_ks0_wat_e.pk2"
        },
        {
            1,
            40,
            0,
            0,
            (char*) "snp_ks0_kus.pk2"
        },
        {
            1,
            40,
            0,
            0,
            (char*) "snp_ry1_gen.pk2"
        },
        {
            1,
            40,
            0,
            0,
            (char*) "snp_ry1_gen_rou.pk2"
        },
        {
            1,
            40,
            0,
            0,
            (char*) "snp_ry1_kub.pk2"
        },
        {
            1,
            40,
            0,
            0,
            (char*) "snp_ry1_aka.pk2"
        },
        {
            1,
            40,
            0,
            0,
            (char*) "snp_ry1_but.pk2"
        },
        {
            1,
            40,
            0,
            0,
            (char*) "snp_ry1_zas.pk2"
        },
        {
            1,
            40,
            0,
            0,
            (char*) "snp_ry1_nak.pk2"
        },
        {
            1,
            40,
            0,
            0,
            (char*) "snp_ry1_kam.pk2"
        },
        {
            1,
            40,
            0,
            0,
            (char*) "snp_ry1_fut.pk2"
        },
        {
            1,
            40,
            0,
            0,
            (char*) "snp_ry1_mei.pk2"
        },
        {
            1,
            40,
            0,
            0,
            (char*) "snp_ry1_kar.pk2"
        },
        {
            1,
            40,
            0,
            0,
            (char*) "snp_ry1_fuk.pk2"
        },
        {
            1,
            40,
            0,
            0,
            (char*) "snp_ry1_sho.pk2"
        },
        {
            1,
            40,
            0,
            0,
            (char*) "snp_ry1_eis.pk2"
        },
        {
            1,
            40,
            0,
            0,
            (char*) "snp_ry1_kai.pk2"
        },
        {
            1,
            40,
            0,
            0,
            (char*) "snp_ry2_wat.pk2"
        },
        {
            1,
            40,
            0,
            0,
            (char*) "snp_ry2_fuk.pk2"
        },
        {
            1,
            40,
            0,
            0,
            (char*) "snp_ry2_sho.pk2"
        },
        {
            1,
            40,
            0,
            0,
            (char*) "snp_ry2_kai.pk2"
        },
        {
            1,
            40,
            0,
            0,
            (char*) "snp_ry2_tak.pk2"
        },
        {
            1,
            40,
            0,
            0,
            (char*) "snp_tb1_gen.pk2"
        },
        {
            1,
            40,
            0,
            0,
            (char*) "snp_tb1_gen_rou.pk2"
        },
        {
            1,
            40,
            0,
            0,
            (char*) "snp_tb1_kub.pk2"
        },
        {
            1,
            40,
            0,
            0,
            (char*) "snp_tb1_zas.pk2"
        },
        {
            1,
            40,
            0,
            0,
            (char*) "snp_tb1_nak.pk2"
        },
        {
            1,
            40,
            0,
            0,
            (char*) "snp_tb1_kam.pk2"
        },
        {
            1,
            40,
            0,
            0,
            (char*) "snp_tb1_fut.pk2"
        },
        {
            1,
            40,
            0,
            0,
            (char*) "snp_tb1_mei.pk2"
        },
        {
            1,
            40,
            0,
            0,
            (char*) "snp_tb1_kar.pk2"
        },
        {
            1,
            40,
            0,
            0,
            (char*) "snp_tb1_fuk.pk2"
        },
        {
            1,
            40,
            0,
            0,
            (char*) "snp_tb1_sho.pk2"
        },
        {
            1,
            40,
            0,
            0,
            (char*) "snp_tb1_eis.pk2"
        },
        {
            1,
            40,
            0,
            0,
            (char*) "snp_tb1_kai.pk2"
        },
        {
            1,
            40,
            0,
            0,
            (char*) "snp_tb2_fuk.pk2"
        },
        {
            1,
            40,
            0,
            0,
            (char*) "snp_tb2_itu.pk2"
        },
        {
            1,
            40,
            0,
            0,
            (char*) "snp_tb2_sho.pk2"
        },
        {
            1,
            40,
            0,
            0,
            (char*) "snp_tb2_kai.pk2"
        },
        {
            1,
            40,
            0,
            0,
            (char*) "snp_tb2_tak.pk2"
        },
        {
            1,
            40,
            0,
            0,
            (char*) "snp_tb2_nar_e.pk2"
        },
        {
            1,
            40,
            0,
            0,
            (char*) "snp_tb2_nar_n.pk2"
        },
        {
            1,
            40,
            0,
            0,
            (char*) "snp_tb2_nar_s.pk2"
        },
        {
            1,
            40,
            0,
            0,
            (char*) "snp_tb2_nar_w.pk2"
        },
        {
            1,
            40,
            0,
            0,
            (char*) "snp_os0_osa.pk2"
        },
        {
            1,
            40,
            0,
            0,
            (char*) "snp_ry0_rytb.pk2"
        },
        {
            1,
            40,
            0,
            0,
            (char*) "snp_chika_fuk1.pk2"
        },
        {
            1,
            40,
            0,
            0,
            (char*) "snp_chika_fuk2.pk2"
        },
        {
            1,
            40,
            0,
            0,
            (char*) "snp_chika_hik.pk2"
        },
        {
            1,
            40,
            0,
            0,
            (char*) "snp_chika_utu.pk2"
        },
        {
            1,
            40,
            0,
            0,
            (char*) "snp_kur.pk2"
        },
        {
            1,
            40,
            0,
            0,
            (char*) "snp_kuc.pk2"
        },
        {
            1,
            40,
            0,
            0,
            (char*) "snp_kureha.pk2"
        },
        {
            1,
            40,
            0,
            0,
            (char*) "snp_soto_osa_mae.pk2"
        },
        {
            1,
            40,
            0,
            0,
            (char*) "snp_soto_kur_ura.pk2"
        },
        {
            1,
            40,
            0,
            0,
            (char*) "snp_soto_kir_ura.pk2"
        },
        {
            1,
            40,
            0,
            0,
            (char*) "snp_soto_kir_ie.pk2"
        },
        {
            0,
            2,
            0,
            0,
            (char*) "ene_act01.obj"
        },
        {
            0,
            2,
            0,
            0,
            (char*) "sis_alg.obj"
        },
        {
            1,
            14,
            0,
            0,
            (char*) "ch000_mio.mdl"
        },
        {
            1,
            14,
            0,
            0,
            (char*) "ch001_may.mdl"
        },
        {
            1,
            14,
            0,
            0,
            (char*) "ch002_fuuin.mdl"
        },
        {
            1,
            14,
            0,
            0,
            (char*) "ch003_kusabi2a.mdl"
        },
        {
            1,
            14,
            0,
            0,
            (char*) "ch004_makabe.mdl"
        },
        {
            1,
            14,
            0,
            0,
            (char*) "ch005_tyou.mdl"
        },
        {
            1,
            14,
            0,
            0,
            (char*) "ch006_itu.mdl"
        },
        {
            1,
            14,
            0,
            0,
            (char*) "ch007_dummy.mdl"
        },
        {
            1,
            14,
            0,
            0,
            (char*) "ch008_dummy.mdl"
        },
        {
            1,
            14,
            0,
            0,
            (char*) "ch009_kusabi2c.mdl"
        },
        {
            1,
            14,
            0,
            0,
            (char*) "ch010_yami.mdl"
        },
        {
            1,
            14,
            0,
            0,
            (char*) "ch011_yami2.mdl"
        },
        {
            1,
            14,
            0,
            0,
            (char*) "ch012_kusanawa.mdl"
        },
        {
            1,
            14,
            0,
            0,
            (char*) "ch013_saerei1.mdl"
        },
        {
            1,
            14,
            0,
            0,
            (char*) "ch014_guujitama.mdl"
        },
        {
            1,
            14,
            0,
            0,
            (char*) "ch015_maki.mdl"
        },
        {
            1,
            14,
            0,
            0,
            (char*) "ch016_miokage.mdl"
        },
        {
            1,
            14,
            0,
            0,
            (char*) "ch017_miya.mdl"
        },
        {
            1,
            14,
            0,
            0,
            (char*) "ch018_kusabi.mdl"
        },
        {
            1,
            14,
            0,
            0,
            (char*) "ch019_chitose.mdl"
        },
        {
            1,
            14,
            0,
            0,
            (char*) "ch020_rakka.mdl"
        },
        {
            1,
            14,
            0,
            0,
            (char*) "ch021_waninngyou.mdl"
        },
        {
            1,
            14,
            0,
            0,
            (char*) "ch022_hutagorei.mdl"
        },
        {
            1,
            14,
            0,
            0,
            (char*) "ch023_ashirei.mdl"
        },
        {
            1,
            14,
            0,
            0,
            (char*) "ch024_hako.mdl"
        },
        {
            1,
            14,
            0,
            0,
            (char*) "ch025_kubiore.mdl"
        },
        {
            1,
            14,
            0,
            0,
            (char*) "ch026_karakuri.mdl"
        },
        {
            1,
            14,
            0,
            0,
            (char*) "ch027_onikodomo1.mdl"
        },
        {
            1,
            14,
            0,
            0,
            (char*) "ch028_onikodomo2.mdl"
        },
        {
            1,
            14,
            0,
            0,
            (char*) "ch029_onikodomo3.mdl"
        },
        {
            1,
            14,
            0,
            0,
            (char*) "ch030_suisi.mdl"
        },
        {
            1,
            14,
            0,
            0,
            (char*) "ch031_guuji.mdl"
        },
        {
            1,
            14,
            0,
            0,
            (char*) "ch032_imibito1.mdl"
        },
        {
            1,
            14,
            0,
            0,
            (char*) "ch033_ningyou.mdl"
        },
        {
            1,
            14,
            0,
            0,
            (char*) "ch034_rakka2.mdl"
        },
        {
            1,
            14,
            0,
            0,
            (char*) "ch035_muraA.mdl"
        },
        {
            1,
            14,
            0,
            0,
            (char*) "ch036_muraB.mdl"
        },
        {
            1,
            14,
            0,
            0,
            (char*) "ch037_muraC.mdl"
        },
        {
            1,
            14,
            0,
            0,
            (char*) "ch038_kusa1.mdl"
        },
        {
            1,
            14,
            0,
            0,
            (char*) "ch039_kusa2.mdl"
        },
        {
            1,
            14,
            0,
            0,
            (char*) "ch040_kumitate.mdl"
        },
        {
            1,
            14,
            0,
            0,
            (char*) "ch041_kurorei.mdl"
        },
        {
            1,
            14,
            0,
            0,
            (char*) "ch042_dummy.mdl"
        },
        {
            1,
            14,
            0,
            0,
            (char*) "ch043_kurosawa.mdl"
        },
        {
            1,
            14,
            0,
            0,
            (char*) "ch044_saeconte.mdl"
        },
        {
            1,
            14,
            0,
            0,
            (char*) "ch045_lhandrei.mdl"
        },
        {
            1,
            14,
            0,
            0,
            (char*) "ch046_yami.mdl"
        },
        {
            1,
            14,
            0,
            0,
            (char*) "ch047_kusa3.mdl"
        },
        {
            1,
            14,
            0,
            0,
            (char*) "ch048_kusa4.mdl"
        },
        {
            1,
            14,
            0,
            0,
            (char*) "ch049_kusa5.mdl"
        },
        {
            1,
            14,
            0,
            0,
            (char*) "ch050_murarei4.mdl"
        },
        {
            1,
            14,
            0,
            0,
            (char*) "ch051_murarei5.mdl"
        },
        {
            1,
            14,
            0,
            0,
            (char*) "ch052_murarei6.mdl"
        },
        {
            1,
            14,
            0,
            0,
            (char*) "ch053_imibito2.mdl"
        },
        {
            1,
            14,
            0,
            0,
            (char*) "ch054_makimura.mdl"
        },
        {
            1,
            14,
            0,
            0,
            (char*) "ch055_sudo.mdl"
        },
        {
            1,
            14,
            0,
            0,
            (char*) "ch056_waningyour.mdl"
        },
        {
            1,
            14,
            0,
            0,
            (char*) "ch057_waningyoul.mdl"
        },
        {
            1,
            14,
            0,
            0,
            (char*) "ch058_sae.mdl"
        },
        {
            1,
            14,
            0,
            0,
            (char*) "ch059_murarei7.mdl"
        },
        {
            1,
            14,
            0,
            0,
            (char*) "ch060_murarei8.mdl"
        },
        {
            1,
            14,
            0,
            0,
            (char*) "ch061_murarei9.mdl"
        },
        {
            1,
            14,
            0,
            0,
            (char*) "ch000_goth.mdl"
        },
        {
            1,
            14,
            0,
            0,
            (char*) "ch001_goth.mdl"
        },
        {
            1,
            14,
            0,
            0,
            (char*) "ch000_yukata_1.mdl"
        },
        {
            1,
            14,
            0,
            0,
            (char*) "ch001_yukata_1.mdl"
        },
        {
            1,
            14,
            0,
            0,
            (char*) "ch000_yukata_2.mdl"
        },
        {
            1,
            14,
            0,
            0,
            (char*) "ch001_yukata_2.mdl"
        },
        {
            1,
            14,
            0,
            0,
            (char*) "ch000_yukata_3.mdl"
        },
        {
            1,
            14,
            0,
            0,
            (char*) "ch001_yukata_3.mdl"
        },
        {
            1,
            14,
            0,
            0,
            (char*) "ch000_yae.mdl"
        },
        {
            1,
            14,
            0,
            0,
            (char*) "ch001_sae.mdl"
        },
        {
            1,
            14,
            0,
            0,
            (char*) "ch000_miku.mdl"
        },
        {
            1,
            14,
            0,
            0,
            (char*) "ch001_miku.mdl"
        },
        {
            1,
            14,
            0,
            0,
            (char*) "ch000_seihuku.mdl"
        },
        {
            1,
            14,
            0,
            0,
            (char*) "ch001_seihuku.mdl"
        },
        {
            1,
            14,
            0,
            0,
            (char*) "ch000_bontage.mdl"
        },
        {
            1,
            14,
            0,
            0,
            (char*) "ch001_bontage.mdl"
        },
        {
            1,
            14,
            0,
            0,
            (char*) "man_mdl_end"
        },
        {
            1,
            15,
            0,
            0,
            (char*) "ch000_mio.anm"
        },
        {
            1,
            15,
            0,
            0,
            (char*) "ch000_mio_l.anm"
        },
        {
            1,
            15,
            0,
            0,
            (char*) "ch000_mio_l_sp_01.anm"
        },
        {
            1,
            15,
            0,
            0,
            (char*) "ch000_mio_l_sp_02.anm"
        },
        {
            1,
            15,
            0,
            0,
            (char*) "ch001_may.anm"
        },
        {
            1,
            15,
            0,
            0,
            (char*) "ch001_may_sync.anm"
        },
        {
            1,
            15,
            0,
            0,
            (char*) "ch003_kusabi2a.anm"
        },
        {
            1,
            15,
            0,
            0,
            (char*) "ch004_dummy.anm"
        },
        {
            1,
            15,
            0,
            0,
            (char*) "ch005_tyou.anm"
        },
        {
            1,
            15,
            0,
            0,
            (char*) "ch007_dummy.anm"
        },
        {
            1,
            15,
            0,
            0,
            (char*) "ch008_dummy.anm"
        },
        {
            1,
            15,
            0,
            0,
            (char*) "ch009_kusabi2c.anm"
        },
        {
            1,
            15,
            0,
            0,
            (char*) "ch010_yami.anm"
        },
        {
            1,
            15,
            0,
            0,
            (char*) "ch011_yami2.anm"
        },
        {
            1,
            15,
            0,
            0,
            (char*) "ch012_kusanawa.anm"
        },
        {
            1,
            15,
            0,
            0,
            (char*) "ch013_saerei1.anm"
        },
        {
            1,
            15,
            0,
            0,
            (char*) "ch014_guujitama.anm"
        },
        {
            1,
            15,
            0,
            0,
            (char*) "ch015_maki.anm"
        },
        {
            1,
            15,
            0,
            0,
            (char*) "ch016_dummy.anm"
        },
        {
            1,
            15,
            0,
            0,
            (char*) "ch017_miya.anm"
        },
        {
            1,
            15,
            0,
            0,
            (char*) "ch018_kusabi.anm"
        },
        {
            1,
            15,
            0,
            0,
            (char*) "ch019_chitose.anm"
        },
        {
            1,
            15,
            0,
            0,
            (char*) "ch020_rakka.anm"
        },
        {
            1,
            15,
            0,
            0,
            (char*) "ch021_waninngyou.anm"
        },
        {
            1,
            15,
            0,
            0,
            (char*) "ch022_hutagorei.anm"
        },
        {
            1,
            15,
            0,
            0,
            (char*) "ch023_dummy.anm"
        },
        {
            1,
            15,
            0,
            0,
            (char*) "ch024_hako.anm"
        },
        {
            1,
            15,
            0,
            0,
            (char*) "ch025_kubiore.anm"
        },
        {
            1,
            15,
            0,
            0,
            (char*) "ch026_karakuri.anm"
        },
        {
            1,
            15,
            0,
            0,
            (char*) "ch027_onikodomo1.anm"
        },
        {
            1,
            15,
            0,
            0,
            (char*) "ch028_onikodomo2.anm"
        },
        {
            1,
            15,
            0,
            0,
            (char*) "ch029_onikodomo3.anm"
        },
        {
            1,
            15,
            0,
            0,
            (char*) "ch030_suisi.anm"
        },
        {
            1,
            15,
            0,
            0,
            (char*) "ch031_guuji.anm"
        },
        {
            1,
            15,
            0,
            0,
            (char*) "ch032_imibito.anm"
        },
        {
            1,
            15,
            0,
            0,
            (char*) "ch033_ningyou.anm"
        },
        {
            1,
            15,
            0,
            0,
            (char*) "ch034_dummy.anm"
        },
        {
            1,
            15,
            0,
            0,
            (char*) "ch035_muraA.anm"
        },
        {
            1,
            15,
            0,
            0,
            (char*) "ch036_muraB.anm"
        },
        {
            1,
            15,
            0,
            0,
            (char*) "ch037_muraC.anm"
        },
        {
            1,
            15,
            0,
            0,
            (char*) "ch038_kusa1.anm"
        },
        {
            1,
            15,
            0,
            0,
            (char*) "ch039_kusa2.anm"
        },
        {
            1,
            15,
            0,
            0,
            (char*) "ch040_dummy.anm"
        },
        {
            1,
            15,
            0,
            0,
            (char*) "ch041_kurorei.anm"
        },
        {
            1,
            15,
            0,
            0,
            (char*) "ch042_dummy.anm"
        },
        {
            1,
            15,
            0,
            0,
            (char*) "ch043_dummy.anm"
        },
        {
            1,
            15,
            0,
            0,
            (char*) "ch044_dummy.anm"
        },
        {
            1,
            15,
            0,
            0,
            (char*) "ch045_dummy.anm"
        },
        {
            1,
            15,
            0,
            0,
            (char*) "ch047_dummy.anm"
        },
        {
            1,
            15,
            0,
            0,
            (char*) "ch048_dummy.anm"
        },
        {
            1,
            15,
            0,
            0,
            (char*) "ch049_dummy.anm"
        },
        {
            1,
            15,
            0,
            0,
            (char*) "ch050_dummy.anm"
        },
        {
            1,
            15,
            0,
            0,
            (char*) "ch051_dummy.anm"
        },
        {
            1,
            15,
            0,
            0,
            (char*) "ch052_dummy.anm"
        },
        {
            1,
            15,
            0,
            0,
            (char*) "ch053_dummy.anm"
        },
        {
            1,
            15,
            0,
            0,
            (char*) "ch054_dummy.anm"
        },
        {
            1,
            15,
            0,
            0,
            (char*) "ch055_dummy.anm"
        },
        {
            1,
            15,
            0,
            0,
            (char*) "ch056_waningyour.anm"
        },
        {
            1,
            15,
            0,
            0,
            (char*) "ch057_waningyoul.anm"
        },
        {
            1,
            15,
            0,
            0,
            (char*) "ch058_dummy.anm"
        },
        {
            1,
            15,
            0,
            0,
            (char*) "ch059_dummy.anm"
        },
        {
            1,
            15,
            0,
            0,
            (char*) "ch060_dummy.anm"
        },
        {
            1,
            15,
            0,
            0,
            (char*) "ch061_dummy.anm"
        },
        {
            1,
            16,
            0,
            0,
            (char*) "ch017_a000_stand.anm"
        },
        {
            1,
            16,
            0,
            0,
            (char*) "ch046_a026_taore.anm"
        },
        {
            1,
            16,
            0,
            0,
            (char*) "ch999_dummy.anm"
        },
        {
            1,
            16,
            0,
            0,
            (char*) "ch002_a032_hands.anm"
        },
        {
            1,
            16,
            0,
            0,
            (char*) "ch017_a017_walk.anm"
        },
        {
            1,
            16,
            0,
            0,
            (char*) "ch017_a001_up.anm"
        },
        {
            1,
            16,
            0,
            0,
            (char*) "ch017_a024_walk.anm"
        },
        {
            1,
            16,
            0,
            0,
            (char*) "ch024_a003_boxout2.anm"
        },
        {
            1,
            16,
            0,
            0,
            (char*) "ch006_a027_stand.anm"
        },
        {
            1,
            16,
            0,
            0,
            (char*) "ch017_a028_noren.anm"
        },
        {
            1,
            16,
            0,
            0,
            (char*) "ch006_a031_stand.anm"
        },
        {
            1,
            16,
            0,
            0,
            (char*) "ch001_a035_run1.anm"
        },
        {
            1,
            16,
            0,
            0,
            (char*) "ch001_a036_run2.anm"
        },
        {
            1,
            16,
            0,
            0,
            (char*) "ch030_a037_suishi.anm"
        },
        {
            1,
            16,
            0,
            0,
            (char*) "ch035_a038_escape.anm"
        },
        {
            1,
            16,
            0,
            0,
            (char*) "ch036_a039_escape.anm"
        },
        {
            1,
            16,
            0,
            0,
            (char*) "ch037_a040_escape.anm"
        },
        {
            1,
            16,
            0,
            0,
            (char*) "ch001_a041_walk.anm"
        },
        {
            1,
            16,
            0,
            0,
            (char*) "ch004_a042_furimuki.anm"
        },
        {
            1,
            16,
            0,
            0,
            (char*) "ch018_a043_hikizuri.anm"
        },
        {
            1,
            16,
            0,
            0,
            (char*) "ch036_a044_hikizurare.anm"
        },
        {
            1,
            16,
            0,
            0,
            (char*) "ch018_a045_walk.anm"
        },
        {
            1,
            16,
            0,
            0,
            (char*) "ch024_a046_husi.anm"
        },
        {
            1,
            16,
            0,
            0,
            (char*) "ch024_a048_stand.anm"
        },
        {
            1,
            16,
            0,
            0,
            (char*) "ch043_a049_stand.anm"
        },
        {
            1,
            16,
            0,
            0,
            (char*) "ch038_a050_haiagari.anm"
        },
        {
            1,
            16,
            0,
            0,
            (char*) "ch029_a055_oudan.anm"
        },
        {
            1,
            16,
            0,
            0,
            (char*) "ch029_a056_nozoki.anm"
        },
        {
            1,
            16,
            0,
            0,
            (char*) "ch004_a057_stand.anm"
        },
        {
            1,
            16,
            0,
            0,
            (char*) "ch043_a058_keikoku.anm"
        },
        {
            1,
            16,
            0,
            0,
            (char*) "ch031_a059_stand.anm"
        },
        {
            1,
            16,
            0,
            0,
            (char*) "ch031_a060_furimuki.anm"
        },
        {
            1,
            16,
            0,
            0,
            (char*) "ch024_a061_hikikomi.anm"
        },
        {
            1,
            16,
            0,
            0,
            (char*) "ch017_a062_stand.anm"
        },
        {
            1,
            16,
            0,
            0,
            (char*) "ch004_a063_walk.anm"
        },
        {
            1,
            16,
            0,
            0,
            (char*) "ch023_a066_walk.anm"
        },
        {
            1,
            16,
            0,
            0,
            (char*) "ch038_a067_tati.anm"
        },
        {
            1,
            16,
            0,
            0,
            (char*) "ch045_a068_hand.anm"
        },
        {
            1,
            16,
            0,
            0,
            (char*) "ch039_a069_mado.anm"
        },
        {
            1,
            16,
            0,
            0,
            (char*) "ch038_a070_shagami.anm"
        },
        {
            1,
            16,
            0,
            0,
            (char*) "ch029_a076_nozoki.anm"
        },
        {
            1,
            16,
            0,
            0,
            (char*) "ch029_a077_hiraki.anm"
        },
        {
            1,
            16,
            0,
            0,
            (char*) "ch001_a087_crazy.anm"
        },
        {
            1,
            16,
            0,
            0,
            (char*) "ch025_a089_walk.anm"
        },
        {
            1,
            16,
            0,
            0,
            (char*) "ch004_a090_write.anm"
        },
        {
            1,
            16,
            0,
            0,
            (char*) "ch022_a091_run.anm"
        },
        {
            1,
            16,
            0,
            0,
            (char*) "ch022_a093_seiza.anm"
        },
        {
            1,
            16,
            0,
            0,
            (char*) "ch026_a095_karakurishi.anm"
        },
        {
            1,
            16,
            0,
            0,
            (char*) "ch001_a096_walk_slow.anm"
        },
        {
            1,
            16,
            0,
            0,
            (char*) "ch032_a098_stand.anm"
        },
        {
            1,
            16,
            0,
            0,
            (char*) "ch001_a099_cry.anm"
        },
        {
            1,
            16,
            0,
            0,
            (char*) "ch006_a100_neutral.anm"
        },
        {
            1,
            16,
            0,
            0,
            (char*) "ch059_a101_murawalk.anm"
        },
        {
            1,
            16,
            0,
            0,
            (char*) "ch060_a102_murawalk.anm"
        },
        {
            1,
            16,
            0,
            0,
            (char*) "ch061_a103_murawalk.anm"
        },
        {
            1,
            16,
            0,
            0,
            (char*) "ch031_a104_furimuki.anm"
        },
        {
            1,
            16,
            0,
            0,
            (char*) "ch031_a105_furimuki.anm"
        },
        {
            1,
            16,
            0,
            0,
            (char*) "ch013_a106_turn_R.anm"
        },
        {
            1,
            16,
            0,
            0,
            (char*) "ch022_a107_suwari_r.anm"
        },
        {
            1,
            16,
            0,
            0,
            (char*) "ch021_a108_suwari_l.anm"
        },
        {
            1,
            16,
            0,
            0,
            (char*) "ch018_a111_kusabi.anm"
        },
        {
            1,
            16,
            0,
            0,
            (char*) "ch054_a112_neutral.anm"
        },
        {
            1,
            16,
            0,
            0,
            (char*) "ch001_a113_down.anm"
        },
        {
            1,
            16,
            0,
            0,
            (char*) "ch054_a114_walk.anm"
        },
        {
            1,
            16,
            0,
            0,
            (char*) "ch013_a115_walk.anm"
        },
        {
            1,
            16,
            0,
            0,
            (char*) "ch013_a116_neutral.anm"
        },
        {
            1,
            16,
            0,
            0,
            (char*) "ch013_a117_cry.anm"
        },
        {
            1,
            16,
            0,
            0,
            (char*) "ch006_a119_walk.anm"
        },
        {
            1,
            16,
            0,
            0,
            (char*) "ch013_a120_turn_L.anm"
        },
        {
            1,
            16,
            0,
            0,
            (char*) "ch038_a121_stand.anm"
        },
        {
            1,
            16,
            0,
            0,
            (char*) "ch019_a122_escape.anm"
        },
        {
            1,
            16,
            0,
            0,
            (char*) "ch019_a123_run.anm"
        },
        {
            1,
            16,
            0,
            0,
            (char*) "ch013_a124_walk.anm"
        },
        {
            1,
            16,
            0,
            0,
            (char*) "ch027_a126_run.anm"
        },
        {
            1,
            16,
            0,
            0,
            (char*) "ch028_a127_run.anm"
        },
        {
            1,
            16,
            0,
            0,
            (char*) "ch029_a128_run.anm"
        },
        {
            1,
            16,
            0,
            0,
            (char*) "ch027_a129_look.anm"
        },
        {
            1,
            16,
            0,
            0,
            (char*) "ch031_a130_ojigi.anm"
        },
        {
            1,
            16,
            0,
            0,
            (char*) "ch004_a137_tatiagari.anm"
        },
        {
            1,
            16,
            0,
            0,
            (char*) "ch019_a138_sit.anm"
        },
        {
            1,
            16,
            0,
            0,
            (char*) "ch028_a140_look.anm"
        },
        {
            1,
            16,
            0,
            0,
            (char*) "ch029_a141_look.anm"
        },
        {
            1,
            16,
            0,
            0,
            (char*) "ch031_a142_stand.anm"
        },
        {
            1,
            16,
            0,
            0,
            (char*) "ch010_a143_stand.anm"
        },
        {
            1,
            16,
            0,
            0,
            (char*) "ch011_a144_neutral.anm"
        },
        {
            1,
            16,
            0,
            0,
            (char*) "ch040_a145_mikan.anm"
        },
        {
            1,
            16,
            0,
            0,
            (char*) "ch010_a146_yami_walk.anm"
        },
        {
            1,
            16,
            0,
            0,
            (char*) "ch019_a147_neutral.anm"
        },
        {
            1,
            16,
            0,
            0,
            (char*) "ch021_a148_neutral.anm"
        },
        {
            1,
            16,
            0,
            0,
            (char*) "ch025_a149_neutral.anm"
        },
        {
            1,
            16,
            0,
            0,
            (char*) "ch026_a150_stand.anm"
        },
        {
            1,
            16,
            0,
            0,
            (char*) "ch028_a151_walk.anm"
        },
        {
            1,
            16,
            0,
            0,
            (char*) "ch031_a152_walk.anm"
        },
        {
            1,
            16,
            0,
            0,
            (char*) "ch032_a153_walk.anm"
        },
        {
            1,
            16,
            0,
            0,
            (char*) "ch035_a154_neutral.anm"
        },
        {
            1,
            16,
            0,
            0,
            (char*) "ch032_a156_imibito_furikaeri.anm"
        },
        {
            1,
            16,
            0,
            0,
            (char*) "ch019_a157_kaoageru.anm"
        },
        {
            1,
            16,
            0,
            0,
            (char*) "ch015_a158_makirei_sisu.anm"
        },
        {
            1,
            16,
            0,
            0,
            (char*) "ch019_a165_haizuri.anm"
        },
        {
            1,
            16,
            0,
            0,
            (char*) "ch028_a166_jump.anm"
        },
        {
            1,
            16,
            0,
            0,
            (char*) "ch027_a171_stand.anm"
        },
        {
            1,
            16,
            0,
            0,
            (char*) "ch002_a173_hands.anm"
        },
        {
            1,
            16,
            0,
            0,
            (char*) "ch021_a178_neutral.anm"
        },
        {
            1,
            16,
            0,
            0,
            (char*) "ch001_a179_neutral.anm"
        },
        {
            1,
            16,
            0,
            0,
            (char*) "ch019_a191_standup.anm"
        },
        {
            1,
            16,
            0,
            0,
            (char*) "ch001_a195_sae_mayu.anm"
        },
        {
            1,
            16,
            0,
            0,
            (char*) "ch019_a202_chitose_sit.anm"
        },
        {
            1,
            16,
            0,
            0,
            (char*) "ch024_a204_boxout3.anm"
        },
        {
            0,
            15,
            0,
            0,
            (char*) "man_anm_end"
        },
        {
            0,
            11,
            0,
            0,
            (char*) "door_anim.mot"
        },
        {
            0,
            21,
            0,
            0,
            (char*) "room_start.dmy"
        },
        {
            1,
            6,
            0,
            0,
            (char*) "ry00.pk2"
        },
        {
            1,
            9,
            0,
            0,
            (char*) "ry00.zld"
        },
        {
            1,
            7,
            0,
            0,
            (char*) "ry00_pzb.pak"
        },
        {
            1,
            8,
            0,
            0,
            (char*) "ry00.mh"
        },
        {
            1,
            6,
            0,
            0,
            (char*) "ry00Mono.pk2"
        },
        {
            1,
            6,
            0,
            0,
            (char*) "ry01.pk2"
        },
        {
            1,
            9,
            0,
            0,
            (char*) "ry01.zld"
        },
        {
            1,
            7,
            0,
            0,
            (char*) "ry01_pzb.pak"
        },
        {
            1,
            8,
            0,
            0,
            (char*) "ry01.mh"
        },
        {
            1,
            6,
            0,
            0,
            (char*) "ry01Mono.pk2"
        },
        {
            1,
            6,
            0,
            0,
            (char*) "ry02.pk2"
        },
        {
            1,
            9,
            0,
            0,
            (char*) "ry02.zld"
        },
        {
            1,
            7,
            0,
            0,
            (char*) "ry02_pzb.pak"
        },
        {
            1,
            8,
            0,
            0,
            (char*) "ry02.mh"
        },
        {
            1,
            6,
            0,
            0,
            (char*) "ry02Mono.pk2"
        },
        {
            1,
            6,
            0,
            0,
            (char*) "ry03.pk2"
        },
        {
            1,
            9,
            0,
            0,
            (char*) "ry03.zld"
        },
        {
            1,
            7,
            0,
            0,
            (char*) "ry03_pzb.pak"
        },
        {
            1,
            8,
            0,
            0,
            (char*) "ry03.mh"
        },
        {
            1,
            6,
            0,
            0,
            (char*) "ry03Mono.pk2"
        },
        {
            1,
            6,
            0,
            0,
            (char*) "ry04.pk2"
        },
        {
            1,
            9,
            0,
            0,
            (char*) "ry04.zld"
        },
        {
            1,
            7,
            0,
            0,
            (char*) "ry04_pzb.pak"
        },
        {
            1,
            8,
            0,
            0,
            (char*) "ry04.mh"
        },
        {
            1,
            6,
            0,
            0,
            (char*) "ry04Mono.pk2"
        },
        {
            1,
            6,
            0,
            0,
            (char*) "ry05.pk2"
        },
        {
            1,
            9,
            0,
            0,
            (char*) "ry05.zld"
        },
        {
            1,
            7,
            0,
            0,
            (char*) "ry05_pzb.pak"
        },
        {
            1,
            8,
            0,
            0,
            (char*) "ry05.mh"
        },
        {
            1,
            6,
            0,
            0,
            (char*) "ry05Mono.pk2"
        },
        {
            1,
            6,
            0,
            0,
            (char*) "ry06.pk2"
        },
        {
            1,
            9,
            0,
            0,
            (char*) "ry06.zld"
        },
        {
            1,
            7,
            0,
            0,
            (char*) "ry06_pzb.pak"
        },
        {
            1,
            8,
            0,
            0,
            (char*) "ry06.mh"
        },
        {
            1,
            6,
            0,
            0,
            (char*) "ry06Mono.pk2"
        },
        {
            1,
            6,
            0,
            0,
            (char*) "ry07.pk2"
        },
        {
            1,
            9,
            0,
            0,
            (char*) "ry07.zld"
        },
        {
            1,
            7,
            0,
            0,
            (char*) "ry07_pzb.pak"
        },
        {
            1,
            8,
            0,
            0,
            (char*) "ry07.mh"
        },
        {
            1,
            6,
            0,
            0,
            (char*) "ry07Mono.pk2"
        },
        {
            1,
            6,
            0,
            0,
            (char*) "ry08.pk2"
        },
        {
            1,
            9,
            0,
            0,
            (char*) "ry08.zld"
        },
        {
            1,
            7,
            0,
            0,
            (char*) "ry08_pzb.pak"
        },
        {
            1,
            8,
            0,
            0,
            (char*) "ry08.mh"
        },
        {
            1,
            6,
            0,
            0,
            (char*) "ry08Mono.pk2"
        },
        {
            1,
            6,
            0,
            0,
            (char*) "ry09.pk2"
        },
        {
            1,
            9,
            0,
            0,
            (char*) "ry09.zld"
        },
        {
            1,
            7,
            0,
            0,
            (char*) "ry09_pzb.pak"
        },
        {
            1,
            8,
            0,
            0,
            (char*) "ry09.mh"
        },
        {
            1,
            6,
            0,
            0,
            (char*) "ry09Mono.pk2"
        },
        {
            1,
            6,
            0,
            0,
            (char*) "ry10.pk2"
        },
        {
            1,
            9,
            0,
            0,
            (char*) "ry10.zld"
        },
        {
            1,
            7,
            0,
            0,
            (char*) "ry10_pzb.pak"
        },
        {
            1,
            8,
            0,
            0,
            (char*) "ry10.mh"
        },
        {
            1,
            6,
            0,
            0,
            (char*) "ry10Mono.pk2"
        },
        {
            1,
            6,
            0,
            0,
            (char*) "ry11.pk2"
        },
        {
            1,
            9,
            0,
            0,
            (char*) "ry11.zld"
        },
        {
            1,
            7,
            0,
            0,
            (char*) "ry11_pzb.pak"
        },
        {
            1,
            8,
            0,
            0,
            (char*) "ry11.mh"
        },
        {
            1,
            6,
            0,
            0,
            (char*) "ry11Mono.pk2"
        },
        {
            1,
            6,
            0,
            0,
            (char*) "ry12.pk2"
        },
        {
            1,
            9,
            0,
            0,
            (char*) "ry12.zld"
        },
        {
            1,
            7,
            0,
            0,
            (char*) "ry12_pzb.pak"
        },
        {
            1,
            8,
            0,
            0,
            (char*) "ry12.mh"
        },
        {
            1,
            6,
            0,
            0,
            (char*) "ry12Mono.pk2"
        },
        {
            1,
            6,
            0,
            0,
            (char*) "ros00.pk2"
        },
        {
            1,
            9,
            0,
            0,
            (char*) "ros00.zld"
        },
        {
            1,
            7,
            0,
            0,
            (char*) "ros00_pzb.pak"
        },
        {
            1,
            8,
            0,
            0,
            (char*) "ros00.mh"
        },
        {
            1,
            6,
            0,
            0,
            (char*) "ros00Mono.pk2"
        },
        {
            1,
            6,
            0,
            0,
            (char*) "ros01.pk2"
        },
        {
            1,
            9,
            0,
            0,
            (char*) "ros01.zld"
        },
        {
            1,
            7,
            0,
            0,
            (char*) "ros01_pzb.pak"
        },
        {
            1,
            8,
            0,
            0,
            (char*) "ros01.mh"
        },
        {
            1,
            6,
            0,
            0,
            (char*) "ros01Mono.pk2"
        },
        {
            1,
            6,
            0,
            0,
            (char*) "ros02.pk2"
        },
        {
            1,
            9,
            0,
            0,
            (char*) "ros02.zld"
        },
        {
            1,
            7,
            0,
            0,
            (char*) "ros02_pzb.pak"
        },
        {
            1,
            8,
            0,
            0,
            (char*) "ros02.mh"
        },
        {
            1,
            6,
            0,
            0,
            (char*) "ros02Mono.pk2"
        },
        {
            1,
            6,
            0,
            0,
            (char*) "ros03.pk2"
        },
        {
            1,
            9,
            0,
            0,
            (char*) "ros03.zld"
        },
        {
            1,
            7,
            0,
            0,
            (char*) "ros03_pzb.pak"
        },
        {
            1,
            8,
            0,
            0,
            (char*) "ros03.mh"
        },
        {
            1,
            6,
            0,
            0,
            (char*) "ros03Mono.pk2"
        },
        {
            1,
            6,
            0,
            0,
            (char*) "ros04.pk2"
        },
        {
            1,
            9,
            0,
            0,
            (char*) "ros04.zld"
        },
        {
            1,
            7,
            0,
            0,
            (char*) "ros04_pzb.pak"
        },
        {
            1,
            8,
            0,
            0,
            (char*) "ros04.mh"
        },
        {
            1,
            6,
            0,
            0,
            (char*) "ros04Mono.pk2"
        },
        {
            1,
            6,
            0,
            0,
            (char*) "ros05.pk2"
        },
        {
            1,
            9,
            0,
            0,
            (char*) "ros05.zld"
        },
        {
            1,
            7,
            0,
            0,
            (char*) "ros05_pzb.pak"
        },
        {
            1,
            8,
            0,
            0,
            (char*) "ros05.mh"
        },
        {
            1,
            6,
            0,
            0,
            (char*) "ros05Mono.pk2"
        },
        {
            1,
            6,
            0,
            0,
            (char*) "rtb00.pk2"
        },
        {
            1,
            9,
            0,
            0,
            (char*) "rtb00.zld"
        },
        {
            1,
            7,
            0,
            0,
            (char*) "rtb00_pzb.pak"
        },
        {
            1,
            8,
            0,
            0,
            (char*) "rtb00.mh"
        },
        {
            1,
            6,
            0,
            0,
            (char*) "rtb00Mono.pk2"
        },
        {
            1,
            6,
            0,
            0,
            (char*) "rtb01.pk2"
        },
        {
            1,
            9,
            0,
            0,
            (char*) "rtb01.zld"
        },
        {
            1,
            7,
            0,
            0,
            (char*) "rtb01_pzb.pak"
        },
        {
            1,
            8,
            0,
            0,
            (char*) "rtb01.mh"
        },
        {
            1,
            6,
            0,
            0,
            (char*) "rtb01Mono.pk2"
        },
        {
            1,
            6,
            0,
            0,
            (char*) "rtb02.pk2"
        },
        {
            1,
            9,
            0,
            0,
            (char*) "rtb02.zld"
        },
        {
            1,
            7,
            0,
            0,
            (char*) "rtb02_pzb.pak"
        },
        {
            1,
            8,
            0,
            0,
            (char*) "rtb02.mh"
        },
        {
            1,
            6,
            0,
            0,
            (char*) "rtb02Mono.pk2"
        },
        {
            1,
            6,
            0,
            0,
            (char*) "rtb03.pk2"
        },
        {
            1,
            9,
            0,
            0,
            (char*) "rtb03.zld"
        },
        {
            1,
            7,
            0,
            0,
            (char*) "rtb03_pzb.pak"
        },
        {
            1,
            8,
            0,
            0,
            (char*) "rtb03.mh"
        },
        {
            1,
            6,
            0,
            0,
            (char*) "rtb03Mono.pk2"
        },
        {
            1,
            6,
            0,
            0,
            (char*) "rtb04.pk2"
        },
        {
            1,
            9,
            0,
            0,
            (char*) "rtb04.zld"
        },
        {
            1,
            7,
            0,
            0,
            (char*) "rtb04_pzb.pak"
        },
        {
            1,
            8,
            0,
            0,
            (char*) "rtb04.mh"
        },
        {
            1,
            6,
            0,
            0,
            (char*) "rtb04Mono.pk2"
        },
        {
            1,
            6,
            0,
            0,
            (char*) "rtb05.pk2"
        },
        {
            1,
            9,
            0,
            0,
            (char*) "rtb05.zld"
        },
        {
            1,
            7,
            0,
            0,
            (char*) "rtb05_pzb.pak"
        },
        {
            1,
            8,
            0,
            0,
            (char*) "rtb05.mh"
        },
        {
            1,
            6,
            0,
            0,
            (char*) "rtb05Mono.pk2"
        },
        {
            1,
            6,
            0,
            0,
            (char*) "rtb06.pk2"
        },
        {
            1,
            9,
            0,
            0,
            (char*) "rtb06.zld"
        },
        {
            1,
            7,
            0,
            0,
            (char*) "rtb06_pzb.pak"
        },
        {
            1,
            8,
            0,
            0,
            (char*) "rtb06.mh"
        },
        {
            1,
            6,
            0,
            0,
            (char*) "rtb06Mono.pk2"
        },
        {
            1,
            6,
            0,
            0,
            (char*) "rtb07.pk2"
        },
        {
            1,
            9,
            0,
            0,
            (char*) "rtb07.zld"
        },
        {
            1,
            7,
            0,
            0,
            (char*) "rtb07_pzb.pak"
        },
        {
            1,
            8,
            0,
            0,
            (char*) "rtb07.mh"
        },
        {
            1,
            6,
            0,
            0,
            (char*) "rtb07Mono.pk2"
        },
        {
            1,
            6,
            0,
            0,
            (char*) "rtb08.pk2"
        },
        {
            1,
            9,
            0,
            0,
            (char*) "rtb08.zld"
        },
        {
            1,
            7,
            0,
            0,
            (char*) "rtb08_pzb.pak"
        },
        {
            1,
            8,
            0,
            0,
            (char*) "rtb08.mh"
        },
        {
            1,
            6,
            0,
            0,
            (char*) "rtb08Mono.pk2"
        },
        {
            1,
            6,
            0,
            0,
            (char*) "rtb09.pk2"
        },
        {
            1,
            9,
            0,
            0,
            (char*) "rtb09.zld"
        },
        {
            1,
            7,
            0,
            0,
            (char*) "rtb09_pzb.pak"
        },
        {
            1,
            8,
            0,
            0,
            (char*) "rtb09.mh"
        },
        {
            1,
            6,
            0,
            0,
            (char*) "rtb09Mono.pk2"
        },
        {
            1,
            6,
            0,
            0,
            (char*) "rtb10.pk2"
        },
        {
            1,
            9,
            0,
            0,
            (char*) "rtb10.zld"
        },
        {
            1,
            7,
            0,
            0,
            (char*) "rtb10_pzb.pak"
        },
        {
            1,
            8,
            0,
            0,
            (char*) "rtb10.mh"
        },
        {
            1,
            6,
            0,
            0,
            (char*) "rtb10Mono.pk2"
        },
        {
            1,
            6,
            0,
            0,
            (char*) "rry00.pk2"
        },
        {
            1,
            9,
            0,
            0,
            (char*) "rry00.zld"
        },
        {
            1,
            7,
            0,
            0,
            (char*) "rry00_pzb.pak"
        },
        {
            1,
            8,
            0,
            0,
            (char*) "rry00.mh"
        },
        {
            1,
            6,
            0,
            0,
            (char*) "rry00Mono.pk2"
        },
        {
            1,
            6,
            0,
            0,
            (char*) "rry01.pk2"
        },
        {
            1,
            9,
            0,
            0,
            (char*) "rry01.zld"
        },
        {
            1,
            7,
            0,
            0,
            (char*) "rry01_pzb.pak"
        },
        {
            1,
            8,
            0,
            0,
            (char*) "rry01.mh"
        },
        {
            1,
            6,
            0,
            0,
            (char*) "rry01Mono.pk2"
        },
        {
            1,
            6,
            0,
            0,
            (char*) "rry02.pk2"
        },
        {
            1,
            9,
            0,
            0,
            (char*) "rry02.zld"
        },
        {
            1,
            7,
            0,
            0,
            (char*) "rry02_pzb.pak"
        },
        {
            1,
            8,
            0,
            0,
            (char*) "rry02.mh"
        },
        {
            1,
            6,
            0,
            0,
            (char*) "rry02Mono.pk2"
        },
        {
            1,
            6,
            0,
            0,
            (char*) "rry03.pk2"
        },
        {
            1,
            9,
            0,
            0,
            (char*) "rry03.zld"
        },
        {
            1,
            7,
            0,
            0,
            (char*) "rry03_pzb.pak"
        },
        {
            1,
            8,
            0,
            0,
            (char*) "rry03.mh"
        },
        {
            1,
            6,
            0,
            0,
            (char*) "rry03Mono.pk2"
        },
        {
            1,
            6,
            0,
            0,
            (char*) "rry04.pk2"
        },
        {
            1,
            9,
            0,
            0,
            (char*) "rry04.zld"
        },
        {
            1,
            7,
            0,
            0,
            (char*) "rry04_pzb.pak"
        },
        {
            1,
            8,
            0,
            0,
            (char*) "rry04.mh"
        },
        {
            1,
            6,
            0,
            0,
            (char*) "rry04Mono.pk2"
        },
        {
            1,
            6,
            0,
            0,
            (char*) "rry05.pk2"
        },
        {
            1,
            9,
            0,
            0,
            (char*) "rry05.zld"
        },
        {
            1,
            7,
            0,
            0,
            (char*) "rry05_pzb.pak"
        },
        {
            1,
            8,
            0,
            0,
            (char*) "rry05.mh"
        },
        {
            1,
            6,
            0,
            0,
            (char*) "rry05Mono.pk2"
        },
        {
            1,
            6,
            0,
            0,
            (char*) "rry06.pk2"
        },
        {
            1,
            9,
            0,
            0,
            (char*) "rry06.zld"
        },
        {
            1,
            7,
            0,
            0,
            (char*) "rry06_pzb.pak"
        },
        {
            1,
            8,
            0,
            0,
            (char*) "rry06.mh"
        },
        {
            1,
            6,
            0,
            0,
            (char*) "rry06Mono.pk2"
        },
        {
            1,
            6,
            0,
            0,
            (char*) "rry07.pk2"
        },
        {
            1,
            9,
            0,
            0,
            (char*) "rry07.zld"
        },
        {
            1,
            7,
            0,
            0,
            (char*) "rry07_pzb.pak"
        },
        {
            1,
            8,
            0,
            0,
            (char*) "rry07.mh"
        },
        {
            1,
            6,
            0,
            0,
            (char*) "rry07Mono.pk2"
        },
        {
            1,
            6,
            0,
            0,
            (char*) "rry08.pk2"
        },
        {
            1,
            9,
            0,
            0,
            (char*) "rry08.zld"
        },
        {
            1,
            7,
            0,
            0,
            (char*) "rry08_pzb.pak"
        },
        {
            1,
            8,
            0,
            0,
            (char*) "rry08.mh"
        },
        {
            1,
            6,
            0,
            0,
            (char*) "rry08Mono.pk2"
        },
        {
            1,
            6,
            0,
            0,
            (char*) "rry09.pk2"
        },
        {
            1,
            9,
            0,
            0,
            (char*) "rry09.zld"
        },
        {
            1,
            7,
            0,
            0,
            (char*) "rry09_pzb.pak"
        },
        {
            1,
            8,
            0,
            0,
            (char*) "rry09.mh"
        },
        {
            1,
            6,
            0,
            0,
            (char*) "rry09Mono.pk2"
        },
        {
            1,
            6,
            0,
            0,
            (char*) "rks00.pk2"
        },
        {
            1,
            9,
            0,
            0,
            (char*) "rks00.zld"
        },
        {
            1,
            7,
            0,
            0,
            (char*) "rks00_pzb.pak"
        },
        {
            1,
            8,
            0,
            0,
            (char*) "rks00.mh"
        },
        {
            1,
            6,
            0,
            0,
            (char*) "rks00Mono.pk2"
        },
        {
            1,
            6,
            0,
            0,
            (char*) "rks01.pk2"
        },
        {
            1,
            9,
            0,
            0,
            (char*) "rks01.zld"
        },
        {
            1,
            7,
            0,
            0,
            (char*) "rks01_pzb.pak"
        },
        {
            1,
            8,
            0,
            0,
            (char*) "rks01.mh"
        },
        {
            1,
            6,
            0,
            0,
            (char*) "rks01Mono.pk2"
        },
        {
            1,
            6,
            0,
            0,
            (char*) "rks02.pk2"
        },
        {
            1,
            9,
            0,
            0,
            (char*) "rks02.zld"
        },
        {
            1,
            7,
            0,
            0,
            (char*) "rks02_pzb.pak"
        },
        {
            1,
            8,
            0,
            0,
            (char*) "rks02.mh"
        },
        {
            1,
            6,
            0,
            0,
            (char*) "rks02Mono.pk2"
        },
        {
            1,
            6,
            0,
            0,
            (char*) "rks03.pk2"
        },
        {
            1,
            9,
            0,
            0,
            (char*) "rks03.zld"
        },
        {
            1,
            7,
            0,
            0,
            (char*) "rks03_pzb.pak"
        },
        {
            1,
            8,
            0,
            0,
            (char*) "rks03.mh"
        },
        {
            1,
            6,
            0,
            0,
            (char*) "rks03Mono.pk2"
        },
        {
            1,
            6,
            0,
            0,
            (char*) "rks04.pk2"
        },
        {
            1,
            9,
            0,
            0,
            (char*) "rks04.zld"
        },
        {
            1,
            7,
            0,
            0,
            (char*) "rks04_pzb.pak"
        },
        {
            1,
            8,
            0,
            0,
            (char*) "rks04.mh"
        },
        {
            1,
            6,
            0,
            0,
            (char*) "rks04Mono.pk2"
        },
        {
            1,
            6,
            0,
            0,
            (char*) "rks05.pk2"
        },
        {
            1,
            9,
            0,
            0,
            (char*) "rks05.zld"
        },
        {
            1,
            7,
            0,
            0,
            (char*) "rks05_pzb.pak"
        },
        {
            1,
            8,
            0,
            0,
            (char*) "rks05.mh"
        },
        {
            1,
            6,
            0,
            0,
            (char*) "rks05Mono.pk2"
        },
        {
            1,
            6,
            0,
            0,
            (char*) "rks06.pk2"
        },
        {
            1,
            9,
            0,
            0,
            (char*) "rks06.zld"
        },
        {
            1,
            7,
            0,
            0,
            (char*) "rks06_pzb.pak"
        },
        {
            1,
            8,
            0,
            0,
            (char*) "rks06.mh"
        },
        {
            1,
            6,
            0,
            0,
            (char*) "rks06Mono.pk2"
        },
        {
            1,
            6,
            0,
            0,
            (char*) "rks07.pk2"
        },
        {
            1,
            9,
            0,
            0,
            (char*) "rks07.zld"
        },
        {
            1,
            7,
            0,
            0,
            (char*) "rks07_pzb.pak"
        },
        {
            1,
            8,
            0,
            0,
            (char*) "rks07.mh"
        },
        {
            1,
            6,
            0,
            0,
            (char*) "rks07Mono.pk2"
        },
        {
            1,
            6,
            0,
            0,
            (char*) "rks08.pk2"
        },
        {
            1,
            9,
            0,
            0,
            (char*) "rks08.zld"
        },
        {
            1,
            7,
            0,
            0,
            (char*) "rks08_pzb.pak"
        },
        {
            1,
            8,
            0,
            0,
            (char*) "rks08.mh"
        },
        {
            1,
            6,
            0,
            0,
            (char*) "rks08Mono.pk2"
        },
        {
            1,
            6,
            0,
            0,
            (char*) "rks09.pk2"
        },
        {
            1,
            9,
            0,
            0,
            (char*) "rks09.zld"
        },
        {
            1,
            7,
            0,
            0,
            (char*) "rks09_pzb.pak"
        },
        {
            1,
            8,
            0,
            0,
            (char*) "rks09.mh"
        },
        {
            1,
            6,
            0,
            0,
            (char*) "rks09Mono.pk2"
        },
        {
            1,
            6,
            0,
            0,
            (char*) "rks10.pk2"
        },
        {
            1,
            9,
            0,
            0,
            (char*) "rks10.zld"
        },
        {
            1,
            7,
            0,
            0,
            (char*) "rks10_pzb.pak"
        },
        {
            1,
            8,
            0,
            0,
            (char*) "rks10.mh"
        },
        {
            1,
            6,
            0,
            0,
            (char*) "rks10Mono.pk2"
        },
        {
            1,
            6,
            0,
            0,
            (char*) "rks11.pk2"
        },
        {
            1,
            9,
            0,
            0,
            (char*) "rks11.zld"
        },
        {
            1,
            7,
            0,
            0,
            (char*) "rks11_pzb.pak"
        },
        {
            1,
            8,
            0,
            0,
            (char*) "rks11.mh"
        },
        {
            1,
            6,
            0,
            0,
            (char*) "rks11Mono.pk2"
        },
        {
            1,
            6,
            0,
            0,
            (char*) "rks12.pk2"
        },
        {
            1,
            9,
            0,
            0,
            (char*) "rks12.zld"
        },
        {
            1,
            7,
            0,
            0,
            (char*) "rks12_pzb.pak"
        },
        {
            1,
            8,
            0,
            0,
            (char*) "rks12.mh"
        },
        {
            1,
            6,
            0,
            0,
            (char*) "rks12Mono.pk2"
        },
        {
            1,
            6,
            0,
            0,
            (char*) "rks13.pk2"
        },
        {
            1,
            9,
            0,
            0,
            (char*) "rks13.zld"
        },
        {
            1,
            7,
            0,
            0,
            (char*) "rks13_pzb.pak"
        },
        {
            1,
            8,
            0,
            0,
            (char*) "rks13.mh"
        },
        {
            1,
            6,
            0,
            0,
            (char*) "rks13Mono.pk2"
        },
        {
            1,
            6,
            0,
            0,
            (char*) "rks14.pk2"
        },
        {
            1,
            9,
            0,
            0,
            (char*) "rks14.zld"
        },
        {
            1,
            7,
            0,
            0,
            (char*) "rks14_pzb.pak"
        },
        {
            1,
            8,
            0,
            0,
            (char*) "rks14.mh"
        },
        {
            1,
            6,
            0,
            0,
            (char*) "rks14Mono.pk2"
        },
        {
            1,
            6,
            0,
            0,
            (char*) "rkh00.pk2"
        },
        {
            1,
            9,
            0,
            0,
            (char*) "rkh00.zld"
        },
        {
            1,
            7,
            0,
            0,
            (char*) "rkh00_pzb.pak"
        },
        {
            1,
            8,
            0,
            0,
            (char*) "rkh00.mh"
        },
        {
            1,
            6,
            0,
            0,
            (char*) "rkh00Mono.pk2"
        },
        {
            1,
            6,
            0,
            0,
            (char*) "rkc00.pk2"
        },
        {
            1,
            9,
            0,
            0,
            (char*) "rkc00.zld"
        },
        {
            1,
            7,
            0,
            0,
            (char*) "rkc00_pzb.pak"
        },
        {
            1,
            8,
            0,
            0,
            (char*) "rkc00.mh"
        },
        {
            1,
            6,
            0,
            0,
            (char*) "rkc00Mono.pk2"
        },
        {
            1,
            6,
            0,
            0,
            (char*) "rkr00.pk2"
        },
        {
            1,
            9,
            0,
            0,
            (char*) "rkr00.zld"
        },
        {
            1,
            7,
            0,
            0,
            (char*) "rkr00_pzb.pak"
        },
        {
            1,
            8,
            0,
            0,
            (char*) "rkr00.mh"
        },
        {
            1,
            6,
            0,
            0,
            (char*) "rkr00Mono.pk2"
        },
        {
            1,
            6,
            0,
            0,
            (char*) "rch00.pk2"
        },
        {
            1,
            9,
            0,
            0,
            (char*) "rch00.zld"
        },
        {
            1,
            7,
            0,
            0,
            (char*) "rch00_pzb.pak"
        },
        {
            1,
            8,
            0,
            0,
            (char*) "rch00.mh"
        },
        {
            1,
            6,
            0,
            0,
            (char*) "rch00Mono.pk2"
        },
        {
            1,
            6,
            0,
            0,
            (char*) "rch01.pk2"
        },
        {
            1,
            9,
            0,
            0,
            (char*) "rch01.zld"
        },
        {
            1,
            7,
            0,
            0,
            (char*) "rch01_pzb.pak"
        },
        {
            1,
            8,
            0,
            0,
            (char*) "rch01.mh"
        },
        {
            1,
            6,
            0,
            0,
            (char*) "rch01Mono.pk2"
        },
        {
            1,
            6,
            0,
            0,
            (char*) "rch02.pk2"
        },
        {
            1,
            9,
            0,
            0,
            (char*) "rch02.zld"
        },
        {
            1,
            7,
            0,
            0,
            (char*) "rch02_pzb.pak"
        },
        {
            1,
            8,
            0,
            0,
            (char*) "rch02.mh"
        },
        {
            1,
            6,
            0,
            0,
            (char*) "rch02Mono.pk2"
        },
        {
            1,
            6,
            0,
            0,
            (char*) "rch03.pk2"
        },
        {
            1,
            9,
            0,
            0,
            (char*) "rch03.zld"
        },
        {
            1,
            7,
            0,
            0,
            (char*) "rch03_pzb.pak"
        },
        {
            1,
            8,
            0,
            0,
            (char*) "rch03.mh"
        },
        {
            1,
            6,
            0,
            0,
            (char*) "rch03Mono.pk2"
        },
        {
            1,
            6,
            0,
            0,
            (char*) "rch04.pk2"
        },
        {
            1,
            9,
            0,
            0,
            (char*) "rch04.zld"
        },
        {
            1,
            7,
            0,
            0,
            (char*) "rch04_pzb.pak"
        },
        {
            1,
            8,
            0,
            0,
            (char*) "rch04.mh"
        },
        {
            1,
            6,
            0,
            0,
            (char*) "rch04Mono.pk2"
        },
        {
            1,
            6,
            0,
            0,
            (char*) "rch05.pk2"
        },
        {
            1,
            9,
            0,
            0,
            (char*) "rch05.zld"
        },
        {
            1,
            7,
            0,
            0,
            (char*) "rch05_pzb.pak"
        },
        {
            1,
            8,
            0,
            0,
            (char*) "rch05.mh"
        },
        {
            1,
            6,
            0,
            0,
            (char*) "rch05Mono.pk2"
        },
        {
            1,
            6,
            0,
            0,
            (char*) "rch06.pk2"
        },
        {
            1,
            9,
            0,
            0,
            (char*) "rch06.zld"
        },
        {
            1,
            7,
            0,
            0,
            (char*) "rch06_pzb.pak"
        },
        {
            1,
            8,
            0,
            0,
            (char*) "rch06.mh"
        },
        {
            1,
            6,
            0,
            0,
            (char*) "rch06Mono.pk2"
        },
        {
            1,
            6,
            0,
            0,
            (char*) "ry13.pk2"
        },
        {
            1,
            9,
            0,
            0,
            (char*) "ry13.zld"
        },
        {
            1,
            7,
            0,
            0,
            (char*) "ry13_pzb.pak"
        },
        {
            1,
            8,
            0,
            0,
            (char*) "ry13.mh"
        },
        {
            1,
            6,
            0,
            0,
            (char*) "ry13Mono.pk2"
        },
        {
            1,
            21,
            0,
            0,
            (char*) "room_end.dmy"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f000.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f001.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f002.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f003.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f004.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f005.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f006.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f007.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f008.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f009.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f010.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f011.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f012.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f013.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f014.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f015.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f016.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f017.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f018.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f019.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f020.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f021.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f022.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f023.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f024.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f025.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f026.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f027.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f028.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f029.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f030.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f031.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f032.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f033.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f034.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f035.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f036.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f037.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f038.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f039.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f040.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f041.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f042.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f043.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f044.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f045.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f046.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f047.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f048.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f049.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f050.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f051.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f052.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f053.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f054.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f055.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f056.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f057.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f058.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f059.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f060.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f061.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f062.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f063.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f064.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f065.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f066.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f067.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f068.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f069.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f070.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f071.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f072.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f073.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f074.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f075.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f076.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f077.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f078.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f079.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f080.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f081.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f082.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f083.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f084.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f085.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f086.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f087.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f088.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f089.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f090.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f091.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f092.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f093.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f094.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f095.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f096.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f097.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f098.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f099.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f100.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f101.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f102.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f103.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f104.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f105.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f106.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f107.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f108.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f109.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f110.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f111.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f112.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f113.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f114.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f115.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f116.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f117.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f118.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f119.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f120.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f121.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f122.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f123.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f124.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f125.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f126.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f127.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f128.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f129.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f130.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f131.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f132.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f133.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f134.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f135.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f136.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f137.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f138.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f139.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f140.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f141.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f142.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f143.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f144.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f145.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f146.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f147.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f148.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f149.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f150.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f151.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f152.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f153.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f154.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f155.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f156.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f157.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f158.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f159.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f160.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f161.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f162.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f163.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f164.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f165.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f166.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f167.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f168.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f169.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f170.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f171.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f172.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f173.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f174.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f175.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f176.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f177.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f178.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f179.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f180.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f181.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f182.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f183.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f184.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f185.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f186.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f187.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f188.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f189.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f190.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f191.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f192.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f193.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f194.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f195.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f196.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f197.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f198.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f199.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f200.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f201.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f202.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f203.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f204.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f205.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f206.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f207.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f208.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f209.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f210.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f211.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f212.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f213.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f214.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f215.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f216.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f217.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f218.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f219.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f220.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f221.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f222.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f223.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f224.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f225.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f226.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f227.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f228.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f229.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f230.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f231.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f232.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f233.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f234.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f235.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f236.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f237.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f238.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f239.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f240.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f241.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f242.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f243.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f244.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f245.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f246.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f247.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f248.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f249.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f250.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f251.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f252.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f253.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f254.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f255.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f256.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f257.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f258.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f259.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f260.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f261.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f262.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f263.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f264.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f265.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f266.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f267.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f268.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f269.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f270.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f271.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f272.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f273.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f274.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f275.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f276.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f277.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f278.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f279.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f280.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f281.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f282.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f283.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f284.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f285.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f286.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f287.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f288.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f289.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f290.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f291.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f292.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f293.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f294.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f295.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f296.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f297.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f298.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f299.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f300.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f301.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f302.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f303.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f304.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f305.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f306.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f307.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f308.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f309.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f310.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f311.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f312.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f313.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f314.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f315.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f316.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f317.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f318.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f319.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f320.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f321.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f322.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f323.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f324.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f325.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f326.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f327.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f328.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f329.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f330.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f331.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f332.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f333.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f334.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f335.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f336.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f337.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f338.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f339.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f340.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f341.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f342.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f343.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f344.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f345.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f346.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f347.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f348.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f349.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f350.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f351.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f352.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f353.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f354.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f355.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f356.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f357.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f358.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f359.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f360.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f361.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f362.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f363.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f364.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f365.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f366.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f367.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f368.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f369.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f370.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f371.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f372.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f373.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f374.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f375.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f376.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f377.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f378.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f379.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f380.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f381.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f382.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f383.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f384.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f385.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f386.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f387.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f388.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f389.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f390.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f391.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f392.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f393.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f394.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f395.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f396.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f397.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f398.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f399.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f400.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f401.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f402.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f403.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f404.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f405.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f406.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f407.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f408.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f409.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f410.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f411.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f412.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f413.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f414.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f415.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f416.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f417.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f418.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f419.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f420.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f421.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f422.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f423.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f424.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f425.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f426.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f427.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f428.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f429.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f430.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f431.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f432.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f433.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f434.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f435.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f436.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f437.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f438.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f439.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f440.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f441.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f442.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f443.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f444.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f445.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f446.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f447.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f448.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f449.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f450.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f451.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f452.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f453.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f454.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f455.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f456.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f457.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f458.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f459.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f460.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f461.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f462.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f463.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f464.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f465.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f466.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f467.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f468.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f469.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f470.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f471.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f472.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f473.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f474.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f475.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f476.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f477.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f478.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f479.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f480.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f481.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f482.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f483.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f484.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f485.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f486.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f487.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f488.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f489.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f490.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f491.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f492.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f493.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f494.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f495.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f496.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f497.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f498.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f499.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f500.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f501.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f502.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f503.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f504.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f505.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f506.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f507.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f508.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f509.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f510.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f511.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f512.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f513.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f514.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f515.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f516.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f517.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f518.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f519.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f520.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f521.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f522.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f523.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f524.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f525.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f526.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f527.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f528.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f529.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f530.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f531.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f532.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f533.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f534.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f535.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f536.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f537.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f538.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f539.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f540.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f541.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f542.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f543.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f544.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f545.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f546.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f547.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f548.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f549.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f550.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f551.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f552.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f553.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f554.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f555.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f556.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f557.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f558.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f559.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f560.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f561.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f562.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f563.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f564.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f565.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f566.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f567.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f568.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f569.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f570.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f571.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f572.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f573.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f574.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f575.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f576.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f577.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f578.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f579.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f580.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f581.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f582.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f583.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f584.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f585.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f586.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f587.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f588.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f589.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f590.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f591.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f592.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f593.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f594.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f595.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f596.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f597.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f598.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f599.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f600.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f601.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f602.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f603.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f604.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f605.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f606.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f607.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f608.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f609.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f610.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f611.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f612.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f613.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f614.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f615.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f616.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f617.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f618.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f619.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f620.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f621.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f622.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f623.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f624.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f625.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f626.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f627.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f628.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f629.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f630.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f631.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f632.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f633.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f634.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f635.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f636.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f637.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f638.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f639.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f640.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f641.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f642.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f643.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f644.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f645.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f646.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f647.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f648.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f649.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f650.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f651.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f652.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f653.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f654.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f655.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f656.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f657.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f658.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f659.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f660.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f661.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f662.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f663.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f664.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f665.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f666.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f667.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f668.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f669.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f670.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f671.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f672.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f673.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f674.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f675.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f676.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f677.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f678.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f679.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f680.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f681.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f682.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f683.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f684.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f685.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f686.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f687.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f688.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f689.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f690.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f691.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f692.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f693.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f694.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f695.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f696.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f697.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f698.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f699.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f700.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f701.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f702.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f703.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f704.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f705.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f706.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f707.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f708.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f709.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f710.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f711.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f712.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f713.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f714.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f715.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f716.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f717.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f718.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f719.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f720.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f721.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f722.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f723.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f724.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f725.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f726.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f727.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f728.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f729.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f730.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f731.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f732.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f733.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f734.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f735.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f736.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f737.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f738.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f739.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f740.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f741.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f742.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f743.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f744.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f745.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f746.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f747.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f748.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f749.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f750.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f751.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f752.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f753.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f754.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f755.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f756.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f757.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f758.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f759.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f760.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f761.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f762.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f763.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f764.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f765.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f766.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f767.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f768.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f769.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f770.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f771.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f772.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f773.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f774.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f775.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f776.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f777.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f778.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f779.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f780.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f781.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f782.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f783.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f784.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f785.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f786.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f787.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f788.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f789.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f790.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f791.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f792.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f793.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f794.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f795.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f796.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f797.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f798.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f799.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f800.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f801.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f802.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f803.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f804.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f805.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f806.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f807.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f808.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f809.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f810.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f811.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f812.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f813.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f814.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f815.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f816.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f817.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f818.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f819.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f820.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f821.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f822.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f823.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f824.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f825.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f826.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f827.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f828.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f829.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f830.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f831.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f832.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f833.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f834.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f835.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f836.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f837.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f838.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f839.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f840.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f841.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f842.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f843.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f844.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f845.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f846.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f847.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f848.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f849.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f850.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f851.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f852.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f853.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f854.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f855.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f856.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f857.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f858.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f859.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f860.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f861.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f862.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f863.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f864.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f865.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f866.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f867.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f868.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f869.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f870.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f871.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f872.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f873.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f874.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f875.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f876.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f877.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f878.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f879.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f880.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f881.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f882.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f883.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f884.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f885.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f886.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f887.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f888.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f889.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f890.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f891.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f892.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f893.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f894.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f895.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f896.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f897.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f898.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f899.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f900.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f901.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f902.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f903.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f904.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f905.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f906.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f907.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f908.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f909.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f910.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f911.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f912.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f913.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f914.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f915.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f916.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f917.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f918.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f919.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f920.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f921.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f922.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f923.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f924.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f925.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f926.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f927.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f928.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f929.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f930.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f931.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f932.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f933.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f934.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f935.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f936.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f937.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f938.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f939.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f940.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f941.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f942.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f943.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f944.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f945.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f946.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f947.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f948.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f949.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f950.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f951.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f952.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f953.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f954.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f955.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f956.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f957.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f958.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f959.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f960.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f961.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f962.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f963.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f964.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f965.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f966.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f967.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f968.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f969.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f970.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f971.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f972.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f973.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f974.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f975.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f976.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f977.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f978.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f979.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f980.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f981.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f982.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f983.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f984.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f985.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f986.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f987.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f988.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f989.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f990.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f991.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f992.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f993.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f994.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f995.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f996.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f997.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f998.pk2"
        },
        {
            1,
            10,
            0,
            0,
            (char*) "f999.pk2"
        },
        {
            1,
            11,
            0,
            0,
            (char*) "d000.pk2"
        },
        {
            1,
            11,
            0,
            0,
            (char*) "d001.pk2"
        },
        {
            1,
            11,
            0,
            0,
            (char*) "d002.pk2"
        },
        {
            1,
            11,
            0,
            0,
            (char*) "d003.pk2"
        },
        {
            1,
            11,
            0,
            0,
            (char*) "d004.pk2"
        },
        {
            1,
            11,
            0,
            0,
            (char*) "d005.pk2"
        },
        {
            1,
            11,
            0,
            0,
            (char*) "d006.pk2"
        },
        {
            1,
            11,
            0,
            0,
            (char*) "d007.pk2"
        },
        {
            1,
            11,
            0,
            0,
            (char*) "d008.pk2"
        },
        {
            1,
            11,
            0,
            0,
            (char*) "d009.pk2"
        },
        {
            1,
            11,
            0,
            0,
            (char*) "d010.pk2"
        },
        {
            1,
            11,
            0,
            0,
            (char*) "d100.pk2"
        },
        {
            1,
            11,
            0,
            0,
            (char*) "d101.pk2"
        },
        {
            1,
            11,
            0,
            0,
            (char*) "d102.pk2"
        },
        {
            1,
            11,
            0,
            0,
            (char*) "d103.pk2"
        },
        {
            1,
            11,
            0,
            0,
            (char*) "d104.pk2"
        },
        {
            1,
            11,
            0,
            0,
            (char*) "d105.pk2"
        },
        {
            1,
            11,
            0,
            0,
            (char*) "d106.pk2"
        },
        {
            1,
            11,
            0,
            0,
            (char*) "d107.pk2"
        },
        {
            1,
            11,
            0,
            0,
            (char*) "d108.pk2"
        },
        {
            1,
            11,
            0,
            0,
            (char*) "d109.pk2"
        },
        {
            1,
            11,
            0,
            0,
            (char*) "d110.pk2"
        },
        {
            1,
            11,
            0,
            0,
            (char*) "d111.pk2"
        },
        {
            1,
            11,
            0,
            0,
            (char*) "d112.pk2"
        },
        {
            1,
            11,
            0,
            0,
            (char*) "d113.pk2"
        },
        {
            1,
            11,
            0,
            0,
            (char*) "d114.pk2"
        },
        {
            1,
            11,
            0,
            0,
            (char*) "d115.pk2"
        },
        {
            1,
            11,
            0,
            0,
            (char*) "d116.pk2"
        },
        {
            1,
            11,
            0,
            0,
            (char*) "d117.pk2"
        },
        {
            1,
            11,
            0,
            0,
            (char*) "d118.pk2"
        },
        {
            1,
            11,
            0,
            0,
            (char*) "d119.pk2"
        },
        {
            1,
            11,
            0,
            0,
            (char*) "d120.pk2"
        },
        {
            1,
            11,
            0,
            0,
            (char*) "d121.pk2"
        },
        {
            1,
            11,
            0,
            0,
            (char*) "d122.pk2"
        },
        {
            1,
            11,
            0,
            0,
            (char*) "d123.pk2"
        },
        {
            1,
            11,
            0,
            0,
            (char*) "d124.pk2"
        },
        {
            1,
            11,
            0,
            0,
            (char*) "d125.pk2"
        },
        {
            1,
            11,
            0,
            0,
            (char*) "d126.pk2"
        },
        {
            1,
            11,
            0,
            0,
            (char*) "d127.pk2"
        },
        {
            1,
            11,
            0,
            0,
            (char*) "d128.pk2"
        },
        {
            1,
            11,
            0,
            0,
            (char*) "d129.pk2"
        },
        {
            1,
            11,
            0,
            0,
            (char*) "d130.pk2"
        },
        {
            1,
            11,
            0,
            0,
            (char*) "d200.pk2"
        },
        {
            1,
            11,
            0,
            0,
            (char*) "d201.pk2"
        },
        {
            1,
            11,
            0,
            0,
            (char*) "d202.pk2"
        },
        {
            1,
            11,
            0,
            0,
            (char*) "d203.pk2"
        },
        {
            1,
            11,
            0,
            0,
            (char*) "d204.pk2"
        },
        {
            1,
            11,
            0,
            0,
            (char*) "d205.pk2"
        },
        {
            1,
            11,
            0,
            0,
            (char*) "d206.pk2"
        },
        {
            1,
            11,
            0,
            0,
            (char*) "d207.pk2"
        },
        {
            1,
            11,
            0,
            0,
            (char*) "d208.pk2"
        },
        {
            1,
            11,
            0,
            0,
            (char*) "d209.pk2"
        },
        {
            1,
            11,
            0,
            0,
            (char*) "d210.pk2"
        },
        {
            1,
            11,
            0,
            0,
            (char*) "d211.pk2"
        },
        {
            1,
            11,
            0,
            0,
            (char*) "d212.pk2"
        },
        {
            1,
            11,
            0,
            0,
            (char*) "d213.pk2"
        },
        {
            1,
            11,
            0,
            0,
            (char*) "d214.pk2"
        },
        {
            1,
            11,
            0,
            0,
            (char*) "d215.pk2"
        },
        {
            1,
            11,
            0,
            0,
            (char*) "d216.pk2"
        },
        {
            1,
            11,
            0,
            0,
            (char*) "d217.pk2"
        },
        {
            1,
            11,
            0,
            0,
            (char*) "d218.pk2"
        },
        {
            1,
            11,
            0,
            0,
            (char*) "d219.pk2"
        },
        {
            1,
            11,
            0,
            0,
            (char*) "d220.pk2"
        },
        {
            1,
            11,
            0,
            0,
            (char*) "d221.pk2"
        },
        {
            1,
            11,
            0,
            0,
            (char*) "d222.pk2"
        },
        {
            1,
            11,
            0,
            0,
            (char*) "d223.pk2"
        },
        {
            1,
            11,
            0,
            0,
            (char*) "d224.pk2"
        },
        {
            1,
            11,
            0,
            0,
            (char*) "d225.pk2"
        },
        {
            1,
            11,
            0,
            0,
            (char*) "d226.pk2"
        },
        {
            1,
            11,
            0,
            0,
            (char*) "d227.pk2"
        },
        {
            1,
            11,
            0,
            0,
            (char*) "d228.pk2"
        },
        {
            1,
            11,
            0,
            0,
            (char*) "d229.pk2"
        },
        {
            1,
            11,
            0,
            0,
            (char*) "d230.pk2"
        },
        {
            1,
            11,
            0,
            0,
            (char*) "d231.pk2"
        },
        {
            1,
            11,
            0,
            0,
            (char*) "d232.pk2"
        },
        {
            1,
            11,
            0,
            0,
            (char*) "d300.pk2"
        },
        {
            1,
            11,
            0,
            0,
            (char*) "d301.pk2"
        },
        {
            1,
            11,
            0,
            0,
            (char*) "d302.pk2"
        },
        {
            1,
            11,
            0,
            0,
            (char*) "d303.pk2"
        },
        {
            1,
            11,
            0,
            0,
            (char*) "d304.pk2"
        },
        {
            1,
            11,
            0,
            0,
            (char*) "d305.pk2"
        },
        {
            1,
            11,
            0,
            0,
            (char*) "d306.pk2"
        },
        {
            1,
            11,
            0,
            0,
            (char*) "d307.pk2"
        },
        {
            1,
            11,
            0,
            0,
            (char*) "d308.pk2"
        },
        {
            1,
            11,
            0,
            0,
            (char*) "d309.pk2"
        },
        {
            1,
            11,
            0,
            0,
            (char*) "d310.pk2"
        },
        {
            1,
            11,
            0,
            0,
            (char*) "d311.pk2"
        },
        {
            1,
            11,
            0,
            0,
            (char*) "d312.pk2"
        },
        {
            1,
            11,
            0,
            0,
            (char*) "d313.pk2"
        },
        {
            1,
            11,
            0,
            0,
            (char*) "d314.pk2"
        },
        {
            1,
            11,
            0,
            0,
            (char*) "d315.pk2"
        },
        {
            1,
            11,
            0,
            0,
            (char*) "d316.pk2"
        },
        {
            1,
            11,
            0,
            0,
            (char*) "d317.pk2"
        },
        {
            1,
            11,
            0,
            0,
            (char*) "d318.pk2"
        },
        {
            1,
            11,
            0,
            0,
            (char*) "d319.pk2"
        },
        {
            1,
            11,
            0,
            0,
            (char*) "d320.pk2"
        },
        {
            1,
            11,
            0,
            0,
            (char*) "d321.pk2"
        },
        {
            1,
            11,
            0,
            0,
            (char*) "d322.pk2"
        },
        {
            1,
            11,
            0,
            0,
            (char*) "d323.pk2"
        },
        {
            1,
            11,
            0,
            0,
            (char*) "d324.pk2"
        },
        {
            1,
            11,
            0,
            0,
            (char*) "d325.pk2"
        },
        {
            1,
            11,
            0,
            0,
            (char*) "d326.pk2"
        },
        {
            1,
            11,
            0,
            0,
            (char*) "d327.pk2"
        },
        {
            1,
            11,
            0,
            0,
            (char*) "d328.pk2"
        },
        {
            1,
            11,
            0,
            0,
            (char*) "d329.pk2"
        },
        {
            1,
            11,
            0,
            0,
            (char*) "d330.pk2"
        },
        {
            1,
            11,
            0,
            0,
            (char*) "d331.pk2"
        },
        {
            1,
            11,
            0,
            0,
            (char*) "d332.pk2"
        },
        {
            1,
            11,
            0,
            0,
            (char*) "d333.pk2"
        },
        {
            1,
            11,
            0,
            0,
            (char*) "d334.pk2"
        },
        {
            1,
            11,
            0,
            0,
            (char*) "d335.pk2"
        },
        {
            1,
            11,
            0,
            0,
            (char*) "d336.pk2"
        },
        {
            1,
            11,
            0,
            0,
            (char*) "d337.pk2"
        },
        {
            1,
            11,
            0,
            0,
            (char*) "d338.pk2"
        },
        {
            1,
            11,
            0,
            0,
            (char*) "d339.pk2"
        },
        {
            1,
            11,
            0,
            0,
            (char*) "d340.pk2"
        },
        {
            1,
            11,
            0,
            0,
            (char*) "d400.pk2"
        },
        {
            1,
            11,
            0,
            0,
            (char*) "d800.pk2"
        },
        {
            1,
            11,
            0,
            0,
            (char*) "d801.pk2"
        },
        {
            1,
            11,
            0,
            0,
            (char*) "d802.pk2"
        },
        {
            1,
            11,
            0,
            0,
            (char*) "d803.pk2"
        },
        {
            1,
            11,
            0,
            0,
            (char*) "d804.pk2"
        },
        {
            1,
            11,
            0,
            0,
            (char*) "d805.pk2"
        },
        {
            1,
            11,
            0,
            0,
            (char*) "d806.pk2"
        },
        {
            1,
            11,
            0,
            0,
            (char*) "d807.pk2"
        },
        {
            1,
            11,
            0,
            0,
            (char*) "d808.pk2"
        },
        {
            1,
            11,
            0,
            0,
            (char*) "d809.pk2"
        },
        {
            1,
            11,
            0,
            0,
            (char*) "d810.pk2"
        },
        {
            1,
            12,
            0,
            0,
            (char*) "i000_play_camera.pk2"
        },
        {
            1,
            12,
            0,
            0,
            (char*) "i001_play_light.pk2"
        },
        {
            1,
            12,
            0,
            0,
            (char*) "i002_note.pk2"
        },
        {
            1,
            12,
            0,
            0,
            (char*) "i003_gyakusatu.pk2"
        },
        {
            1,
            12,
            0,
            0,
            (char*) "i004_dummy.pk2"
        },
        {
            1,
            12,
            0,
            0,
            (char*) "i005_key.pk2"
        },
        {
            1,
            12,
            0,
            0,
            (char*) "i006_megane.pk2"
        },
        {
            1,
            12,
            0,
            0,
            (char*) "i007_megane.pk2"
        },
        {
            1,
            12,
            0,
            0,
            (char*) "i008_gantai.pk2"
        },
        {
            0,
            21,
            0,
            0,
            (char*) "bgm_start.dmy"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "Danmatu_male.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "Danmatu_male.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "Danmatu_female.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "Danmatu_female.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "ese_kusaki_zawameki.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "ese_kusaki_zawameki.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "ese_kodomo_hasirimawari.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "ese_kodomo_hasirimawari.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "kan043_rakurai.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "kan043_rakurai.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "kan042_kaminari.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "kan042_kaminari.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "ese_kaminari.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "ese_kaminari.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "ese_hinadan_kagi.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "ese_hinadan_kagi.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "kan020_tyou.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "kan020_tyou.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "kan003_kureha.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "kan003_kureha.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "kan002_kutiki.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "kan002_kutiki.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "voice_murarei.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "voice_murarei.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "ykn25_kusa.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "ykn25_kusa.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "ykn21_imibito.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "ykn21_imibito.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "ykn20_guujirei.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "ykn20_guujirei.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "ykn19_suishi.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "ykn19_suishi.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "ykn15_karakurishi.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "ykn15_karakurishi.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "ykn14_kubiore.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "ykn14_kubiore.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "ykn07_kusabi3.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "ykn07_kusabi3.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "ykn06_kusabi2.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "ykn06_kusabi2.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "ykn05_kusabi1.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "ykn05_kusabi1.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "scene0240.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "scene0240.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "scene0210.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "scene0210.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "scene0190.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "scene0190.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "scene0170.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "scene0170.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "scene0160.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "scene0160.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "scene0150.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "scene0150.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "scene0133.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "scene0133.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "scene0132.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "scene0132.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "scene0130.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "scene0130.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "ykn12_hahaoyarei.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "ykn12_hahaoyarei.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "ykn10_waninngyou.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "ykn10_waninngyou.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "flashout.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "flashout.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "flashin.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "flashin.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "ykn16_onikodomo.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "ykn16_onikodomo.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "ykn08_chitose.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "ykn08_chitose.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "ykn31_saerei3.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "ykn31_saerei3.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "ykn03_saerei2.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "ykn03_saerei2.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "ykn02_saerei1.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "ykn02_saerei1.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "bgm010_prm90.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "bgm010_prm90.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "ese_door_huuindoor.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "ese_door_huuindoor.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "menyu.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "menyu.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "ane_yarare.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "ane_yarare.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "kan033_Nazo.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "kan033_Nazo.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "kan032_okyou.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "kan032_okyou.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "ykn13_hako.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "ykn13_hako.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "rt002_ner.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "rt002_ner.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MIYAKO_AG_10.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MIYAKO_AG_10.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MIYAKO_AG_09.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MIYAKO_AG_09.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MIYAKO_AG_08.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MIYAKO_AG_08.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MIYAKO_AG_07.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MIYAKO_AG_07.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MIYAKO_AG_06.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MIYAKO_AG_06.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MIYAKO_AG_05.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MIYAKO_AG_05.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MIYAKO_AG_04.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MIYAKO_AG_04.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MIYAKO_AG_03.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MIYAKO_AG_03.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MIYAKO_AG_02.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MIYAKO_AG_02.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MIYAKO_AG_01.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MIYAKO_AG_01.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MIYAKO_AG_00.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MIYAKO_AG_00.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "ese_Door_mon_sime.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "ese_Door_mon_sime.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "ese_Door_mon_open.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "ese_Door_mon_open.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "ese_door_fusuma_sime.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "ese_door_fusuma_sime.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "itsuki_talk_05.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "itsuki_talk_05.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "itsuki_talk_04.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "itsuki_talk_04.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "itsuki_talk_03.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "itsuki_talk_03.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "itsuki_talk_02.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "itsuki_talk_02.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_36.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_36.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_35.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_35.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_34.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_34.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_33.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_33.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_32.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_32.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_31.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_31.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_30.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_30.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_29.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_29.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_28.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_28.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_27.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_27.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_26.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_26.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_25.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_25.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_24.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_24.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_23.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_23.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_21.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_21.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_20.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_20.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_19.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_19.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_18.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_18.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_17.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_17.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_16.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_16.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_15.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_15.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_14.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_14.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_13.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_13.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_12.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_12.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_11.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_11.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_10.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_10.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_09.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_09.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_08.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_08.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_07.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_07.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_06.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_06.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_05.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_05.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_04.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_04.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_03.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_03.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_02.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_02.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_01.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_01.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_00.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_00.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "itsuki_talk_01.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "itsuki_talk_01.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "ese_door_fusuma_open.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "ese_door_fusuma_open.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "itsuki_talk_00.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "itsuki_talk_00.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "ykn09_rakka.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "ykn09_rakka.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "bgm004_menu1.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "bgm004_menu1.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "bgm000_title.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "bgm000_title.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "ykn30_makirei.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "ykn30_makirei.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "ykn22_murarei.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "ykn22_murarei.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "ykn00_yami.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "ykn00_yami.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "showtitle.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "showtitle.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "kan037_conte.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "kan037_conte.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "kan036_nanika.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "kan036_nanika.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "kan035_menniwa.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "kan035_menniwa.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "kan029_sandou.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "kan029_sandou.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "kan028_mura1.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "kan028_mura1.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "kan025_misono.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "kan025_misono.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "kan023_okunai1.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "kan023_okunai1.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "kan022_hosoi.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "kan022_hosoi.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "kan021_hiroi.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "kan021_hiroi.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "kan018_sae.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "kan018_sae.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "kan017_rhythm.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "kan017_rhythm.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "kan007_kurosawa.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "kan007_kurosawa.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "kan006_tachibana.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "kan006_tachibana.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "kan005_kiryuu.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "kan005_kiryuu.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "ese001_knockdoor.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "ese001_knockdoor.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "kan004_ousaka.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "kan004_ousaka.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "scene0120.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "scene0120.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "scene0121.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "scene0121.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "scene0122.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "scene0122.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "scene0140.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "scene0140.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "kan010_hasino_ue.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "kan010_hasino_ue.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "ykn26_kusa2.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "ykn26_kusa2.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "scene0230.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "scene0230.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "scene0231.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "scene0231.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "scene0350.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "scene0350.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "scene0352.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "scene0352.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "scene9001.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "scene9001.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "ykn23_murarei_B.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "ykn23_murarei_B.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "ykn24_murarei_C.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "ykn24_murarei_C.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "ESE_TOUSYUTALK.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "ESE_TOUSYUTALK.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "GUUJI_AG_00.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "GUUJI_AG_00.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAKABE_AG_00.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAKABE_AG_00.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MURA_AG_00.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MURA_AG_00.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MURA_AG_01.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MURA_AG_01.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MURA_AG_02.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MURA_AG_02.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "TOUSYU_AG_00.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "TOUSYU_AG_00.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "TOUSYU_AG_01.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "TOUSYU_AG_01.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "TOUSYU_AG_02.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "TOUSYU_AG_02.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "ESE_GUUJITALK.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "ESE_GUUJITALK.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "scene0410.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "scene0410.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "scene9002.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "scene9002.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "scene0330.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "scene0330.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "scene0340.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "scene0340.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "scene9302.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "scene9302.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "scene9501.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "scene9501.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "ese_wasan_01.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "ese_wasan_01.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "ese_wasan_00.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "ese_wasan_00.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "itsuki_talk_06.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "itsuki_talk_06.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "itsuki_talk_07.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "itsuki_talk_07.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "itsuki_talk_08.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "itsuki_talk_08.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "itsuki_talk_09.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "itsuki_talk_09.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "itsuki_talk_10.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "itsuki_talk_10.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_37.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_37.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_38.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_38.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_39.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_39.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_40.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_40.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_41.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_41.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "ese_hashigo.hxd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "ese_hashigo.bd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "ese_hashigo.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "ese_hikido.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "ese_hikido.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "ese_oshiire_goto.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "ese_oshiire_goto.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "ese_oshiire_suzu.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "ese_oshiire_suzu.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "ese_tobiratataki.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "ese_tobiratataki.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "ese_yukashita.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "ese_yukashita.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "kan_ame_00.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "kan_ame_00.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "kan_wasan_00.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "kan_wasan_00.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "kan_wasan_01.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "kan_wasan_01.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "kan_wasan_02.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "kan_wasan_02.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "ese_onechan00.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "ese_onechan00.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "ese_onechan01.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "ese_onechan01.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "ese_onechan02.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "ese_onechan02.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "ese_onechan03.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "ese_onechan03.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "NINGYOU_AG_01.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "NINGYOU_AG_01.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "NINGYOU_AG_02.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "NINGYOU_AG_02.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "TOUSYU_AG_03.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "TOUSYU_AG_03.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "GD042.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "GD042.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "GD053.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "GD053.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "reiseki_voise_00.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "reiseki_voise_00.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "reiseki_voise_01.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "reiseki_voise_01.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "reiseki_voise_02.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "reiseki_voise_02.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "reiseki_voise_03.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "reiseki_voise_03.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "reiseki_voise_04.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "reiseki_voise_04.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "reiseki_voise_05.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "reiseki_voise_05.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "reiseki_voise_06.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "reiseki_voise_06.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "reiseki_voise_07.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "reiseki_voise_07.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "reiseki_voise_08.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "reiseki_voise_08.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "reiseki_voise_09.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "reiseki_voise_09.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "reiseki_voise_10.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "reiseki_voise_10.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "reiseki_voise_11.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "reiseki_voise_11.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "itsuki_talk_11.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "itsuki_talk_11.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "itsuki_talk_12.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "itsuki_talk_12.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "itsuki_talk_13.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "itsuki_talk_13.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "itsuki_talk_14.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "itsuki_talk_14.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "itsuki_talk_15.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "itsuki_talk_15.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "itsuki_talk_16.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "itsuki_talk_16.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "itsuki_talk_17.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "itsuki_talk_17.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "itsuki_talk_18.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "itsuki_talk_18.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "itsuki_talk_19.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "itsuki_talk_19.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "itsuki_talk_20.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "itsuki_talk_20.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "itsuki_talk_21.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "itsuki_talk_21.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "itsuki_talk_22.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "itsuki_talk_22.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "itsuki_talk_23.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "itsuki_talk_23.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_42.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_42.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_43.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_43.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_44.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_44.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_45.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_45.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_46.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_46.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_47.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_47.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_48.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_48.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_49.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_49.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_50.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_50.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_51.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_51.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_52.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_52.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_53.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_53.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_54.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_54.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_55.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_55.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_56.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_56.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_57.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_57.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_58.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_58.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_59.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_59.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_60.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_60.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_61.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_61.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_62.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_62.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_63.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_63.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "ykn04_masumi.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "ykn04_masumi.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "ese_shikake.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "ese_shikake.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "scene0110.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "scene0110.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "scene0510.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "scene0510.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "scene0520.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "scene0520.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "ykn11_futagorei.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "ykn11_futagorei.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "ykn17_onikodomo_B.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "ykn17_onikodomo_B.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "ykn18_onikodomo_C.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "ykn18_onikodomo_C.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "ykn27_tousyu.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "ykn27_tousyu.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "kan044_chika.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "kan044_chika.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "bgm005_menu2.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "bgm005_menu2.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "bgm006_clear.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "bgm006_clear.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "bgm007_win.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "bgm007_win.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "bgm008_lose.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "bgm008_lose.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "bgm009_start.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "bgm009_start.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAKABE_AG_01.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAKABE_AG_01.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAKABE_AG_02.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAKABE_AG_02.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "ESE_CHITOSE_RUN.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "ESE_CHITOSE_RUN.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "ESE_CHITOSE_RUN_FO.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "ESE_CHITOSE_RUN_FO.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "CHITOSE_AG_00.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "CHITOSE_AG_00.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "KDM_by_AG_00.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "KDM_by_AG_00.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "KDM_by_AG_01.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "KDM_by_AG_01.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "KDM_by_AG_02.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "KDM_by_AG_02.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "KDM_by_AG_03.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "KDM_by_AG_03.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "KDM_by_AG_04.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "KDM_by_AG_04.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "KDM_gl_AG_00.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "KDM_gl_AG_00.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "KDM_gl_AG_01.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "KDM_gl_AG_01.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "KDM_gl_AG_02.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "KDM_gl_AG_02.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "KDM_gl_AG_03.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "KDM_gl_AG_03.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "KDM_gl_AG_04.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "KDM_gl_AG_04.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "scene0610.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "scene0610.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "scene0620.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "scene0620.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "scene0720.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "scene0720.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "scene0730.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "scene0730.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "scene9101.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "scene9101.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "scene9203.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "scene9203.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "scene9204.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "scene9204.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "scene9205.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "scene9205.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "scene9303.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "scene9303.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "scene0820.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "scene0820.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "RT_KOKONIITE_STR.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "RT_KOKONIITE_STR.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "GD210_CHAKUMI_STR.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "GD210_CHAKUMI_STR.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "bgm010_omake.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "bgm010_omake.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "chitose_AG_01.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "chitose_AG_01.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "futago_AG_00.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "futago_AG_00.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "futago_AG_01.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "futago_AG_01.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "futago_AG_02.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "futago_AG_02.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "KDM_hshs_AG.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "KDM_hshs_AG.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "SAE_laugh_01.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "SAE_laugh_01.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "SAE_laugh_02.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "SAE_laugh_02.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "SAE_laugh_03.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "SAE_laugh_03.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "ESE_GHOST_VOICE_STR.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "ESE_GHOST_VOICE_STR.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "ese_miyako_dokonano.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "ese_miyako_dokonano.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "ese_miyako_okaeri.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "ese_miyako_okaeri.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "ese_miyako_susurinaki.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "ese_miyako_susurinaki.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "ese_miyako_umeki.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "ese_miyako_umeki.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "ese_miyako_yurusite.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "ese_miyako_yurusite.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "ese_suzunone_fo.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "ese_suzunone_fo.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "gd105_chitose.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "gd105_chitose.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "kan_36_nanika2.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "kan_36_nanika2.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "kan_fukamiti_wasan.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "kan_fukamiti_wasan.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "kan_nieza.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "kan_nieza.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "kan_uturo.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "kan_uturo.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "scene0721.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "scene0721.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "ese_ohuda.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "ese_ohuda.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "reiseki_voise_12.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "reiseki_voise_12.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "reiseki_voise_13.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "reiseki_voise_13.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "reiseki_voise_14.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "reiseki_voise_14.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "reiseki_voise_15.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "reiseki_voise_15.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "reiseki_voise_16.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "reiseki_voise_16.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "reiseki_voise_17.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "reiseki_voise_17.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "reiseki_voise_18.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "reiseki_voise_18.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "reiseki_voise_19.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "reiseki_voise_19.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "reiseki_voise_20.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "reiseki_voise_20.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "reiseki_voise_21.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "reiseki_voise_21.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "reiseki_voise_22.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "reiseki_voise_22.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "reiseki_voise_23.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "reiseki_voise_23.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "reiseki_voise_24.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "reiseki_voise_24.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "reiseki_voise_25.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "reiseki_voise_25.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "reiseki_voise_26.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "reiseki_voise_26.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "reiseki_voise_26_1.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "reiseki_voise_26_1.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "reiseki_voise_27.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "reiseki_voise_27.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "reiseki_voise_28.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "reiseki_voise_28.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "reiseki_voise_29.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "reiseki_voise_29.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "reiseki_voise_30.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "reiseki_voise_30.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "reiseki_voise_31.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "reiseki_voise_31.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "reiseki_voise_32.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "reiseki_voise_32.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "reiseki_voise_33.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "reiseki_voise_33.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "reiseki_voise_34.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "reiseki_voise_34.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAKABE_AG_03.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAKABE_AG_03.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAKABE_AG_04.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAKABE_AG_04.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAKABE_AG_05.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAKABE_AG_05.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAKABE_AG_06.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAKABE_AG_06.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAKABE_AG_07.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAKABE_AG_07.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAKABE_AG_08.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAKABE_AG_08.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAKABE_AG_09.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAKABE_AG_09.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAKABE_AG_10.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAKABE_AG_10.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAKABE_AG_11.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAKABE_AG_11.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAKABE_AG_12.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAKABE_AG_12.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAKABE_AG_13.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAKABE_AG_13.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAKABE_AG_14.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAKABE_AG_14.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAKABE_AG_15.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAKABE_AG_15.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_100.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_100.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_101.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_101.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_102.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_102.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_103.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_103.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_104.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_104.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_105.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_105.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_106.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_106.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_107.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_107.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_108.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_108.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_109.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_109.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_110.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_110.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_111.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_111.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_112.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_112.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_113.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_113.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_114.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_114.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_115.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_115.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_116.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_116.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_117.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_117.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_118.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_118.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_119.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_119.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_120.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_120.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_121.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_121.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_122.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_122.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_123.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_123.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_124.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_124.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_125.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_125.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_126.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_126.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_127.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_127.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_128.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_128.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_129.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_129.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_130.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_130.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_131.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_131.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_132.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_132.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_133.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_133.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_134.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_134.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_135.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_135.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_136.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_136.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_137.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_137.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_138.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_138.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_139.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_139.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_140.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_140.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_141.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_141.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_142.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_142.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_143.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_143.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_144.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_144.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_145.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_145.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_146.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_146.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_147.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_147.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_148.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_148.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_149.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_149.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_150.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_150.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_151.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_151.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_152.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_152.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_153.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_153.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_154.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_154.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_155.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_155.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_156.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_156.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_157.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_157.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_158.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_158.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_159.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_159.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_160.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_160.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_161.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_161.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_162.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_162.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_163.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_163.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_164.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_164.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_165.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_165.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_166.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_166.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_167.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_167.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_168.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_168.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_169.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_169.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_170.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_170.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_171.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_171.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_172.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_172.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_173.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_173.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_174.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_174.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_175.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_175.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_176.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_176.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_177.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_177.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_178.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_178.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_179.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_179.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_180.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_180.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_181.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_181.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_182.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_182.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_183.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_183.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_184.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_184.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_185.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_185.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_186.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_186.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_187.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_187.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_188.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_188.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_189.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_189.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_190.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_190.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_191.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_191.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_192.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_192.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_193.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_193.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_194.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_194.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_195.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_195.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_196.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_196.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_197.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_197.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_198.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_198.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_199.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_199.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_200.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_200.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_201.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_201.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_202.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_202.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_203.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_203.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_204.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_204.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_205.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_205.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_206.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_206.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_207.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_207.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_208.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_208.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_209.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_209.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_210.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_210.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_211.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_211.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_212.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_212.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_213.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_213.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_214.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_214.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_215.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_215.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_216.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_216.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_217.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_217.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_64.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_64.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_65.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_65.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_66.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_66.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_67.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_67.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_68.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_68.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_69.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_69.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_70.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_70.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_71.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_71.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_72.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_72.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_73.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_73.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_74.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_74.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_75.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_75.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_76.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_76.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_77.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_77.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_78.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_78.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_79.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_79.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_80.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_80.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_81.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_81.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_82.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_82.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_83.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_83.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_84.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_84.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_85.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_85.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_86.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_86.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_87.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_87.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_88.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_88.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_89.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_89.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_90.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_90.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_91.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_91.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_92.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_92.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_93.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_93.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_94.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_94.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_95.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_95.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_96.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_96.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_97.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_97.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_98.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_98.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_99.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_99.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MURA_AG_03.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MURA_AG_03.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MURA_AG_04.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MURA_AG_04.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MURA_AG_05.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MURA_AG_05.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "NINGYOU_AG_03.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "NINGYOU_AG_03.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "NINGYOU_AG_04.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "NINGYOU_AG_04.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "NINGYOU_AG_05.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "NINGYOU_AG_05.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "NINGYOU_AG_06.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "NINGYOU_AG_06.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "TOUSYU_AG_04.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "TOUSYU_AG_04.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "TOUSYU_AG_05.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "TOUSYU_AG_05.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "TOUSYU_AG_06.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "TOUSYU_AG_06.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "TOUSYU_AG_07.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "TOUSYU_AG_07.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "TOUSYU_AG_08.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "TOUSYU_AG_08.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_218.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_218.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "synchro_2syou.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "synchro_2syou.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "synchro_3syou.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "synchro_3syou.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "synchro_5syou.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "synchro_5syou.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "synchro_9syou_a.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "synchro_9syou_a.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "synchro_9syou_b.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "synchro_9syou_b.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_221.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_221.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_220.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_220.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_219.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_219.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "scene9206.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "scene9206.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "scene1010.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "scene1010.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "ese_tasukete.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "ese_tasukete.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "ese_uturo_futago.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "ese_uturo_futago.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "bgm011_gameover.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "bgm011_gameover.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_222.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "MAYU_TALK_222.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "GD243_yunomi_str.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "GD243_yunomi_str.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "ESE_RT_MARI.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "ESE_RT_MARI.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "ESE_RT_TANAGATA.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "ESE_RT_TANAGATA.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "REISEKI_VOISE_35.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "REISEKI_VOISE_35.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "REISEKI_VOISE_36.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "REISEKI_VOISE_36.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "REISEKI_VOISE_37.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "REISEKI_VOISE_37.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "REISEKI_VOISE_38.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "REISEKI_VOISE_38.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "REISEKI_VOISE_39.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "REISEKI_VOISE_39.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "RT_ESE_KATANA.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "RT_ESE_KATANA.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "REISEKI_VOISE_40.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "REISEKI_VOISE_40.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "REISEKI_VOISE_41.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "REISEKI_VOISE_41.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "itsuki_talk_24.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "itsuki_talk_24.str"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "ESE_KUSABI_TOJYO.hxd"
        },
        {
            0,
            4,
            0,
            0,
            (char*) "ESE_KUSABI_TOJYO.str"
        },
        {
            0,
            21,
            0,
            0,
            (char*) "bgm_end.dmy"
        },
        {
            0,
            21,
            0,
            0,
            (char*) "se_start.dmy"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "yamib_se_btl.hxd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "yamib_se_btl.bd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "miya_se_btl.hxd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "miya_se_btl.bd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "kusabi_se_btl.hxd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "kusabi_se_btl.bd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "murac_se_btl.hxd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "murac_se_btl.bd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "tes.hxd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "tes.bd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "aj_001_32.hxd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "aj_001_32.bd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "aj_002_32.hxd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "aj_002_32.bd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "aj_003_32.hxd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "aj_003_32.bd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "aj_004_32.hxd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "aj_004_32.bd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "aj_005_32.hxd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "aj_005_32.bd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "aj_006_32.hxd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "aj_006_32.bd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "aj_007_32.hxd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "aj_007_32.bd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "aj_008_32.hxd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "aj_008_32.bd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "aj_009_22.hxd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "aj_009_22.bd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "aj_011_22.hxd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "aj_011_22.bd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "aj_012_22.hxd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "aj_012_22.bd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "aj_013a_22.hxd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "aj_013a_22.bd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "aj_013b_22.hxd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "aj_013b_22.bd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "aj_013c_22.hxd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "aj_013c_22.bd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "aj_013d_22.hxd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "aj_013d_22.bd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "aj_015_32.hxd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "aj_015_32.bd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "aj_016_22.hxd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "aj_016_22.bd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "Door009_kagi_tyuu.hxd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "Door009_kagi_tyuu.bd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "Door008_kagi_syou.hxd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "Door008_kagi_syou.bd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "Door007_dai_akanai.hxd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "Door007_dai_akanai.bd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "Door006_tyuu_akanai.hxd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "Door006_tyuu_akanai.bd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "Door004_kuguri.hxd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "Door004_kuguri.bd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "Door003_hikido.hxd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "Door003_hikido.bd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "Door002_oosaka.hxd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "Door002_oosaka.bd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "Door005_husuma_akana.hxd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "Door005_husuma_akana.bd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "ese006_hutasimeru.hxd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "ese006_hutasimeru.bd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "ese007_hutaakeru.hxd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "ese007_hutaakeru.bd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "ese005_hutaugoku.hxd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "ese005_hutaugoku.bd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "Foot016_kusa.hxd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "Foot016_kusa.bd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "Foot015_tuti.hxd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "Foot015_tuti.bd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "Foot014_itanoma3.hxd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "Foot014_itanoma3.bd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "Foot013_doma1.hxd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "Foot013_doma1.bd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "Foot012_extkisimi.hxd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "Foot012_extkisimi.bd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "Foot011_otibamajiri.hxd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "Foot011_otibamajiri.bd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "Foot010_jyarimajiri.hxd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "Foot010_jyarimajiri.bd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "Foot009_waretouki.hxd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "Foot009_waretouki.bd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "Foot008_itanoma2.hxd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "Foot008_itanoma2.bd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "Foot007_itanoma.hxd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "Foot007_itanoma.bd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "Foot006_itakaidan.hxd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "Foot006_itakaidan.bd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "Foot005_tatami.hxd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "Foot005_tatami.bd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "Foot004_kamoi.hxd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "Foot004_kamoi.bd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "Foot003_doma2.hxd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "Foot003_doma2.bd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "Foot002_mokuhen.hxd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "Foot002_mokuhen.bd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "Foot001_isidatami.hxd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "Foot001_isidatami.bd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "Foot000_isikaidan.hxd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "Foot000_isikaidan.bd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "ane_sisutemu.hxd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "ane_sisutemu.bd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "sj009_117.hxd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "sj009_117.bd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "sj008_116.hxd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "sj008_116.bd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "sj007_115.hxd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "sj007_115.bd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "sj006_kokirie.hxd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "sj006_kokirie.bd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "sj005_110.hxd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "sj005_110.bd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "sj004_109.hxd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "sj004_109.bd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "sj003_kirie.hxd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "sj003_kirie.bd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "sj001_104.hxd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "sj001_104.bd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "sj000_102.hxd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "sj000_102.bd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "han001_husuma.hxd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "han001_husuma.bd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "han000_tyuu.hxd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "han000_tyuu.bd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "Foot011_isinoue.hxd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "Foot011_isinoue.bd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "Foot010_jyari.hxd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "Foot010_jyari.bd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "Foot009_tuti2.hxd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "Foot009_tuti2.bd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "Foot008_tuti.hxd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "Foot008_tuti.bd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "Foot007_kamoi.hxd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "Foot007_kamoi.bd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "Foot006_tatami.hxd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "Foot006_tatami.bd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "Foot005_itakaidan.hxd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "Foot005_itakaidan.bd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "Foot004_mokuhen.hxd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "Foot004_mokuhen.bd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "Foot003_itanoma2.hxd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "Foot003_itanoma2.bd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "Foot002_itanoma1.hxd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "Foot002_itanoma1.bd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "Foot001_doma2.hxd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "Foot001_doma2.bd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "Foot000_doma1.hxd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "Foot000_doma1.bd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "Door001_tyuu.hxd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "Door001_tyuu.bd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "Door000_husuma.hxd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "Door000_husuma.bd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "ese004_nagabituakesi.hxd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "ese004_nagabituakesi.bd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "ese000_abareru.hxd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "ese000_abareru.bd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "sisutemu.hxd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "sisutemu.bd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "guji_se_btl.hxd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "guji_se_btl.bd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "hako_se_btl.hxd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "hako_se_btl.bd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "kusaa_se_btl.hxd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "kusaa_se_btl.bd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "kusab_se_btl.hxd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "kusab_se_btl.bd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "muraa_se_btl.hxd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "muraa_se_btl.bd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "murab_se_btl.hxd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "murab_se_btl.bd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "suis_se_btl.hxd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "suis_se_btl.bd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "yamia_se_btl.hxd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "yamia_se_btl.bd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "pzl_hinadan.hxd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "pzl_hinadan.bd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "pzl_rokumen.hxd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "pzl_rokumen.bd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "kan_kawa.hxd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "kan_kawa.bd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "ese_tanagata.hxd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "ese_tanagata.bd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "ese_suiteki_yuka.hxd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "ese_suiteki_yuka.bd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "kan_kagaribi.hxd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "kan_kagaribi.bd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "ese_mokuhen.hxd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "ese_mokuhen.bd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "ese_mari.hxd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "ese_mari.bd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "ese_ike_otiru.hxd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "ese_ike_otiru.bd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "ese_door_opcl.hxd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "ese_door_opcl.bd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "ese_box_otiru.hxd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "ese_box_otiru.bd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "ESE_SCREAM00.hxd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "ESE_SCREAM00.bd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "ESE_SCREAM01.hxd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "ESE_SCREAM01.bd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "TEST005.hxd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "TEST005.bd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "TEST006.hxd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "TEST006.bd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "TEST007.hxd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "TEST007.bd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "kubi_se_btl.hxd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "kubi_se_btl.bd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "masu_se_btl.hxd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "masu_se_btl.bd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "tousyu_se_btl.hxd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "tousyu_se_btl.bd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "nin_se_btl.hxd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "nin_se_btl.bd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "akane_se_btl.hxd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "akane_se_btl.bd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "azami_se_btl.hxd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "azami_se_btl.bd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "chitose_se_btl.hxd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "chitose_se_btl.bd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "imi_se_btl.hxd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "imi_se_btl.bd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "kdma_se_btl.hxd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "kdma_se_btl.bd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "kdmb_se_btl.hxd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "kdmb_se_btl.bd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "kdmc_se_btl.hxd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "kdmc_se_btl.bd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "suis2_se_btl.hxd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "suis2_se_btl.bd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "rakka_se_btl.hxd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "rakka_se_btl.bd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "base_sys_bd.hxd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "base_sys_bd.bd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "finder_sys_bd.hxd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "finder_sys_bd.bd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "mio_sys_bd.hxd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "mio_sys_bd.bd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "kan_kagarihaze_bd.hxd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "kan_kagarihaze_bd.bd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "Foot016_soft.hxd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "Foot016_soft.bd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "ese_chitosesuzu_bd.hxd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "ese_chitosesuzu_bd.bd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "kan_meimetu_bd.hxd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "kan_meimetu_bd.bd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "pzl_kazaguruma.hxd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "pzl_kazaguruma.bd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "GD130_bd.hxd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "GD130_bd.bd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "GD062_bd.hxd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "GD062_bd.bd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "ese_rakurai.hxd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "ese_rakurai.bd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "ESE_SUITEKI_SUIMEN.hxd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "ESE_SUITEKI_SUIMEN.bd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "KAN_KAWA_FAST.hxd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "KAN_KAWA_FAST.bd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "ESE_FILMREEL.hxd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "ESE_FILMREEL.bd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "pzl_futago.hxd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "pzl_futago.bd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "kan_screen_noise.hxd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "kan_screen_noise.bd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "kan_rare_near.hxd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "kan_rare_near.bd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "kan_chiteiko.hxd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "kan_chiteiko.bd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "ese_synchro_last.hxd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "ese_synchro_last.bd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "ese_chitosesuzu.hxd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "ese_chitosesuzu.bd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "ese_door_open_mon.hxd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "ese_door_open_mon.bd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "ese_hashigo_bd.hxd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "ese_hashigo_bd.bd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "sae_se_btl.hxd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "sae_se_btl.bd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "ningyou_se_btl.hxd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "ningyou_se_btl.bd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "kusabi2_se_btl.hxd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "kusabi2_se_btl.bd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "kan_kaze.hxd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "kan_kaze.bd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "jisin.hxd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "jisin.bd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "ese_tanagata_rt.hxd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "ese_tanagata_rt.bd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "ese_mari_rt.hxd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "ese_mari_rt.bd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "ese_hasigo2.hxd"
        },
        {
            0,
            3,
            0,
            0,
            (char*) "ese_hasigo2.bd"
        },
        {
            0,
            21,
            0,
            0,
            (char*) "se_end.dmy"
        },
        {
            0,
            17,
            0,
            0,
            (char*) "event.obj"
        },
        {
            0,
            17,
            0,
            0,
            (char*) "event_50.obj"
        },
        {
            0,
            17,
            0,
            0,
            (char*) "mission.obj"
        },
        {
            0,
            18,
            0,
            0,
            (char*) "msg.obj"
        },
        {
            0,
            18,
            0,
            0,
            (char*) "msg_f.obj"
        },
        {
            0,
            18,
            0,
            0,
            (char*) "msg_g.obj"
        },
        {
            0,
            18,
            0,
            0,
            (char*) "msg_s.obj"
        },
        {
            0,
            18,
            0,
            0,
            (char*) "msg_i.obj"
        },
        {
            1,
            19,
            0,
            0,
            (char*) "title_bg.pk2"
        },
        {
            1,
            19,
            0,
            0,
            (char*) "title_logo.pk2"
        },
        {
            1,
            19,
            0,
            0,
            (char*) "title_logo_f.pk2"
        },
        {
            1,
            19,
            0,
            0,
            (char*) "title_logo_g.pk2"
        },
        {
            1,
            19,
            0,
            0,
            (char*) "title_logo_s.pk2"
        },
        {
            1,
            19,
            0,
            0,
            (char*) "title_logo_i.pk2"
        },
        {
            0,
            5,
            0,
            0,
            (char*) "movie_room_000.pss"
        },
        {
            0,
            5,
            0,
            0,
            (char*) "movie_room_000PAL.pss"
        },
        {
            0,
            5,
            0,
            0,
            (char*) "movie_room_001.pss"
        },
        {
            0,
            5,
            0,
            0,
            (char*) "movie_room_001PAL.pss"
        },
        {
            0,
            5,
            0,
            0,
            (char*) "movie_room_002.pss"
        },
        {
            0,
            5,
            0,
            0,
            (char*) "movie_room_002PAL.pss"
        },
        {
            0,
            5,
            0,
            0,
            (char*) "movie_room_003.pss"
        },
        {
            0,
            5,
            0,
            0,
            (char*) "movie_room_003PAL.pss"
        },
        {
            0,
            5,
            0,
            0,
            (char*) "movie_room_004.pss"
        },
        {
            0,
            5,
            0,
            0,
            (char*) "movie_room_004PAL.pss"
        },
        {
            0,
            5,
            0,
            0,
            (char*) "movie_room_005.pss"
        },
        {
            0,
            5,
            0,
            0,
            (char*) "movie_room_005PAL.pss"
        },
        {
            0,
            5,
            0,
            0,
            (char*) "movie_room_006.pss"
        },
        {
            0,
            5,
            0,
            0,
            (char*) "movie_room_006PAL.pss"
        },
        {
            0,
            5,
            0,
            0,
            (char*) "s0010.pss"
        },
        {
            0,
            22,
            0,
            0,
            (char*) "scene0010_movie.slt"
        },
        {
            0,
            22,
            0,
            0,
            (char*) "scene0010_movie.eff"
        },
        {
            0,
            5,
            0,
            0,
            (char*) "s0020.pss"
        },
        {
            0,
            22,
            0,
            0,
            (char*) "scene0020_movie.slt"
        },
        {
            0,
            22,
            0,
            0,
            (char*) "scene0020_movie.eff"
        },
        {
            1,
            22,
            0,
            0,
            (char*) "scene0110.scn"
        },
        {
            0,
            22,
            0,
            0,
            (char*) "scene0110.slt"
        },
        {
            0,
            22,
            0,
            0,
            (char*) "scene0110.eff"
        },
        {
            1,
            22,
            0,
            0,
            (char*) "scene0120.scn"
        },
        {
            0,
            22,
            0,
            0,
            (char*) "scene0120.slt"
        },
        {
            0,
            22,
            0,
            0,
            (char*) "scene0120.eff"
        },
        {
            0,
            5,
            0,
            0,
            (char*) "s0121.pss"
        },
        {
            0,
            22,
            0,
            0,
            (char*) "scene0121_movie.slt"
        },
        {
            0,
            22,
            0,
            0,
            (char*) "scene0121_movie.eff"
        },
        {
            1,
            22,
            0,
            0,
            (char*) "scene0122.scn"
        },
        {
            0,
            22,
            0,
            0,
            (char*) "scene0122.slt"
        },
        {
            0,
            22,
            0,
            0,
            (char*) "scene0122.eff"
        },
        {
            1,
            22,
            0,
            0,
            (char*) "scene0130.scn"
        },
        {
            0,
            22,
            0,
            0,
            (char*) "scene0130.slt"
        },
        {
            0,
            22,
            0,
            0,
            (char*) "scene0130.eff"
        },
        {
            1,
            22,
            0,
            0,
            (char*) "scene0132.scn"
        },
        {
            0,
            22,
            0,
            0,
            (char*) "scene0132.slt"
        },
        {
            0,
            22,
            0,
            0,
            (char*) "scene0132.eff"
        },
        {
            1,
            22,
            0,
            0,
            (char*) "scene0133.scn"
        },
        {
            0,
            22,
            0,
            0,
            (char*) "scene0133.slt"
        },
        {
            0,
            22,
            0,
            0,
            (char*) "scene0133.eff"
        },
        {
            1,
            22,
            0,
            0,
            (char*) "scene0140.scn"
        },
        {
            0,
            22,
            0,
            0,
            (char*) "scene0140.slt"
        },
        {
            0,
            22,
            0,
            0,
            (char*) "scene0140.eff"
        },
        {
            0,
            5,
            0,
            0,
            (char*) "s0141.pss"
        },
        {
            0,
            22,
            0,
            0,
            (char*) "scene0141_movie.slt"
        },
        {
            0,
            22,
            0,
            0,
            (char*) "scene0141_movie.eff"
        },
        {
            1,
            22,
            0,
            0,
            (char*) "scene0150.scn"
        },
        {
            0,
            22,
            0,
            0,
            (char*) "scene0150.slt"
        },
        {
            0,
            22,
            0,
            0,
            (char*) "scene0150.eff"
        },
        {
            1,
            22,
            0,
            0,
            (char*) "scene0160.scn"
        },
        {
            0,
            22,
            0,
            0,
            (char*) "scene0160.slt"
        },
        {
            0,
            22,
            0,
            0,
            (char*) "scene0160.eff"
        },
        {
            1,
            22,
            0,
            0,
            (char*) "scene0170.scn"
        },
        {
            0,
            22,
            0,
            0,
            (char*) "scene0170.slt"
        },
        {
            0,
            22,
            0,
            0,
            (char*) "scene0170.eff"
        },
        {
            0,
            5,
            0,
            0,
            (char*) "s0180.pss"
        },
        {
            0,
            22,
            0,
            0,
            (char*) "scene0180_movie.slt"
        },
        {
            0,
            22,
            0,
            0,
            (char*) "scene0180_movie.eff"
        },
        {
            1,
            22,
            0,
            0,
            (char*) "scene0190.scn"
        },
        {
            0,
            22,
            0,
            0,
            (char*) "scene0190.slt"
        },
        {
            0,
            22,
            0,
            0,
            (char*) "scene0190.eff"
        },
        {
            0,
            5,
            0,
            0,
            (char*) "s0200.pss"
        },
        {
            0,
            22,
            0,
            0,
            (char*) "scene0200_movie.slt"
        },
        {
            0,
            22,
            0,
            0,
            (char*) "scene0200_movie.eff"
        },
        {
            1,
            22,
            0,
            0,
            (char*) "scene0210.scn"
        },
        {
            0,
            22,
            0,
            0,
            (char*) "scene0210.slt"
        },
        {
            0,
            22,
            0,
            0,
            (char*) "scene0210.eff"
        },
        {
            0,
            5,
            0,
            0,
            (char*) "s0220.pss"
        },
        {
            0,
            22,
            0,
            0,
            (char*) "scene0220_movie.slt"
        },
        {
            0,
            22,
            0,
            0,
            (char*) "scene0220_movie.eff"
        },
        {
            0,
            5,
            0,
            0,
            (char*) "s0230.pss"
        },
        {
            0,
            22,
            0,
            0,
            (char*) "scene0230_movie.slt"
        },
        {
            0,
            22,
            0,
            0,
            (char*) "scene0230_movie.eff"
        },
        {
            1,
            22,
            0,
            0,
            (char*) "scene0231.scn"
        },
        {
            0,
            22,
            0,
            0,
            (char*) "scene0231.slt"
        },
        {
            0,
            22,
            0,
            0,
            (char*) "scene0231.eff"
        },
        {
            1,
            22,
            0,
            0,
            (char*) "scene0240.scn"
        },
        {
            0,
            22,
            0,
            0,
            (char*) "scene0240.slt"
        },
        {
            0,
            22,
            0,
            0,
            (char*) "scene0240.eff"
        },
        {
            0,
            5,
            0,
            0,
            (char*) "s0310.pss"
        },
        {
            0,
            22,
            0,
            0,
            (char*) "scene0310_movie.slt"
        },
        {
            0,
            22,
            0,
            0,
            (char*) "scene0310_movie.eff"
        },
        {
            0,
            5,
            0,
            0,
            (char*) "s0330.pss"
        },
        {
            0,
            22,
            0,
            0,
            (char*) "scene0330.slt"
        },
        {
            0,
            22,
            0,
            0,
            (char*) "scene0330.eff"
        },
        {
            1,
            22,
            0,
            0,
            (char*) "scene0340.scn"
        },
        {
            0,
            22,
            0,
            0,
            (char*) "scene0340.slt"
        },
        {
            0,
            22,
            0,
            0,
            (char*) "scene0340.eff"
        },
        {
            1,
            22,
            0,
            0,
            (char*) "scene0350.scn"
        },
        {
            0,
            22,
            0,
            0,
            (char*) "scene0350.slt"
        },
        {
            0,
            22,
            0,
            0,
            (char*) "scene0350.eff"
        },
        {
            0,
            5,
            0,
            0,
            (char*) "s0351.pss"
        },
        {
            0,
            22,
            0,
            0,
            (char*) "scene0351_movie.slt"
        },
        {
            0,
            22,
            0,
            0,
            (char*) "scene0351_movie.eff"
        },
        {
            1,
            22,
            0,
            0,
            (char*) "scene0352.scn"
        },
        {
            0,
            22,
            0,
            0,
            (char*) "scene0352.slt"
        },
        {
            0,
            22,
            0,
            0,
            (char*) "scene0352.eff"
        },
        {
            1,
            22,
            0,
            0,
            (char*) "scene0410.scn"
        },
        {
            0,
            22,
            0,
            0,
            (char*) "scene0410.slt"
        },
        {
            0,
            22,
            0,
            0,
            (char*) "scene0410.eff"
        },
        {
            1,
            22,
            0,
            0,
            (char*) "scene0510.scn"
        },
        {
            0,
            22,
            0,
            0,
            (char*) "scene0510.slt"
        },
        {
            0,
            22,
            0,
            0,
            (char*) "scene0510.eff"
        },
        {
            1,
            22,
            0,
            0,
            (char*) "scene0520.scn"
        },
        {
            0,
            22,
            0,
            0,
            (char*) "scene0520.slt"
        },
        {
            0,
            22,
            0,
            0,
            (char*) "scene0520.eff"
        },
        {
            1,
            22,
            0,
            0,
            (char*) "scene0610.scn"
        },
        {
            0,
            22,
            0,
            0,
            (char*) "scene0610.slt"
        },
        {
            0,
            22,
            0,
            0,
            (char*) "scene0610.eff"
        },
        {
            0,
            5,
            0,
            0,
            (char*) "s0611.pss"
        },
        {
            0,
            22,
            0,
            0,
            (char*) "scene0611_movie.slt"
        },
        {
            0,
            22,
            0,
            0,
            (char*) "scene0611_movie.eff"
        },
        {
            1,
            22,
            0,
            0,
            (char*) "scene0620.scn"
        },
        {
            0,
            22,
            0,
            0,
            (char*) "scene0620.slt"
        },
        {
            0,
            22,
            0,
            0,
            (char*) "scene0620.eff"
        },
        {
            0,
            5,
            0,
            0,
            (char*) "s0710.pss"
        },
        {
            0,
            22,
            0,
            0,
            (char*) "scene0710_movie.slt"
        },
        {
            0,
            22,
            0,
            0,
            (char*) "scene0710_movie.eff"
        },
        {
            0,
            5,
            0,
            0,
            (char*) "s0711.pss"
        },
        {
            0,
            22,
            0,
            0,
            (char*) "scene0711_movie.slt"
        },
        {
            0,
            22,
            0,
            0,
            (char*) "scene0711_movie.eff"
        },
        {
            0,
            5,
            0,
            0,
            (char*) "s0712.pss"
        },
        {
            0,
            22,
            0,
            0,
            (char*) "scene0712_movie.slt"
        },
        {
            0,
            22,
            0,
            0,
            (char*) "scene0712_movie.eff"
        },
        {
            0,
            5,
            0,
            0,
            (char*) "s0713.pss"
        },
        {
            0,
            22,
            0,
            0,
            (char*) "scene0713_movie.slt"
        },
        {
            0,
            22,
            0,
            0,
            (char*) "scene0713_movie.eff"
        },
        {
            1,
            22,
            0,
            0,
            (char*) "scene0720.scn"
        },
        {
            0,
            22,
            0,
            0,
            (char*) "scene0720.slt"
        },
        {
            0,
            22,
            0,
            0,
            (char*) "scene0720.eff"
        },
        {
            1,
            22,
            0,
            0,
            (char*) "scene0721.scn"
        },
        {
            0,
            22,
            0,
            0,
            (char*) "scene0721.slt"
        },
        {
            0,
            22,
            0,
            0,
            (char*) "scene0721.eff"
        },
        {
            1,
            22,
            0,
            0,
            (char*) "scene0730.scn"
        },
        {
            0,
            22,
            0,
            0,
            (char*) "scene0730.slt"
        },
        {
            0,
            22,
            0,
            0,
            (char*) "scene0730.eff"
        },
        {
            0,
            5,
            0,
            0,
            (char*) "s0731.pss"
        },
        {
            0,
            22,
            0,
            0,
            (char*) "scene0731_movie.slt"
        },
        {
            0,
            22,
            0,
            0,
            (char*) "scene0731_movie.eff"
        },
        {
            0,
            5,
            0,
            0,
            (char*) "s0740.pss"
        },
        {
            0,
            22,
            0,
            0,
            (char*) "scene0740_movie.slt"
        },
        {
            0,
            22,
            0,
            0,
            (char*) "scene0740_movie.eff"
        },
        {
            0,
            5,
            0,
            0,
            (char*) "s0810.pss"
        },
        {
            0,
            22,
            0,
            0,
            (char*) "scene0810_movie.slt"
        },
        {
            0,
            22,
            0,
            0,
            (char*) "scene0810_movie.eff"
        },
        {
            1,
            22,
            0,
            0,
            (char*) "scene0820.scn"
        },
        {
            0,
            22,
            0,
            0,
            (char*) "scene0820.slt"
        },
        {
            0,
            22,
            0,
            0,
            (char*) "scene0820.eff"
        },
        {
            0,
            5,
            0,
            0,
            (char*) "s0910.pss"
        },
        {
            0,
            22,
            0,
            0,
            (char*) "scene0910_movie.slt"
        },
        {
            0,
            22,
            0,
            0,
            (char*) "scene0910_movie.eff"
        },
        {
            0,
            5,
            0,
            0,
            (char*) "s0920.pss"
        },
        {
            0,
            22,
            0,
            0,
            (char*) "scene0920_movie.slt"
        },
        {
            0,
            22,
            0,
            0,
            (char*) "scene0920_movie.eff"
        },
        {
            0,
            5,
            0,
            0,
            (char*) "s0930.pss"
        },
        {
            0,
            22,
            0,
            0,
            (char*) "scene0930_movie.slt"
        },
        {
            0,
            22,
            0,
            0,
            (char*) "scene0930_movie.eff"
        },
        {
            0,
            5,
            0,
            0,
            (char*) "s0940.pss"
        },
        {
            0,
            22,
            0,
            0,
            (char*) "scene0940_movie.slt"
        },
        {
            0,
            22,
            0,
            0,
            (char*) "scene0940_movie.eff"
        },
        {
            0,
            5,
            0,
            0,
            (char*) "s0960.pss"
        },
        {
            0,
            22,
            0,
            0,
            (char*) "scene0960_movie.slt"
        },
        {
            0,
            22,
            0,
            0,
            (char*) "scene0960_movie.eff"
        },
        {
            1,
            22,
            0,
            0,
            (char*) "scene1010.scn"
        },
        {
            0,
            22,
            0,
            0,
            (char*) "scene1010.slt"
        },
        {
            0,
            22,
            0,
            0,
            (char*) "scene1010.eff"
        },
        {
            0,
            5,
            0,
            0,
            (char*) "s1020.pss"
        },
        {
            0,
            22,
            0,
            0,
            (char*) "scene1020_movie.slt"
        },
        {
            0,
            22,
            0,
            0,
            (char*) "scene1020_movie.eff"
        },
        {
            0,
            5,
            0,
            0,
            (char*) "s1030.pss"
        },
        {
            0,
            22,
            0,
            0,
            (char*) "scene1030_movie.slt"
        },
        {
            0,
            22,
            0,
            0,
            (char*) "scene1030_movie.eff"
        },
        {
            0,
            5,
            0,
            0,
            (char*) "s1040.pss"
        },
        {
            0,
            22,
            0,
            0,
            (char*) "scene1040_movie.slt"
        },
        {
            0,
            22,
            0,
            0,
            (char*) "scene1040_movie.eff"
        },
        {
            1,
            22,
            0,
            0,
            (char*) "scene9001.scn"
        },
        {
            0,
            22,
            0,
            0,
            (char*) "scene9001.slt"
        },
        {
            0,
            22,
            0,
            0,
            (char*) "scene9001.eff"
        },
        {
            1,
            22,
            0,
            0,
            (char*) "scene9002.scn"
        },
        {
            0,
            22,
            0,
            0,
            (char*) "scene9002.slt"
        },
        {
            0,
            22,
            0,
            0,
            (char*) "scene9002.eff"
        },
        {
            0,
            5,
            0,
            0,
            (char*) "s9005.pss"
        },
        {
            0,
            22,
            0,
            0,
            (char*) "scene9005_movie.slt"
        },
        {
            0,
            22,
            0,
            0,
            (char*) "scene9005_movie.eff"
        },
        {
            1,
            22,
            0,
            0,
            (char*) "scene9101.scn"
        },
        {
            0,
            22,
            0,
            0,
            (char*) "scene9101.slt"
        },
        {
            0,
            22,
            0,
            0,
            (char*) "scene9101.eff"
        },
        {
            1,
            22,
            0,
            0,
            (char*) "scene9203.scn"
        },
        {
            0,
            22,
            0,
            0,
            (char*) "scene9203.slt"
        },
        {
            0,
            22,
            0,
            0,
            (char*) "scene9203.eff"
        },
        {
            1,
            22,
            0,
            0,
            (char*) "scene9204.scn"
        },
        {
            0,
            22,
            0,
            0,
            (char*) "scene9204.slt"
        },
        {
            0,
            22,
            0,
            0,
            (char*) "scene9204.eff"
        },
        {
            1,
            22,
            0,
            0,
            (char*) "scene9205.scn"
        },
        {
            0,
            22,
            0,
            0,
            (char*) "scene9205.slt"
        },
        {
            0,
            22,
            0,
            0,
            (char*) "scene9205.eff"
        },
        {
            1,
            22,
            0,
            0,
            (char*) "scene9206.scn"
        },
        {
            0,
            22,
            0,
            0,
            (char*) "scene9206.slt"
        },
        {
            0,
            22,
            0,
            0,
            (char*) "scene9206.eff"
        },
        {
            1,
            22,
            0,
            0,
            (char*) "scene9302.scn"
        },
        {
            0,
            22,
            0,
            0,
            (char*) "scene9302.slt"
        },
        {
            0,
            22,
            0,
            0,
            (char*) "scene9302.eff"
        },
        {
            1,
            22,
            0,
            0,
            (char*) "scene9303.scn"
        },
        {
            0,
            22,
            0,
            0,
            (char*) "scene9303.slt"
        },
        {
            0,
            22,
            0,
            0,
            (char*) "scene9303.eff"
        },
        {
            1,
            22,
            0,
            0,
            (char*) "scene9501.scn"
        },
        {
            0,
            22,
            0,
            0,
            (char*) "scene9501.slt"
        },
        {
            0,
            22,
            0,
            0,
            (char*) "scene9501.eff"
        },
        {
            0,
            5,
            0,
            0,
            (char*) "promo_48.pss"
        },
        {
            0,
            22,
            0,
            0,
            (char*) "promo_48.slt"
        },
        {
            0,
            22,
            0,
            0,
            (char*) "promo_48.eff"
        },
        {
            0,
            5,
            0,
            0,
            (char*) "promo_01.pss"
        },
        {
            0,
            22,
            0,
            0,
            (char*) "promo_01.slt"
        },
        {
            0,
            22,
            0,
            0,
            (char*) "promo_01.eff"
        },
        {
            0,
            5,
            0,
            0,
            (char*) "promo_02.pss"
        },
        {
            0,
            22,
            0,
            0,
            (char*) "promo_02.slt"
        },
        {
            0,
            22,
            0,
            0,
            (char*) "promo_02.eff"
        },
        {
            0,
            5,
            0,
            0,
            (char*) "promo_03.pss"
        },
        {
            0,
            22,
            0,
            0,
            (char*) "promo_03.slt"
        },
        {
            0,
            22,
            0,
            0,
            (char*) "promo_03.eff"
        },
        {
            0,
            5,
            0,
            0,
            (char*) "game_over.pss"
        },
        {
            0,
            22,
            0,
            0,
            (char*) "game_over.slt"
        },
        {
            0,
            22,
            0,
            0,
            (char*) "game_over.eff"
        },
        {
            0,
            5,
            0,
            0,
            (char*) "ubi_rogo.pss"
        },
        {
            0,
            22,
            0,
            0,
            (char*) "ubi_rogo.slt"
        },
        {
            0,
            22,
            0,
            0,
            (char*) "ubi_rogo.eff"
        },
        {
            0,
            23,
            0,
            0,
            (char*) "calibration.tm2"
        },
        {
            0,
            13,
            0,
            0,
            (char*) "VciTest.pk2"
        },
        {
            1,
            26,
            0,
            0,
            (char*) "chapter1.tm2"
        },
        {
            1,
            26,
            0,
            0,
            (char*) "chapter1_f.tm2"
        },
        {
            1,
            26,
            0,
            0,
            (char*) "chapter1_g.tm2"
        },
        {
            1,
            26,
            0,
            0,
            (char*) "chapter1_s.tm2"
        },
        {
            1,
            26,
            0,
            0,
            (char*) "chapter1_i.tm2"
        },
        {
            1,
            26,
            0,
            0,
            (char*) "chapter2.tm2"
        },
        {
            1,
            26,
            0,
            0,
            (char*) "chapter2_f.tm2"
        },
        {
            1,
            26,
            0,
            0,
            (char*) "chapter2_g.tm2"
        },
        {
            1,
            26,
            0,
            0,
            (char*) "chapter2_s.tm2"
        },
        {
            1,
            26,
            0,
            0,
            (char*) "chapter2_i.tm2"
        },
        {
            1,
            26,
            0,
            0,
            (char*) "chapter3.tm2"
        },
        {
            1,
            26,
            0,
            0,
            (char*) "chapter3_f.tm2"
        },
        {
            1,
            26,
            0,
            0,
            (char*) "chapter3_g.tm2"
        },
        {
            1,
            26,
            0,
            0,
            (char*) "chapter3_s.tm2"
        },
        {
            1,
            26,
            0,
            0,
            (char*) "chapter3_i.tm2"
        },
        {
            1,
            26,
            0,
            0,
            (char*) "chapter4.tm2"
        },
        {
            1,
            26,
            0,
            0,
            (char*) "chapter4_f.tm2"
        },
        {
            1,
            26,
            0,
            0,
            (char*) "chapter4_g.tm2"
        },
        {
            1,
            26,
            0,
            0,
            (char*) "chapter4_s.tm2"
        },
        {
            1,
            26,
            0,
            0,
            (char*) "chapter4_i.tm2"
        },
        {
            1,
            26,
            0,
            0,
            (char*) "chapter5.tm2"
        },
        {
            1,
            26,
            0,
            0,
            (char*) "chapter5_f.tm2"
        },
        {
            1,
            26,
            0,
            0,
            (char*) "chapter5_g.tm2"
        },
        {
            1,
            26,
            0,
            0,
            (char*) "chapter5_s.tm2"
        },
        {
            1,
            26,
            0,
            0,
            (char*) "chapter5_i.tm2"
        },
        {
            1,
            26,
            0,
            0,
            (char*) "chapter6.tm2"
        },
        {
            1,
            26,
            0,
            0,
            (char*) "chapter6_f.tm2"
        },
        {
            1,
            26,
            0,
            0,
            (char*) "chapter6_g.tm2"
        },
        {
            1,
            26,
            0,
            0,
            (char*) "chapter6_s.tm2"
        },
        {
            1,
            26,
            0,
            0,
            (char*) "chapter6_i.tm2"
        },
        {
            1,
            26,
            0,
            0,
            (char*) "chapter7.tm2"
        },
        {
            1,
            26,
            0,
            0,
            (char*) "chapter7_f.tm2"
        },
        {
            1,
            26,
            0,
            0,
            (char*) "chapter7_g.tm2"
        },
        {
            1,
            26,
            0,
            0,
            (char*) "chapter7_s.tm2"
        },
        {
            1,
            26,
            0,
            0,
            (char*) "chapter7_i.tm2"
        },
        {
            1,
            26,
            0,
            0,
            (char*) "chapter8.tm2"
        },
        {
            1,
            26,
            0,
            0,
            (char*) "chapter8_f.tm2"
        },
        {
            1,
            26,
            0,
            0,
            (char*) "chapter8_g.tm2"
        },
        {
            1,
            26,
            0,
            0,
            (char*) "chapter8_s.tm2"
        },
        {
            1,
            26,
            0,
            0,
            (char*) "chapter8_i.tm2"
        },
        {
            1,
            26,
            0,
            0,
            (char*) "chapter9.tm2"
        },
        {
            1,
            26,
            0,
            0,
            (char*) "chapter9_f.tm2"
        },
        {
            1,
            26,
            0,
            0,
            (char*) "chapter9_g.tm2"
        },
        {
            1,
            26,
            0,
            0,
            (char*) "chapter9_s.tm2"
        },
        {
            1,
            26,
            0,
            0,
            (char*) "chapter9_i.tm2"
        },
        {
            1,
            26,
            0,
            0,
            (char*) "chapter10.tm2"
        },
        {
            1,
            26,
            0,
            0,
            (char*) "chapter10_f.tm2"
        },
        {
            1,
            26,
            0,
            0,
            (char*) "chapter10_g.tm2"
        },
        {
            1,
            26,
            0,
            0,
            (char*) "chapter10_s.tm2"
        },
        {
            1,
            26,
            0,
            0,
            (char*) "chapter10_i.tm2"
        },
        {
            1,
            26,
            0,
            0,
            (char*) "chapter11.tm2"
        },
        {
            1,
            26,
            0,
            0,
            (char*) "chapter11_f.tm2"
        },
        {
            1,
            26,
            0,
            0,
            (char*) "chapter11_g.tm2"
        },
        {
            1,
            26,
            0,
            0,
            (char*) "chapter11_s.tm2"
        },
        {
            1,
            26,
            0,
            0,
            (char*) "chapter11_i.tm2"
        },
        {
            1,
            27,
            0,
            0,
            (char*) "item_000.tm2"
        },
        {
            1,
            27,
            0,
            0,
            (char*) "item_001.tm2"
        },
        {
            1,
            27,
            0,
            0,
            (char*) "item_002.tm2"
        },
        {
            1,
            27,
            0,
            0,
            (char*) "item_003.tm2"
        },
        {
            1,
            27,
            0,
            0,
            (char*) "item_004.tm2"
        },
        {
            1,
            27,
            0,
            0,
            (char*) "item_005.tm2"
        },
        {
            1,
            27,
            0,
            0,
            (char*) "item_006.tm2"
        },
        {
            1,
            27,
            0,
            0,
            (char*) "item_007.tm2"
        },
        {
            1,
            27,
            0,
            0,
            (char*) "item_008.tm2"
        },
        {
            1,
            27,
            0,
            0,
            (char*) "item_009.tm2"
        },
        {
            1,
            27,
            0,
            0,
            (char*) "item_010.tm2"
        },
        {
            1,
            27,
            0,
            0,
            (char*) "item_011.tm2"
        },
        {
            1,
            27,
            0,
            0,
            (char*) "item_012.tm2"
        },
        {
            1,
            27,
            0,
            0,
            (char*) "item_013.tm2"
        },
        {
            1,
            27,
            0,
            0,
            (char*) "item_014.tm2"
        },
        {
            1,
            27,
            0,
            0,
            (char*) "item_015.tm2"
        },
        {
            1,
            27,
            0,
            0,
            (char*) "item_016.tm2"
        },
        {
            1,
            27,
            0,
            0,
            (char*) "item_017.tm2"
        },
        {
            1,
            27,
            0,
            0,
            (char*) "item_018.tm2"
        },
        {
            1,
            27,
            0,
            0,
            (char*) "item_019.tm2"
        },
        {
            1,
            27,
            0,
            0,
            (char*) "item_020.tm2"
        },
        {
            1,
            27,
            0,
            0,
            (char*) "item_021.tm2"
        },
        {
            1,
            27,
            0,
            0,
            (char*) "item_022.tm2"
        },
        {
            1,
            27,
            0,
            0,
            (char*) "item_023.tm2"
        },
        {
            1,
            27,
            0,
            0,
            (char*) "item_024.tm2"
        },
        {
            1,
            27,
            0,
            0,
            (char*) "item_025.tm2"
        },
        {
            1,
            27,
            0,
            0,
            (char*) "item_026.tm2"
        },
        {
            1,
            27,
            0,
            0,
            (char*) "item_027.tm2"
        },
        {
            1,
            27,
            0,
            0,
            (char*) "item_028.tm2"
        },
        {
            1,
            27,
            0,
            0,
            (char*) "item_029.tm2"
        },
        {
            1,
            27,
            0,
            0,
            (char*) "item_030.tm2"
        },
        {
            1,
            27,
            0,
            0,
            (char*) "item_031.tm2"
        },
        {
            1,
            27,
            0,
            0,
            (char*) "item_032.tm2"
        },
        {
            1,
            27,
            0,
            0,
            (char*) "item_033.tm2"
        },
        {
            1,
            27,
            0,
            0,
            (char*) "item_034.tm2"
        },
        {
            1,
            27,
            0,
            0,
            (char*) "item_035.tm2"
        },
        {
            1,
            27,
            0,
            0,
            (char*) "item_036.tm2"
        },
        {
            1,
            27,
            0,
            0,
            (char*) "item_037.tm2"
        },
        {
            1,
            27,
            0,
            0,
            (char*) "item_038.tm2"
        },
        {
            1,
            27,
            0,
            0,
            (char*) "item_039.tm2"
        },
        {
            1,
            27,
            0,
            0,
            (char*) "item_040.tm2"
        },
        {
            1,
            27,
            0,
            0,
            (char*) "item_041.tm2"
        },
        {
            1,
            27,
            0,
            0,
            (char*) "item_042.tm2"
        },
        {
            1,
            27,
            0,
            0,
            (char*) "item_043.tm2"
        },
        {
            1,
            27,
            0,
            0,
            (char*) "item_044.tm2"
        },
        {
            1,
            27,
            0,
            0,
            (char*) "item_045.tm2"
        },
        {
            1,
            27,
            0,
            0,
            (char*) "item_046.tm2"
        },
        {
            1,
            27,
            0,
            0,
            (char*) "item_047.tm2"
        },
        {
            1,
            27,
            0,
            0,
            (char*) "item_048.tm2"
        },
        {
            1,
            27,
            0,
            0,
            (char*) "item_049.tm2"
        },
        {
            1,
            27,
            0,
            0,
            (char*) "item_050.tm2"
        },
        {
            1,
            27,
            0,
            0,
            (char*) "item_051.tm2"
        },
        {
            1,
            27,
            0,
            0,
            (char*) "item_052.tm2"
        },
        {
            1,
            27,
            0,
            0,
            (char*) "item_053.tm2"
        },
        {
            1,
            27,
            0,
            0,
            (char*) "item_054.tm2"
        },
        {
            1,
            27,
            0,
            0,
            (char*) "item_055.tm2"
        },
        {
            1,
            27,
            0,
            0,
            (char*) "item_056.tm2"
        },
        {
            1,
            27,
            0,
            0,
            (char*) "item_057.tm2"
        },
        {
            1,
            27,
            0,
            0,
            (char*) "item_058.tm2"
        },
        {
            1,
            27,
            0,
            0,
            (char*) "item_059.tm2"
        },
        {
            1,
            27,
            0,
            0,
            (char*) "item_060.tm2"
        },
        {
            1,
            27,
            0,
            0,
            (char*) "item_061.tm2"
        },
        {
            1,
            27,
            0,
            0,
            (char*) "item_062.tm2"
        },
        {
            1,
            27,
            0,
            0,
            (char*) "item_063.tm2"
        },
        {
            1,
            27,
            0,
            0,
            (char*) "item_064.tm2"
        },
        {
            1,
            27,
            0,
            0,
            (char*) "item_065.tm2"
        },
        {
            1,
            27,
            0,
            0,
            (char*) "item_066.tm2"
        },
        {
            1,
            27,
            0,
            0,
            (char*) "item_067.tm2"
        },
        {
            1,
            27,
            0,
            0,
            (char*) "item_068.tm2"
        },
        {
            1,
            27,
            0,
            0,
            (char*) "item_069.tm2"
        },
        {
            1,
            35,
            0,
            0,
            (char*) "doc_pocketbook_000.tm2"
        },
        {
            1,
            35,
            0,
            0,
            (char*) "doc_pocketbook_001.tm2"
        },
        {
            1,
            35,
            0,
            0,
            (char*) "doc_pocketbook_002.tm2"
        },
        {
            1,
            35,
            0,
            0,
            (char*) "doc_pocketbook_003.tm2"
        },
        {
            1,
            35,
            0,
            0,
            (char*) "doc_pocketbook_004.tm2"
        },
        {
            1,
            35,
            0,
            0,
            (char*) "doc_pocketbook_005.tm2"
        },
        {
            1,
            35,
            0,
            0,
            (char*) "doc_pocketbook_006.tm2"
        },
        {
            1,
            35,
            0,
            0,
            (char*) "doc_pocketbook_007.tm2"
        },
        {
            1,
            35,
            0,
            0,
            (char*) "doc_pocketbook_008.tm2"
        },
        {
            1,
            35,
            0,
            0,
            (char*) "doc_pocketbook_009.tm2"
        },
        {
            1,
            35,
            0,
            0,
            (char*) "doc_pocketbook_010.tm2"
        },
        {
            1,
            35,
            0,
            0,
            (char*) "doc_pocketbook_011.tm2"
        },
        {
            1,
            35,
            0,
            0,
            (char*) "doc_pocketbook_012.tm2"
        },
        {
            1,
            35,
            0,
            0,
            (char*) "doc_pocketbook_013.tm2"
        },
        {
            1,
            35,
            0,
            0,
            (char*) "doc_pocketbook_014.tm2"
        },
        {
            1,
            35,
            0,
            0,
            (char*) "doc_pocketbook_015.tm2"
        },
        {
            1,
            35,
            0,
            0,
            (char*) "doc_pocketbook_016.tm2"
        },
        {
            1,
            35,
            0,
            0,
            (char*) "doc_pocketbook_017.tm2"
        },
        {
            1,
            35,
            0,
            0,
            (char*) "doc_pocketbook_018.tm2"
        },
        {
            1,
            35,
            0,
            0,
            (char*) "doc_pocketbook_019.tm2"
        },
        {
            1,
            35,
            0,
            0,
            (char*) "doc_pocketbook_020.tm2"
        },
        {
            1,
            35,
            0,
            0,
            (char*) "doc_pocketbook_021.tm2"
        },
        {
            1,
            35,
            0,
            0,
            (char*) "doc_pocketbook_022.tm2"
        },
        {
            1,
            35,
            0,
            0,
            (char*) "doc_pocketbook_023.tm2"
        },
        {
            1,
            35,
            0,
            0,
            (char*) "doc_pocketbook_024.tm2"
        },
        {
            1,
            35,
            0,
            0,
            (char*) "doc_pocketbook_025.tm2"
        },
        {
            1,
            35,
            0,
            0,
            (char*) "doc_pocketbook_026.tm2"
        },
        {
            1,
            35,
            0,
            0,
            (char*) "doc_pocketbook_027.tm2"
        },
        {
            1,
            35,
            0,
            0,
            (char*) "doc_pocketbook_028.tm2"
        },
        {
            1,
            35,
            0,
            0,
            (char*) "doc_pocketbook_029.tm2"
        },
        {
            1,
            35,
            0,
            0,
            (char*) "doc_pocketbook_masumi04_broken.tm2"
        },
        {
            1,
            35,
            0,
            0,
            (char*) "doc_pocketbook_masumi04.tm2"
        },
        {
            1,
            35,
            0,
            0,
            (char*) "doc_pocketbook_030.tm2"
        },
        {
            1,
            35,
            0,
            0,
            (char*) "doc_pocketbook_031.tm2"
        },
        {
            1,
            35,
            0,
            0,
            (char*) "doc_pocketbook_032.tm2"
        },
        {
            1,
            35,
            0,
            0,
            (char*) "doc_pocketbook_033.tm2"
        },
        {
            1,
            35,
            0,
            0,
            (char*) "doc_pocketbook_034.tm2"
        },
        {
            1,
            35,
            0,
            0,
            (char*) "doc_pocketbook_035.tm2"
        },
        {
            1,
            35,
            0,
            0,
            (char*) "doc_pocketbook_036.tm2"
        },
        {
            1,
            35,
            0,
            0,
            (char*) "doc_pocketbook_037.tm2"
        },
        {
            1,
            35,
            0,
            0,
            (char*) "doc_pocketbook_038.tm2"
        },
        {
            1,
            35,
            0,
            0,
            (char*) "doc_pocketbook_039.tm2"
        },
        {
            1,
            36,
            0,
            0,
            (char*) "doc_scrap_000.tm2"
        },
        {
            1,
            36,
            0,
            0,
            (char*) "doc_scrap_001.tm2"
        },
        {
            1,
            36,
            0,
            0,
            (char*) "doc_scrap_002.tm2"
        },
        {
            1,
            36,
            0,
            0,
            (char*) "doc_scrap_003.tm2"
        },
        {
            1,
            36,
            0,
            0,
            (char*) "doc_scrap_004.tm2"
        },
        {
            1,
            36,
            0,
            0,
            (char*) "doc_scrap_005.tm2"
        },
        {
            1,
            36,
            0,
            0,
            (char*) "doc_scrap_006.tm2"
        },
        {
            1,
            36,
            0,
            0,
            (char*) "doc_scrap_007.tm2"
        },
        {
            1,
            36,
            0,
            0,
            (char*) "doc_scrap_008.tm2"
        },
        {
            1,
            36,
            0,
            0,
            (char*) "doc_scrap_009.tm2"
        },
        {
            1,
            36,
            0,
            0,
            (char*) "doc_scrap_010.tm2"
        },
        {
            1,
            36,
            0,
            0,
            (char*) "doc_scrap_011.tm2"
        },
        {
            1,
            36,
            0,
            0,
            (char*) "doc_scrap_012.tm2"
        },
        {
            1,
            36,
            0,
            0,
            (char*) "doc_scrap_013.tm2"
        },
        {
            1,
            36,
            0,
            0,
            (char*) "doc_scrap_014.tm2"
        },
        {
            1,
            36,
            0,
            0,
            (char*) "doc_scrap_015.tm2"
        },
        {
            1,
            36,
            0,
            0,
            (char*) "doc_scrap_016.tm2"
        },
        {
            1,
            36,
            0,
            0,
            (char*) "doc_scrap_017.tm2"
        },
        {
            1,
            36,
            0,
            0,
            (char*) "doc_scrap_018.tm2"
        },
        {
            1,
            36,
            0,
            0,
            (char*) "doc_scrap_019.tm2"
        },
        {
            1,
            36,
            0,
            0,
            (char*) "doc_scrap_020.tm2"
        },
        {
            1,
            36,
            0,
            0,
            (char*) "doc_scrap_021.tm2"
        },
        {
            1,
            36,
            0,
            0,
            (char*) "doc_scrap_022.tm2"
        },
        {
            1,
            36,
            0,
            0,
            (char*) "doc_scrap_023.tm2"
        },
        {
            1,
            36,
            0,
            0,
            (char*) "doc_scrap_024.tm2"
        },
        {
            1,
            36,
            0,
            0,
            (char*) "doc_scrap_025.tm2"
        },
        {
            1,
            36,
            0,
            0,
            (char*) "doc_scrap_026.tm2"
        },
        {
            1,
            36,
            0,
            0,
            (char*) "doc_scrap_027.tm2"
        },
        {
            1,
            36,
            0,
            0,
            (char*) "doc_scrap_028.tm2"
        },
        {
            1,
            36,
            0,
            0,
            (char*) "doc_scrap_029.tm2"
        },
        {
            1,
            36,
            0,
            0,
            (char*) "doc_scrap_030.tm2"
        },
        {
            1,
            36,
            0,
            0,
            (char*) "doc_scrap_031.tm2"
        },
        {
            1,
            36,
            0,
            0,
            (char*) "doc_scrap_032.tm2"
        },
        {
            1,
            36,
            0,
            0,
            (char*) "doc_scrap_033.tm2"
        },
        {
            1,
            36,
            0,
            0,
            (char*) "doc_scrap_034.tm2"
        },
        {
            1,
            36,
            0,
            0,
            (char*) "doc_scrap_035.tm2"
        },
        {
            1,
            36,
            0,
            0,
            (char*) "doc_scrap_036.tm2"
        },
        {
            1,
            36,
            0,
            0,
            (char*) "doc_scrap_037.tm2"
        },
        {
            1,
            36,
            0,
            0,
            (char*) "doc_scrap_038.tm2"
        },
        {
            1,
            36,
            0,
            0,
            (char*) "doc_scrap_039.tm2"
        },
        {
            1,
            36,
            0,
            0,
            (char*) "doc_scrap_040.tm2"
        },
        {
            1,
            36,
            0,
            0,
            (char*) "doc_scrap_041.tm2"
        },
        {
            1,
            37,
            0,
            0,
            (char*) "doc_oldbook_000.tm2"
        },
        {
            1,
            37,
            0,
            0,
            (char*) "doc_oldbook_001.tm2"
        },
        {
            1,
            37,
            0,
            0,
            (char*) "doc_oldbook_002.tm2"
        },
        {
            1,
            37,
            0,
            0,
            (char*) "doc_oldbook_003.tm2"
        },
        {
            1,
            37,
            0,
            0,
            (char*) "doc_oldbook_004.tm2"
        },
        {
            1,
            37,
            0,
            0,
            (char*) "doc_oldbook_005.tm2"
        },
        {
            1,
            37,
            0,
            0,
            (char*) "doc_oldbook_006.tm2"
        },
        {
            1,
            37,
            0,
            0,
            (char*) "doc_oldbook_007.tm2"
        },
        {
            1,
            37,
            0,
            0,
            (char*) "doc_oldbook_008.tm2"
        },
        {
            1,
            37,
            0,
            0,
            (char*) "doc_oldbook_009.tm2"
        },
        {
            1,
            37,
            0,
            0,
            (char*) "doc_oldbook_010.tm2"
        },
        {
            1,
            37,
            0,
            0,
            (char*) "doc_oldbook_011.tm2"
        },
        {
            1,
            37,
            0,
            0,
            (char*) "doc_oldbook_012.tm2"
        },
        {
            1,
            37,
            0,
            0,
            (char*) "doc_oldbook_013.tm2"
        },
        {
            1,
            37,
            0,
            0,
            (char*) "doc_oldbook_014.tm2"
        },
        {
            1,
            37,
            0,
            0,
            (char*) "doc_oldbook_015.tm2"
        },
        {
            1,
            37,
            0,
            0,
            (char*) "doc_oldbook_016.tm2"
        },
        {
            1,
            37,
            0,
            0,
            (char*) "doc_oldbook_017.tm2"
        },
        {
            1,
            37,
            0,
            0,
            (char*) "doc_oldbook_018.tm2"
        },
        {
            1,
            37,
            0,
            0,
            (char*) "doc_oldbook_019.tm2"
        },
        {
            1,
            37,
            0,
            0,
            (char*) "doc_oldbook_020.tm2"
        },
        {
            1,
            37,
            0,
            0,
            (char*) "doc_oldbook_021.tm2"
        },
        {
            1,
            37,
            0,
            0,
            (char*) "doc_oldbook_022.tm2"
        },
        {
            1,
            37,
            0,
            0,
            (char*) "doc_oldbook_023.tm2"
        },
        {
            1,
            37,
            0,
            0,
            (char*) "doc_oldbook_024.tm2"
        },
        {
            1,
            37,
            0,
            0,
            (char*) "doc_oldbook_025.tm2"
        },
        {
            1,
            37,
            0,
            0,
            (char*) "doc_oldbook_026.tm2"
        },
        {
            1,
            37,
            0,
            0,
            (char*) "doc_oldbook_027.tm2"
        },
        {
            1,
            37,
            0,
            0,
            (char*) "doc_oldbook_028.tm2"
        },
        {
            1,
            37,
            0,
            0,
            (char*) "doc_oldbook_029.tm2"
        },
        {
            1,
            37,
            0,
            0,
            (char*) "doc_oldbook_030.tm2"
        },
        {
            1,
            37,
            0,
            0,
            (char*) "doc_oldbook_031.tm2"
        },
        {
            1,
            37,
            0,
            0,
            (char*) "doc_oldbook_032.tm2"
        },
        {
            1,
            37,
            0,
            0,
            (char*) "doc_oldbook_033.tm2"
        },
        {
            1,
            37,
            0,
            0,
            (char*) "doc_oldbook_034.tm2"
        },
        {
            1,
            37,
            0,
            0,
            (char*) "doc_oldbook_035.tm2"
        },
        {
            1,
            37,
            0,
            0,
            (char*) "doc_oldbook_036.tm2"
        },
        {
            1,
            37,
            0,
            0,
            (char*) "doc_oldbook_037.tm2"
        },
        {
            1,
            37,
            0,
            0,
            (char*) "doc_oldbook_038.tm2"
        },
        {
            1,
            37,
            0,
            0,
            (char*) "doc_oldbook_039.tm2"
        },
        {
            1,
            39,
            0,
            0,
            (char*) "pht_dts.pk2"
        },
        {
            1,
            39,
            0,
            0,
            (char*) "pht_top_000.tm2"
        },
        {
            1,
            39,
            0,
            0,
            (char*) "pht_top_001.tm2"
        },
        {
            1,
            39,
            0,
            0,
            (char*) "pht_top_002.tm2"
        },
        {
            1,
            39,
            0,
            0,
            (char*) "pht_top_003.tm2"
        },
        {
            1,
            39,
            0,
            0,
            (char*) "pht_top_004.tm2"
        },
        {
            1,
            39,
            0,
            0,
            (char*) "pht_top_005.tm2"
        },
        {
            1,
            39,
            0,
            0,
            (char*) "pht_top_006.tm2"
        },
        {
            1,
            39,
            0,
            0,
            (char*) "pht_top_007.tm2"
        },
        {
            1,
            39,
            0,
            0,
            (char*) "pht_top_008.tm2"
        },
        {
            1,
            39,
            0,
            0,
            (char*) "pht_top_009.tm2"
        },
        {
            1,
            39,
            0,
            0,
            (char*) "pht_top_010.tm2"
        },
        {
            1,
            39,
            0,
            0,
            (char*) "pht_top_011.tm2"
        },
        {
            1,
            39,
            0,
            0,
            (char*) "pht_top_012.tm2"
        },
        {
            1,
            39,
            0,
            0,
            (char*) "pht_top_013.tm2"
        },
        {
            1,
            39,
            0,
            0,
            (char*) "pht_top_014.tm2"
        },
        {
            1,
            39,
            0,
            0,
            (char*) "pht_top_015.tm2"
        },
        {
            1,
            39,
            0,
            0,
            (char*) "pht_top_016.tm2"
        },
        {
            1,
            39,
            0,
            0,
            (char*) "pht_top_017.tm2"
        },
        {
            1,
            39,
            0,
            0,
            (char*) "pht_top_018.tm2"
        },
        {
            1,
            39,
            0,
            0,
            (char*) "pht_top_019.tm2"
        },
        {
            1,
            39,
            0,
            0,
            (char*) "pht_top_020.tm2"
        },
        {
            1,
            39,
            0,
            0,
            (char*) "pht_top_021.tm2"
        },
        {
            1,
            39,
            0,
            0,
            (char*) "pht_top_022.tm2"
        },
        {
            1,
            39,
            0,
            0,
            (char*) "pht_top_023.tm2"
        },
        {
            1,
            39,
            0,
            0,
            (char*) "pht_top_024.tm2"
        },
        {
            1,
            39,
            0,
            0,
            (char*) "pht_top_025.tm2"
        },
        {
            1,
            20,
            0,
            0,
            (char*) "pht_get_000.pk2"
        },
        {
            1,
            20,
            0,
            0,
            (char*) "pht_get_001.pk2"
        },
        {
            1,
            20,
            0,
            0,
            (char*) "pht_get_002.pk2"
        },
        {
            1,
            20,
            0,
            0,
            (char*) "pht_get_003.pk2"
        },
        {
            1,
            20,
            0,
            0,
            (char*) "pht_get_004.pk2"
        },
        {
            1,
            20,
            0,
            0,
            (char*) "pht_get_005.pk2"
        },
        {
            1,
            20,
            0,
            0,
            (char*) "pht_get_006.pk2"
        },
        {
            1,
            20,
            0,
            0,
            (char*) "pht_get_007.pk2"
        },
        {
            1,
            20,
            0,
            0,
            (char*) "pht_get_008.pk2"
        },
        {
            1,
            20,
            0,
            0,
            (char*) "pht_get_009.pk2"
        },
        {
            1,
            20,
            0,
            0,
            (char*) "pht_get_010.pk2"
        },
        {
            1,
            20,
            0,
            0,
            (char*) "pht_get_011.pk2"
        },
        {
            1,
            20,
            0,
            0,
            (char*) "pht_get_012.pk2"
        },
        {
            1,
            20,
            0,
            0,
            (char*) "pht_get_013.pk2"
        },
        {
            1,
            20,
            0,
            0,
            (char*) "pht_get_014.pk2"
        },
        {
            1,
            20,
            0,
            0,
            (char*) "pht_get_015.pk2"
        },
        {
            1,
            20,
            0,
            0,
            (char*) "pht_get_016.pk2"
        },
        {
            1,
            20,
            0,
            0,
            (char*) "pht_get_017.pk2"
        },
        {
            1,
            20,
            0,
            0,
            (char*) "pht_get_018.pk2"
        },
        {
            1,
            20,
            0,
            0,
            (char*) "pht_get_019.pk2"
        },
        {
            1,
            20,
            0,
            0,
            (char*) "pht_get_020.pk2"
        },
        {
            1,
            20,
            0,
            0,
            (char*) "pht_get_021.pk2"
        },
        {
            1,
            20,
            0,
            0,
            (char*) "pht_get_022.pk2"
        },
        {
            1,
            20,
            0,
            0,
            (char*) "pht_get_023.pk2"
        },
        {
            1,
            20,
            0,
            0,
            (char*) "pht_get_024.pk2"
        },
        {
            1,
            20,
            0,
            0,
            (char*) "pht_get_025.pk2"
        },
        {
            1,
            39,
            0,
            0,
            (char*) "pht_dtl_000.tm2"
        },
        {
            1,
            39,
            0,
            0,
            (char*) "pht_dtl_001.tm2"
        },
        {
            1,
            39,
            0,
            0,
            (char*) "pht_dtl_002.tm2"
        },
        {
            1,
            39,
            0,
            0,
            (char*) "pht_dtl_003.tm2"
        },
        {
            1,
            39,
            0,
            0,
            (char*) "pht_dtl_004.tm2"
        },
        {
            1,
            39,
            0,
            0,
            (char*) "pht_dtl_005.tm2"
        },
        {
            1,
            39,
            0,
            0,
            (char*) "pht_dtl_006.tm2"
        },
        {
            1,
            39,
            0,
            0,
            (char*) "pht_dtl_007.tm2"
        },
        {
            1,
            39,
            0,
            0,
            (char*) "pht_dtl_008.tm2"
        },
        {
            1,
            39,
            0,
            0,
            (char*) "pht_dtl_009.tm2"
        },
        {
            1,
            39,
            0,
            0,
            (char*) "pht_dtl_010.tm2"
        },
        {
            1,
            39,
            0,
            0,
            (char*) "pht_dtl_011.tm2"
        },
        {
            1,
            39,
            0,
            0,
            (char*) "pht_dtl_012.tm2"
        },
        {
            1,
            39,
            0,
            0,
            (char*) "pht_dtl_013.tm2"
        },
        {
            1,
            39,
            0,
            0,
            (char*) "pht_dtl_014.tm2"
        },
        {
            1,
            39,
            0,
            0,
            (char*) "pht_dtl_015.tm2"
        },
        {
            1,
            39,
            0,
            0,
            (char*) "pht_dtl_016.tm2"
        },
        {
            1,
            39,
            0,
            0,
            (char*) "pht_dtl_017.tm2"
        },
        {
            1,
            39,
            0,
            0,
            (char*) "pht_dtl_018.tm2"
        },
        {
            1,
            39,
            0,
            0,
            (char*) "pht_dtl_019.tm2"
        },
        {
            1,
            39,
            0,
            0,
            (char*) "pht_dtl_020.tm2"
        },
        {
            1,
            39,
            0,
            0,
            (char*) "pht_dtl_021.tm2"
        },
        {
            1,
            39,
            0,
            0,
            (char*) "pht_dtl_022.tm2"
        },
        {
            1,
            39,
            0,
            0,
            (char*) "pht_dtl_023.tm2"
        },
        {
            1,
            39,
            0,
            0,
            (char*) "pht_dtl_024.tm2"
        },
        {
            1,
            39,
            0,
            0,
            (char*) "pht_dtl_025.tm2"
        },
        {
            1,
            38,
            0,
            0,
            (char*) "pic_dts.pk2"
        },
        {
            1,
            38,
            0,
            0,
            (char*) "pic_get_000.tm2"
        },
        {
            1,
            38,
            0,
            0,
            (char*) "pic_get_001.tm2"
        },
        {
            1,
            38,
            0,
            0,
            (char*) "pic_get_002.tm2"
        },
        {
            1,
            38,
            0,
            0,
            (char*) "pic_get_003.tm2"
        },
        {
            1,
            38,
            0,
            0,
            (char*) "pic_get_004.tm2"
        },
        {
            1,
            38,
            0,
            0,
            (char*) "pic_get_005.tm2"
        },
        {
            1,
            38,
            0,
            0,
            (char*) "pic_get_006.tm2"
        },
        {
            1,
            38,
            0,
            0,
            (char*) "pic_get_007.tm2"
        },
        {
            1,
            38,
            0,
            0,
            (char*) "pic_get_008.tm2"
        },
        {
            1,
            38,
            0,
            0,
            (char*) "pic_get_009.tm2"
        },
        {
            1,
            38,
            0,
            0,
            (char*) "pic_dtl_000.tm2"
        },
        {
            1,
            38,
            0,
            0,
            (char*) "pic_dtl_001.tm2"
        },
        {
            1,
            38,
            0,
            0,
            (char*) "pic_dtl_002.tm2"
        },
        {
            1,
            38,
            0,
            0,
            (char*) "pic_dtl_003.tm2"
        },
        {
            1,
            38,
            0,
            0,
            (char*) "pic_dtl_004.tm2"
        },
        {
            1,
            38,
            0,
            0,
            (char*) "pic_dtl_005.tm2"
        },
        {
            1,
            38,
            0,
            0,
            (char*) "pic_dtl_006.tm2"
        },
        {
            1,
            38,
            0,
            0,
            (char*) "pic_dtl_007.tm2"
        },
        {
            1,
            38,
            0,
            0,
            (char*) "pic_dtl_008.tm2"
        },
        {
            1,
            38,
            0,
            0,
            (char*) "pic_dtl_009.tm2"
        },
        {
            1,
            43,
            0,
            0,
            (char*) "radio_crystal_01.pk2"
        },
        {
            1,
            43,
            0,
            0,
            (char*) "radio_crystal_02.pk2"
        },
        {
            1,
            43,
            0,
            0,
            (char*) "radio_crystal_03.pk2"
        },
        {
            1,
            43,
            0,
            0,
            (char*) "radio_crystal_04.pk2"
        },
        {
            1,
            43,
            0,
            0,
            (char*) "radio_crystal_05.pk2"
        },
        {
            1,
            43,
            0,
            0,
            (char*) "radio_crystal_06.pk2"
        },
        {
            1,
            43,
            0,
            0,
            (char*) "radio_crystal_07.pk2"
        },
        {
            1,
            43,
            0,
            0,
            (char*) "radio_crystal_08.pk2"
        },
        {
            1,
            43,
            0,
            0,
            (char*) "radio_crystal_09.pk2"
        },
        {
            1,
            43,
            0,
            0,
            (char*) "radio_crystal_10.pk2"
        },
        {
            1,
            43,
            0,
            0,
            (char*) "radio_crystal_11.pk2"
        },
        {
            1,
            43,
            0,
            0,
            (char*) "radio_crystal_12.pk2"
        },
        {
            1,
            43,
            0,
            0,
            (char*) "radio_crystal_13.pk2"
        },
        {
            1,
            43,
            0,
            0,
            (char*) "radio_crystal_14.pk2"
        },
        {
            1,
            43,
            0,
            0,
            (char*) "radio_crystal_15.pk2"
        },
        {
            1,
            43,
            0,
            0,
            (char*) "radio_crystal_16.pk2"
        },
        {
            1,
            43,
            0,
            0,
            (char*) "radio_crystal_17.pk2"
        },
        {
            1,
            43,
            0,
            0,
            (char*) "radio_crystal_18.pk2"
        },
        {
            1,
            43,
            0,
            0,
            (char*) "radio_crystal_19.pk2"
        },
        {
            1,
            43,
            0,
            0,
            (char*) "radio_crystal_20.pk2"
        },
        {
            1,
            43,
            0,
            0,
            (char*) "radio_crystal_21.pk2"
        },
        {
            1,
            43,
            0,
            0,
            (char*) "radio_crystal_22.pk2"
        },
        {
            1,
            43,
            0,
            0,
            (char*) "radio_crystal_23.pk2"
        },
        {
            1,
            43,
            0,
            0,
            (char*) "radio_crystal_24.pk2"
        },
        {
            1,
            43,
            0,
            0,
            (char*) "radio_crystal_25.pk2"
        },
        {
            1,
            43,
            0,
            0,
            (char*) "radio_crystal_26.pk2"
        },
        {
            1,
            43,
            0,
            0,
            (char*) "radio_crystal_27.pk2"
        },
        {
            1,
            43,
            0,
            0,
            (char*) "radio_crystal_28.pk2"
        },
        {
            1,
            43,
            0,
            0,
            (char*) "radio_crystal_29.pk2"
        },
        {
            1,
            43,
            0,
            0,
            (char*) "radio_crystal_30.pk2"
        },
        {
            1,
            43,
            0,
            0,
            (char*) "radio_crystal_31.pk2"
        },
        {
            1,
            43,
            0,
            0,
            (char*) "radio_crystal_32.pk2"
        },
        {
            1,
            43,
            0,
            0,
            (char*) "radio_crystal_33.pk2"
        },
        {
            1,
            43,
            0,
            0,
            (char*) "radio_crystal_34.pk2"
        },
        {
            1,
            43,
            0,
            0,
            (char*) "radio_crystal_35.pk2"
        },
        {
            1,
            43,
            0,
            0,
            (char*) "radio_crystal_36.pk2"
        },
        {
            1,
            43,
            0,
            0,
            (char*) "radio_crystal_37.pk2"
        },
        {
            1,
            43,
            0,
            0,
            (char*) "radio_crystal_38.pk2"
        },
        {
            1,
            43,
            0,
            0,
            (char*) "radio_crystal_39.pk2"
        },
        {
            1,
            43,
            0,
            0,
            (char*) "radio_crystal_40.pk2"
        },
        {
            1,
            43,
            0,
            0,
            (char*) "cry_001.tm2"
        },
        {
            1,
            43,
            0,
            0,
            (char*) "cry_002.tm2"
        },
        {
            1,
            43,
            0,
            0,
            (char*) "cry_003.tm2"
        },
        {
            1,
            43,
            0,
            0,
            (char*) "cry_004.tm2"
        },
        {
            1,
            43,
            0,
            0,
            (char*) "cry_005.tm2"
        },
        {
            1,
            43,
            0,
            0,
            (char*) "cry_006.tm2"
        },
        {
            1,
            43,
            0,
            0,
            (char*) "cry_007.tm2"
        },
        {
            1,
            43,
            0,
            0,
            (char*) "cry_008.tm2"
        },
        {
            1,
            43,
            0,
            0,
            (char*) "cry_009.tm2"
        },
        {
            1,
            43,
            0,
            0,
            (char*) "cry_010.tm2"
        },
        {
            1,
            43,
            0,
            0,
            (char*) "cry_011.tm2"
        },
        {
            1,
            43,
            0,
            0,
            (char*) "cry_012.tm2"
        },
        {
            1,
            43,
            0,
            0,
            (char*) "cry_013.tm2"
        },
        {
            1,
            43,
            0,
            0,
            (char*) "cry_014.tm2"
        },
        {
            1,
            43,
            0,
            0,
            (char*) "cry_015.tm2"
        },
        {
            1,
            43,
            0,
            0,
            (char*) "cry_016.tm2"
        },
        {
            1,
            43,
            0,
            0,
            (char*) "cry_017.tm2"
        },
        {
            1,
            43,
            0,
            0,
            (char*) "cry_018.tm2"
        },
        {
            1,
            43,
            0,
            0,
            (char*) "cry_019.tm2"
        },
        {
            1,
            43,
            0,
            0,
            (char*) "cry_020.tm2"
        },
        {
            1,
            43,
            0,
            0,
            (char*) "cry_021.tm2"
        },
        {
            1,
            43,
            0,
            0,
            (char*) "cry_022.tm2"
        },
        {
            1,
            43,
            0,
            0,
            (char*) "cry_023.tm2"
        },
        {
            1,
            43,
            0,
            0,
            (char*) "cry_024.tm2"
        },
        {
            1,
            43,
            0,
            0,
            (char*) "cry_025.tm2"
        },
        {
            1,
            43,
            0,
            0,
            (char*) "cry_026.tm2"
        },
        {
            1,
            43,
            0,
            0,
            (char*) "cry_027.tm2"
        },
        {
            1,
            43,
            0,
            0,
            (char*) "cry_028.tm2"
        },
        {
            1,
            43,
            0,
            0,
            (char*) "cry_029.tm2"
        },
        {
            1,
            43,
            0,
            0,
            (char*) "cry_030.tm2"
        },
        {
            1,
            43,
            0,
            0,
            (char*) "cry_031.tm2"
        },
        {
            1,
            43,
            0,
            0,
            (char*) "cry_032.tm2"
        },
        {
            1,
            43,
            0,
            0,
            (char*) "cry_033.tm2"
        },
        {
            1,
            43,
            0,
            0,
            (char*) "cry_034.tm2"
        },
        {
            1,
            43,
            0,
            0,
            (char*) "cry_035.tm2"
        },
        {
            1,
            43,
            0,
            0,
            (char*) "cry_036.tm2"
        },
        {
            1,
            43,
            0,
            0,
            (char*) "cry_037.tm2"
        },
        {
            1,
            43,
            0,
            0,
            (char*) "cry_038.tm2"
        },
        {
            1,
            43,
            0,
            0,
            (char*) "cry_039.tm2"
        },
        {
            1,
            43,
            0,
            0,
            (char*) "cry_040.tm2"
        },
        {
            1,
            45,
            0,
            0,
            (char*) "rei_pht_000.tm2"
        },
        {
            1,
            45,
            0,
            0,
            (char*) "rei_pht_001.tm2"
        },
        {
            1,
            45,
            0,
            0,
            (char*) "rei_pht_002.tm2"
        },
        {
            1,
            45,
            0,
            0,
            (char*) "rei_pht_003.tm2"
        },
        {
            1,
            45,
            0,
            0,
            (char*) "rei_pht_004.tm2"
        },
        {
            1,
            45,
            0,
            0,
            (char*) "rei_pht_005.tm2"
        },
        {
            1,
            45,
            0,
            0,
            (char*) "rei_pht_006.tm2"
        },
        {
            1,
            45,
            0,
            0,
            (char*) "rei_pht_007.tm2"
        },
        {
            1,
            45,
            0,
            0,
            (char*) "rei_pht_008.tm2"
        },
        {
            1,
            45,
            0,
            0,
            (char*) "rei_pht_009.tm2"
        },
        {
            1,
            45,
            0,
            0,
            (char*) "rei_pht_010.tm2"
        },
        {
            1,
            45,
            0,
            0,
            (char*) "rei_pht_011.tm2"
        },
        {
            1,
            45,
            0,
            0,
            (char*) "rei_pht_012.tm2"
        },
        {
            1,
            45,
            0,
            0,
            (char*) "rei_pht_013.tm2"
        },
        {
            1,
            45,
            0,
            0,
            (char*) "rei_pht_014.tm2"
        },
        {
            1,
            45,
            0,
            0,
            (char*) "rei_pht_015.tm2"
        },
        {
            1,
            45,
            0,
            0,
            (char*) "rei_pht_016.tm2"
        },
        {
            1,
            45,
            0,
            0,
            (char*) "rei_pht_017.tm2"
        },
        {
            1,
            45,
            0,
            0,
            (char*) "rei_pht_018.tm2"
        },
        {
            1,
            45,
            0,
            0,
            (char*) "rei_pht_019.tm2"
        },
        {
            1,
            45,
            0,
            0,
            (char*) "rei_pht_020.tm2"
        },
        {
            1,
            45,
            0,
            0,
            (char*) "rei_pht_021.tm2"
        },
        {
            1,
            45,
            0,
            0,
            (char*) "rei_pht_022.tm2"
        },
        {
            1,
            45,
            0,
            0,
            (char*) "rei_pht_023.tm2"
        },
        {
            1,
            45,
            0,
            0,
            (char*) "rei_pht_024.tm2"
        },
        {
            1,
            45,
            0,
            0,
            (char*) "rei_pht_026.tm2"
        },
        {
            1,
            45,
            0,
            0,
            (char*) "rei_pht_027.tm2"
        },
        {
            1,
            45,
            0,
            0,
            (char*) "rei_pht_028.tm2"
        },
        {
            1,
            45,
            0,
            0,
            (char*) "rei_pht_029.tm2"
        },
        {
            1,
            45,
            0,
            0,
            (char*) "rei_pht_030.tm2"
        },
        {
            1,
            45,
            0,
            0,
            (char*) "rei_pht_031.tm2"
        },
        {
            1,
            45,
            0,
            0,
            (char*) "rei_pht_032.tm2"
        },
        {
            1,
            45,
            0,
            0,
            (char*) "rei_pht_033.tm2"
        },
        {
            1,
            45,
            0,
            0,
            (char*) "rei_pht_034.tm2"
        },
        {
            1,
            45,
            0,
            0,
            (char*) "rei_pht_035.tm2"
        },
        {
            1,
            45,
            0,
            0,
            (char*) "rei_pht_036.tm2"
        },
        {
            1,
            45,
            0,
            0,
            (char*) "rei_pht_037.tm2"
        },
        {
            1,
            45,
            0,
            0,
            (char*) "rei_pht_038.tm2"
        },
        {
            1,
            45,
            0,
            0,
            (char*) "rei_pht_039.tm2"
        },
        {
            1,
            45,
            0,
            0,
            (char*) "rei_pht_040.tm2"
        },
        {
            1,
            45,
            0,
            0,
            (char*) "rei_pht_041.tm2"
        },
        {
            1,
            45,
            0,
            0,
            (char*) "rei_pht_042.tm2"
        },
        {
            1,
            45,
            0,
            0,
            (char*) "rei_pht_043.tm2"
        },
        {
            1,
            45,
            0,
            0,
            (char*) "rei_pht_044.tm2"
        },
        {
            1,
            45,
            0,
            0,
            (char*) "rei_pht_045.tm2"
        },
        {
            1,
            45,
            0,
            0,
            (char*) "rei_pht_046.tm2"
        },
        {
            1,
            45,
            0,
            0,
            (char*) "rei_pht_047.tm2"
        },
        {
            1,
            45,
            0,
            0,
            (char*) "rei_pht_048.tm2"
        },
        {
            1,
            45,
            0,
            0,
            (char*) "rei_pht_049.tm2"
        },
        {
            1,
            45,
            0,
            0,
            (char*) "rei_pht_050.tm2"
        },
        {
            1,
            45,
            0,
            0,
            (char*) "rei_pht_051.tm2"
        },
        {
            1,
            45,
            0,
            0,
            (char*) "rei_pht_052.tm2"
        },
        {
            1,
            45,
            0,
            0,
            (char*) "rei_pht_053.tm2"
        },
        {
            1,
            45,
            0,
            0,
            (char*) "rei_pht_054.tm2"
        },
        {
            1,
            45,
            0,
            0,
            (char*) "rei_pht_055.tm2"
        },
        {
            1,
            45,
            0,
            0,
            (char*) "rei_pht_056.tm2"
        },
        {
            1,
            45,
            0,
            0,
            (char*) "rei_pht_057.tm2"
        },
        {
            1,
            45,
            0,
            0,
            (char*) "rei_pht_058.tm2"
        },
        {
            1,
            45,
            0,
            0,
            (char*) "rei_pht_059.tm2"
        },
        {
            1,
            45,
            0,
            0,
            (char*) "rei_pht_060.tm2"
        },
        {
            1,
            45,
            0,
            0,
            (char*) "rei_pht_061.tm2"
        },
        {
            1,
            45,
            0,
            0,
            (char*) "rei_pht_062.tm2"
        },
        {
            1,
            45,
            0,
            0,
            (char*) "rei_pht_063.tm2"
        },
        {
            1,
            45,
            0,
            0,
            (char*) "rei_pht_064.tm2"
        },
        {
            1,
            45,
            0,
            0,
            (char*) "rei_pht_065.tm2"
        },
        {
            1,
            45,
            0,
            0,
            (char*) "rei_pht_066.tm2"
        },
        {
            1,
            45,
            0,
            0,
            (char*) "rei_pht_067.tm2"
        },
        {
            1,
            45,
            0,
            0,
            (char*) "rei_pht_068.tm2"
        },
        {
            1,
            45,
            0,
            0,
            (char*) "rei_pht_069.tm2"
        },
        {
            1,
            45,
            0,
            0,
            (char*) "rei_pht_070.tm2"
        },
        {
            1,
            45,
            0,
            0,
            (char*) "rei_pht_071.tm2"
        },
        {
            1,
            45,
            0,
            0,
            (char*) "rei_pht_072.tm2"
        },
        {
            1,
            45,
            0,
            0,
            (char*) "rei_pht_073.tm2"
        },
        {
            1,
            45,
            0,
            0,
            (char*) "rei_pht_074.tm2"
        },
        {
            1,
            45,
            0,
            0,
            (char*) "rei_pht_075.tm2"
        },
        {
            1,
            45,
            0,
            0,
            (char*) "rei_pht_076.tm2"
        },
        {
            1,
            45,
            0,
            0,
            (char*) "rei_pht_077.tm2"
        },
        {
            1,
            45,
            0,
            0,
            (char*) "rei_pht_078.tm2"
        },
        {
            1,
            45,
            0,
            0,
            (char*) "rei_pht_079.tm2"
        },
        {
            1,
            45,
            0,
            0,
            (char*) "rei_pht_080.tm2"
        },
        {
            1,
            45,
            0,
            0,
            (char*) "rei_pht_081.tm2"
        },
        {
            1,
            45,
            0,
            0,
            (char*) "rei_pht_082.tm2"
        },
        {
            1,
            45,
            0,
            0,
            (char*) "rei_pht_083.tm2"
        },
        {
            1,
            45,
            0,
            0,
            (char*) "rei_pht_084.tm2"
        },
        {
            1,
            45,
            0,
            0,
            (char*) "rei_pht_085.tm2"
        },
        {
            1,
            45,
            0,
            0,
            (char*) "rei_pht_086.tm2"
        },
        {
            1,
            45,
            0,
            0,
            (char*) "rei_pht_087.tm2"
        },
        {
            1,
            45,
            0,
            0,
            (char*) "rei_pht_088.tm2"
        },
        {
            1,
            45,
            0,
            0,
            (char*) "rei_pht_089.tm2"
        },
        {
            1,
            45,
            0,
            0,
            (char*) "rei_pht_090.tm2"
        },
        {
            1,
            45,
            0,
            0,
            (char*) "rei_pht_091.tm2"
        },
        {
            1,
            45,
            0,
            0,
            (char*) "rei_pht_092.tm2"
        },
        {
            1,
            45,
            0,
            0,
            (char*) "rei_pht_093.tm2"
        },
        {
            1,
            45,
            0,
            0,
            (char*) "rei_pht_094.tm2"
        },
        {
            1,
            45,
            0,
            0,
            (char*) "rei_pht_095.tm2"
        },
        {
            1,
            45,
            0,
            0,
            (char*) "rei_pht_096.tm2"
        },
        {
            1,
            45,
            0,
            0,
            (char*) "rei_pht_097.tm2"
        },
        {
            1,
            45,
            0,
            0,
            (char*) "rei_pht_098.tm2"
        },
        {
            1,
            45,
            0,
            0,
            (char*) "rei_pht_099.tm2"
        },
        {
            1,
            45,
            0,
            0,
            (char*) "rei_pht_100.tm2"
        },
        {
            1,
            45,
            0,
            0,
            (char*) "rei_pht_101.tm2"
        },
        {
            1,
            45,
            0,
            0,
            (char*) "rei_pht_102.tm2"
        },
        {
            1,
            45,
            0,
            0,
            (char*) "rei_pht_103.tm2"
        },
        {
            1,
            45,
            0,
            0,
            (char*) "rei_pht_104.tm2"
        },
        {
            1,
            45,
            0,
            0,
            (char*) "rei_pht_105.tm2"
        },
        {
            1,
            45,
            0,
            0,
            (char*) "rei_pht_106.tm2"
        },
        {
            1,
            45,
            0,
            0,
            (char*) "rei_pht_107.tm2"
        },
        {
            1,
            45,
            0,
            0,
};