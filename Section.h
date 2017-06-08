#ifndef SECTION_H
#define SECTION_H

#include <string>
#include "json/json.h"
using namespace std;

class Section
{
public:
    Section();
    Json::Value toJson();

    string name="";
    string type="";

};

#endif // SECTION_H
