// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Feature.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class HellFireFeature : public Feature {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_HELLFIREFEATURE
public:
    class HellFireFeature& operator=(class HellFireFeature const&) = delete;
    HellFireFeature(class HellFireFeature const&) = delete;
    HellFireFeature() = delete;
#endif

public:
    /*0*/ virtual ~HellFireFeature();
    /*1*/ virtual void __unk_vfn_0();
    /*2*/ virtual ~HellFireFeature();
    /*
    inline  ~HellFireFeature(){
         (HellFireFeature::*rv)();
        *((void**)&rv) = dlsym("??1HellFireFeature@@UEAA@XZ");
        return (this->*rv)();
    }
    */

protected:

private:

};