#ifndef FATALSTACK_LOGGING_H
#define FATALSTACK_LOGGING_H

#include "game/sgd.h"

#include "spdlog/sinks/basic_file_sink.h"
#include "spdlog/sinks/stdout_color_sinks.h"
#include "spdlog/spdlog.h"

const std::string PROGRAM_LOGGER = "program";
inline std::shared_ptr<spdlog::logger> programLogger;

void InitLogging();
void PrintBlockInfo(SGDPROCUNITHEADER *pHead, SGDFILEHEADER* pSGDTop);
void PrintUnknownBlock();
void PrintEmptyBlock();
void PrintBlockBeginning(int i);
void PrintBlockEnding(int i);
void PrintSGDBeginning(int i);
void PrintSGDEnding(int i);

#endif //FATALSTACK_LOGGING_H
