#ifndef MATERIAL_H
#define MATERIAL_H

#include <string>
#include "json/json.h"
using namespace std;

class Material
{
public:
    Material();
    string name="";
    string type="";
    double fpc=0.0;
    double rho=0.0;
    double E=0.0;
    double nu=0.0;
    double fu=0.0;
    double epsr=0.0;
    double fy=0.0;

};

#endif // MATERIAL_H
