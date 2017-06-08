#ifndef SEGMENT_H
#define SEGMENT_H

#include "Section.h"

class Segment
{
public:
    Segment();
    Json::Value toJson();

    string section="";
    double ratio[2]={0.0,0.0};
    double angle=0.0;
};

#endif // SEGMENT_H
