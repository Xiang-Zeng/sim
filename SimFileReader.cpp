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
    ReadStructuralInfo(sim);

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

void SimFileReader::ReadStructuralInfo(StructuralInformationModel* sim)
{
    ifstream fin("StructuralInformation.txt");
    string s="";
    getline(fin,s);
    fin>>sim->si.type>>sim->si.units->length>>sim->si.units->force>>sim->si.units->temperature;
    fin.close();

    ReadLayout(sim);

}

void SimFileReader::ReadLayout(StructuralInformationModel* sim)
{
    ifstream fin("floors.txt");
    string s="";
    getline(fin,s);
    while(!fin.eof())
    {
        Floor floor;
        fin>>floor.name>>floor.elevation;
        if(floor.name!="")
            sim->si.layout->floors.push_back(floor);
    }
    fin.close();

    fin.open("clines.txt");
    getline(fin,s);
    while(!fin.eof())
    {
        Cline cline;
        fin>>cline.name>>cline.location[0]>>cline.location[1];
        if(cline.name!="")
            sim->si.layout->clines.push_back(cline);
    }
    fin.close();

}




