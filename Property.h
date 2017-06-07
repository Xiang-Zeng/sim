#ifndef PROPERTY_H
#define PROPERTY_H

#include "Material.h"
#include "FrameSection.h"

class Property
{
public:
    Property();
    Json::Value toJson();

    vector<Material> materials;
    vector<FrameSection> framesections;
};

#endif // PROPERTY_H
