#include "Slab.h"

Slab::Slab()
{

}

Json::Value Slab::toJson(){
    Json::Value j;
    j["name"]=Json::Value(name);
    j["floor"]=Json::Value(floor);
    j["section"]=Json::Value(section);

    for(unsigned int i=0;i<clines.size();++i)
        j["clines"].append(Json::Value(clines[i]));


    return j;
}
