// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

namespace GameTypeConv {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
    MCAPI std::string gameTypeToNonLocString(enum GameType);
    MCAPI std::string gameTypeToString(enum GameType);
    MCAPI enum GameType intToGameType(int);
    MCAPI enum GameType stringToGameType(std::string const&);

};