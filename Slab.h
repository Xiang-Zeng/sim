#ifndef SLAB_H
#define SLAB_H

#include <string>
#include "json/json.h"
using namespace std;

class Slab
{
public:
    Slab();
    Json::Value toJson();

    string name="";
    string floor="";
    vector<string> clines;
    string section="";

};

#endif // SLAB_H
