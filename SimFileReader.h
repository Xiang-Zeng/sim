#ifndef SimFileReader_H
#define SimFileReader_H

#include <fstream>
#include <string>
#include <sstream>
#include <StructuralInformationModel.h>

using namespace std;

class SimFileReader
{
public:
    SimFileReader(string filePath);
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


private:
    ifstream fin;


};

#endif // SimFileReader_H