#ifndef STRUCTURALINFORMATION_H
#define STRUCTURALINFORMATION_H

#include "json/json.h"
#include "Units.h"
#include "Layout.h"
#include "Geometry.h"
#include "Property.h"

using namespace std;

class StructuralInformation
{
public:
    StructuralInformation();
    Json::Value toJson();

    string type="";
    Units * units;
    Layout * layout;
    Property * property;
    Geometry * geometry;


};

#endif // STRUCTURALINFORMATION_H
