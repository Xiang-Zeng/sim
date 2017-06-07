#include "GeneralInformation.h"

GeneralInformation::GeneralInformation()
{

}

Json::Value GeneralInformation::toJson(){
    Json::Value json;
    json["name"]=Json::Value(name);
    json["revision"]=Json::Value(revision);
    json["type"]=Json::Value(type);
    json["year"]=Json::Value(year);
    json["location"]=Json::Value(location);
    json["engineer"]=Json::Value(engineer);
    json["DOI"]=Json::Value(DOI);
    return json;
}
