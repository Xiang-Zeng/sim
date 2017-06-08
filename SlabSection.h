#ifndef SLABSECTION_H
#define SLABSECTION_H

#include <string>
#include <Section.h>
using namespace std;

class SlabSection : public Section
{
public:
    SlabSection();
    Json::Value toJson();

    string material="";
    double thickness=0.0;
    string longitudinal_rebar_material="";
    int longitudinal_num_bars_depth=0;

};

#endif // SLABSECTION_H
