#ifndef LAYOUT_H
#define LAYOUT_H

#include "Floor.h"
#include "Cline.h"

class Layout
{
public:
    Layout();
    Json::Value toJson();

    map <string,Floor> floors;
    map <string,Cline> clines;
};

#endif // LAYOUT_H
