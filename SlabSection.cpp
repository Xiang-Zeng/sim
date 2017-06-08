#include "SlabSection.h"

SlabSection::SlabSection()
{

}

Json::Value SlabSection::toJson(){
    Json::Value j;
    j["name"]=Json::Value(name);
    j["type"]=Json::Value(type);
    j["material"]=Json::Value(material);
    j["thickness"]=Json::Value(thickness);
    j["longitudinal_rebar_material"]=Json::Value(longitudinal_rebar_material);
    j["longitudinal_num_bars_depth"]=Json::Value(longitudinal_num_bars_depth);
    return j;
}
