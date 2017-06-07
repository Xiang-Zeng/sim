#ifndef SLABSECTION_H
#define SLABSECTION_H

#include <string>
#include <Section.h>
using namespace std;

class SlabSection : public Section
{
public:
    SlabSection();

    string material="";
    double thickness=0.0;

};

#endif // SLABSECTION_H
