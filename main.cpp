#include <iostream>
#include <fstream>
#include <vector>

#include "SimFileReader.h"
#include "StructuralInformationModel.h"
using namespace std;


int main()
{
    string path="input.dat";
    SimFileReader sfr(path);
    StructuralInformationModel* sim = new StructuralInformationModel();
    sfr.ReadSim(sim);


    sim->WriteJson("SimOutput.json");

    delete sim;
    return 0;
}

