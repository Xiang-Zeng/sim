#ifndef STRUCTURALINFORMATIONMODEL_H
#define STRUCTURALINFORMATIONMODEL_H

#include "GeneralInformation.h"
#include "StructuralInformation.h"
#include "json/json.h"
#include <fstream>

class StructuralInformationModel
{
public:
    StructuralInformationModel();
    Json::Value toJson();
    void WriteJson(string path);

    GeneralInformation  gi;
    StructuralInformation  si;


};

#endif // STRUCTURALINFORMATIONMODEL_H
