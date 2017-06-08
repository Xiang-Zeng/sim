#ifndef GEOMETRY_H
#define GEOMETRY_H

#include "Column.h"
#include "Beam.h"
#include "Slab.h"

class Geometry
{
public:
    Geometry();
    Json::Value toJson();

    map<string,Column> columns;
    map<string,Beam> beams;
    map<string,Slab> slabs;



};

#endif // GEOMETRY_H
