#ifndef FLOOR_H
#define FLOOR_H

#include <string>
#include "json/json.h"
using namespace std;

class Floor
{
public:
    Floor();
    Json::Value toJson();

    string name="";
    double elevation=0.0;
};

#endif // FLOOR_H
