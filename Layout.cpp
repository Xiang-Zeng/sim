#include "Layout.h"

Layout::Layout()
{

}

Json::Value Layout::toJson(){
    Json::Value j;
    for(map<string,Floor>::iterator it=floors.begin(); it!=floors.end();it++)
    {
        j["floors"].append(it->second.toJson());
    }

    for(map<string,Cline>::iterator it=clines.begin(); it!=clines.end();it++)
    {
        j["clines"].append(it->second.toJson());
    }

    return j;
}
