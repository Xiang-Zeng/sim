#ifndef FRAMESECTION_H
#define FRAMESECTION_H

#include "Section.h"
#include "Rebar.h"

class FrameSection : public Section
{
public:
    FrameSection();
    double depth=0.0;
    double width=0.0;
    Rebar *longRebar=NULL;
    Rebar *transRebar=NULL;
};

#endif // FRAMESECTION_H
