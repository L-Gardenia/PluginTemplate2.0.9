// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class ResourceInformation {

#define AFTER_EXTRA
// Add Member There
public:
enum ResourceType;

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_RESOURCEINFORMATION
public:
    class ResourceInformation& operator=(class ResourceInformation const&) = delete;
    ResourceInformation() = delete;
#endif

public:
    MCAPI ResourceInformation(class ResourceInformation const&);
    MCAPI ResourceInformation(std::string const&, class SemVersion const&, class mce::UUID const&, std::string const&, std::string const&);
    MCAPI ResourceInformation(std::string const&, class SemVersion const&, class mce::UUID const&, enum ResourceInformation::ResourceType, std::string const&);
    MCAPI bool satisfies(struct PackIdVersion const&) const;
    MCAPI ~ResourceInformation();
    MCAPI static enum ResourceInformation::ResourceType ResourceTypeFromString(std::string const&);
    MCAPI static std::string const& StringFromResourceType(enum ResourceInformation::ResourceType);

protected:

private:

};