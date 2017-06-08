#ifndef SimFileReader_H
#define SimFileReader_H

#include <fstream>
#include <string>
#include <sstream>
#include "StructuralInformationModel.h"
#include "SlabSection.h"

using namespace std;

class SimFileReader
{
public:
    SimFileReader(string filePath);
    SimFileReader();
    ~SimFileReader();

    template <class Type>
    Type s2num(const string& str){
        istringstream iss(str);
        Type num;
        iss >> num;
        return num;
    }

    string int2s(int n);

    void ReadSim(StructuralInformationModel* sim);
    void ReadGeneralInfo(StructuralInformationModel* sim);
    void ReadStructuralInfo(StructuralInformationModel* sim);
    void ReadLayout(StructuralInformationModel* sim);
    void ReadProperty(StructuralInformationModel* sim);
    void ReadGeometry(StructuralInformationModel* sim);

private:
    ifstream _fin;


};

#endif // SimFileReader_H
