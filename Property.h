#ifndef PROPERTY_H
#define PROPERTY_H

#include "Material.h"
#include "FrameSection.h"

class Property
{
public:
    Property();
    vector<Material> materials;
    vector<FrameSection> framesections;
};

#endif // PROPERTY_H
