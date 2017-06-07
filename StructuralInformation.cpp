#include "StructuralInformation.h"

StructuralInformation::StructuralInformation()
{
    units = new Units;
    layout = new Layout;
    property = new Property;
    geometry = new Geometry;

}

StructuralInformation::~StructuralInformation()
{
    delete units;
    delete layout;
    delete property;
    delete geometry;
}

Json::Value StructuralInformation::toJson(){
    Json::Value j;
    j["type"]=Json::Value(type);
    j["units"]=units->toJson();
    j["layout"]=layout->toJson();
    j["property"]=property->toJson();
    j["geometry"]=geometry->toJson();

    return j;
}
