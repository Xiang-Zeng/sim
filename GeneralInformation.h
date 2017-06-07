#ifndef GENERALINFORMATION_H
#define GENERALINFORMATION_H

#include <string>
#include "json/json.h"
using namespace std;

class GeneralInformation
{
public:
    GeneralInformation();

    Json::Value toJson();

    string name="";
    string revision="";
    string type="";
    int year=0;
    string location="";
    string engineer="";
    string DOI="";
};

#endif // GENERALINFORMATION_H
