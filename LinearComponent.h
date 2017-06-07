#ifndef LINEARCOMPONENT_H
#define LINEARCOMPONENT_H

#include <string>
#include "json/json.h"
#include "Cline.h"
#include "Floor.h"
#include "Segment.h"
using namespace std;

class LinearComponent
{
public:
    LinearComponent();
    string name="";
    vector<Cline> clines;
    vector<Floor> floors;
    vector<Segment> segments;
};

#endif // LINEARCOMPONENT_H
