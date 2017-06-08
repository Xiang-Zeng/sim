#include "Property.h"

Property::Property()
{

}

Json::Value Property::toJson(){
    Json::Value j;
    for(map<string,Material>::iterator it=materials.begin(); it!=materials.end();it++)
    {
        j["materials"].append(it->second.toJson());
    }

    for(map<string,FrameSection>::iterator it=framesections.begin(); it!=framesections.end();it++)
    {
        j["framesections"].append(it->second.toJson());
    }

    for(map<string,SlabSection>::iterator it=slabsections.begin(); it!=slabsections.end();it++)
    {
        j["slabsections"].append(it->second.toJson());
    }

    return j;
}


