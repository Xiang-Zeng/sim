#include "Layout.h"

Layout::Layout()
{

}

Json::Value Layout::toJson(){
    Json::Value j;
    for(unsigned int i=0;i<floors.size();i++){
        j["floors"].append(floors[i].toJson());
    }

    for(unsigned int i=0;i<clines.size();i++){
        j["clines"].append(clines[i].toJson());
    }

    return j;
}
