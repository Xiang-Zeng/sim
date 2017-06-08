#ifndef FRAMESECTION_H
#define FRAMESECTION_H

#include "Section.h"
#include "Rebar.h"

class FrameSection : public Section
{
public:
    FrameSection();
    Json::Value toJson();

    string database="";
    string shape="";
    string material="";
    double top_flange_width=0.0;
    double top_flange_thickness=0.0;
    double web_thickness=0.0;
    double bottom_flange_width=0.0;
    double bottom_flange_thickness=0.0;
    double fillet_radius=0.0;
    double selfweight=0.0;
    double depth=0.0;
    double width=0.0;
    double flange_thickness=0.0;

    Rebar *longRebar=NULL;
    Rebar *transRebar=NULL;
};

#endif // FRAMESECTION_H
