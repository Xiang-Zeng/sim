#include "Section.h"

Section::Section()
{

}

Json::Value Section::toJson(){
    Json::Value j;
    j["name"]=Json::Value(name);
    j["type"]=Json::Value(type);

    return j;
}
