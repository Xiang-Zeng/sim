#include "SimFileReader.h"
#include <iostream>
#include <sstream>
#include <math.h>

using namespace std;

SimFileReader::SimFileReader(string filePath)
{
    _fin.open(filePath);
    if(!_fin.good())
    {
        cout<<"failed to open file "<<filePath.c_str()<<"!\n";
        _fin.close();
        exit(1);
    }

}

SimFileReader::SimFileReader(){
}

SimFileReader::~SimFileReader(){
    _fin.close();
}


string SimFileReader::int2s(int n)
{
    stringstream ss;
    ss<<n;
    string s;
    ss>>s;
    return s;
}



void SimFileReader::ReadSim(StructuralInformationModel *sim)
{
    ReadGeneralInfo(sim);

}

void SimFileReader::ReadGeneralInfo(StructuralInformationModel* sim)
{
    ifstream fin("GeneralInformation.txt");
    string s="";
    getline(fin,s);
    fin>>sim->gi.name>>sim->gi.revision>>sim->gi.type>>sim->gi.year
       >>sim->gi.location>>sim->gi.engineer>>sim->gi.DOI;

    fin.close();
}





