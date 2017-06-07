#ifndef GEOMETRY_H
#define GEOMETRY_H

#include "Column.h"
#include "Beam.h"

class Geometry
{
public:
    Geometry();
    Json::Value toJson();

    vector<Column> columns;
    vector<Beam> beams;

};

#endif // GEOMETRY_H
