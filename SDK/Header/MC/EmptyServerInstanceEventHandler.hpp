// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class EmptyServerInstanceEventHandler {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_EMPTYSERVERINSTANCEEVENTHANDLER
public:
    class EmptyServerInstanceEventHandler& operator=(class EmptyServerInstanceEventHandler const&) = delete;
    EmptyServerInstanceEventHandler(class EmptyServerInstanceEventHandler const&) = delete;
    EmptyServerInstanceEventHandler() = delete;
#endif

public:
    /*0*/ virtual ~EmptyServerInstanceEventHandler();
    /*1*/ virtual enum HandlerResult handleLeaveGameDone(struct ServerInstanceEvent const&);

protected:

private:

};