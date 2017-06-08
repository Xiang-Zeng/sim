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
    Json::Value toJson();

    string name="";
    vector<string> clines;
    vector<string> floors;
    vector<Segment> segments;
};

#endif // LINEARCOMPONENT_H
