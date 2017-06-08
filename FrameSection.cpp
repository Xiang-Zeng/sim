#include "FrameSection.h"

FrameSection::FrameSection()
{

}

Json::Value FrameSection::toJson(){
    Json::Value j;
    j["name"]=Json::Value(name);
    j["type"]=Json::Value(type);
    j["database"]=Json::Value(database);
    j["shape"]=Json::Value(shape);
    j["material"]=Json::Value(material);
    j["top_flange_width"]=Json::Value(top_flange_width);
    j["top_flange_thickness"]=Json::Value(top_flange_thickness);
    j["web_thickness"]=Json::Value(web_thickness);
    j["bottom_flange_width"]=Json::Value(bottom_flange_width);
    j["bottom_flange_thickness"]=Json::Value(bottom_flange_thickness);
    j["fillet_radius"]=Json::Value(fillet_radius);
    j["selfweight"]=Json::Value(selfweight);
    j["depth"]=Json::Value(depth);
    j["width"]=Json::Value(width);
    j["flange_thickness"]=Json::Value(flange_thickness);

    return j;
}
