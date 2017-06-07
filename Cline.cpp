#include "Cline.h"

Cline::Cline()
{

}

Json::Value Cline::toJson(){
    Json::Value j;
    j["name"]=Json::Value(name);
    j["location"].append(Json::Value(location[0]));
    j["location"].append(Json::Value(location[1]));

    return j;
}
