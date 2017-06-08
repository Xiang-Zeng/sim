#ifndef PROPERTY_H
#define PROPERTY_H

#include "Material.h"
#include "FrameSection.h"
#include "SlabSection.h"

class Property
{
public:
    Property();
    Json::Value toJson();

    map<string,Material> materials;
    map<string,FrameSection> framesections;
    map<string,SlabSection> slabsections;
};

#endif // PROPERTY_H
