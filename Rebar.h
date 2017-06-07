#ifndef REBAR_H
#define REBAR_H

#include "Material.h"

class Rebar
{
public:
    Rebar();

    Material * material;
    int nBarsDepth=0;
    int nBarsWidth=0;
    double barArea=0.0;
    double cover=0.0;
    double spacing =0.0;
};

#endif // REBAR_H
