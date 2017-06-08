#include "Segment.h"

Segment::Segment()
{

}

Json::Value Segment::toJson(){
    Json::Value j;
    j["section"]=Json::Value(section);
    j["ratio"].append(Json::Value(ratio[0]));
    j["ratio"].append(Json::Value(ratio[1]));
    j["angle"]=Json::Value(angle);

    return j;
}

