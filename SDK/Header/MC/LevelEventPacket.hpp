// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Packet.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class LevelEventPacket : public Packet {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_LEVELEVENTPACKET
public:
    class LevelEventPacket& operator=(class LevelEventPacket const&) = delete;
    LevelEventPacket(class LevelEventPacket const&) = delete;
#endif

public:
    /*0*/ virtual ~LevelEventPacket();
    /*1*/ virtual enum MinecraftPacketIds getId() const;
    /*2*/ virtual std::string getName() const;
    /*3*/ virtual void write(class BinaryStream&) const;
    /*4*/ virtual bool disallowBatching() const;
    /*5*/ virtual enum StreamReadResult _read(class ReadOnlyBinaryStream&);
    /*
    inline  ~LevelEventPacket(){
         (LevelEventPacket::*rv)();
        *((void**)&rv) = dlsym("??1LevelEventPacket@@UEAA@XZ");
        return (this->*rv)();
    }
    */
    MCAPI LevelEventPacket(enum LevelEvent, class Vec3 const&, int);
    MCAPI LevelEventPacket(enum LevelEvent, float, float, float, int);
    MCAPI LevelEventPacket();

protected:

private:

};