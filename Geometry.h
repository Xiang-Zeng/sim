#ifndef GEOMETRY_H
#define GEOMETRY_H

#include "Column.h"
#include "Beam.h"

class Geometry
{
public:
    Geometry();

    vector<Column> columns;
    vector<Beam> beams;

};

#endif // GEOMETRY_H
