#include "LinearComponent.h"

LinearComponent::LinearComponent()
{

}


Json::Value LinearComponent::toJson(){
    Json::Value j;
    j["name"]=Json::Value(name);

    for(unsigned int i=0;i<clines.size();++i)
        j["clines"].append(Json::Value(clines[i]));

    for(unsigned int i=0;i<floors.size();++i)
        j["floors"].append(Json::Value(floors[i]));

    for(unsigned int i=0;i<segments.size();i++)
    {
        j["segments"].append(segments[i].toJson());
    }

    return j;
}


