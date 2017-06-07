#ifndef LAYOUT_H
#define LAYOUT_H

#include "Floor.h"
#include "Cline.h"

class Layout
{
public:
    Layout();

    vector <Floor> floors;
    vector <Cline> clines;
};

#endif // LAYOUT_H
