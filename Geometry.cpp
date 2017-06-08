#include "Geometry.h"

Geometry::Geometry()
{

}

Json::Value Geometry::toJson(){
    Json::Value j;
    for(map<string,Column>::iterator it=columns.begin(); it!=columns.end();it++)
    {
        j["columns"].append(it->second.toJson());
    }

    for(map<string,Beam>::iterator it=beams.begin(); it!=beams.end();it++)
    {
        j["beams"].append(it->second.toJson());
    }

    for(map<string,Slab>::iterator it=slabs.begin(); it!=slabs.end();it++)
    {
        j["slabs"].append(it->second.toJson());
    }

    return j;
}


