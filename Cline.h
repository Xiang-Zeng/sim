#ifndef CLINE_H
#define CLINE_H

#include <string>
#include "json/json.h"
using namespace std;

class Cline
{
public:
    Cline();

    string name="";
    double location[2]={0,0};
};

#endif // CLINE_H
