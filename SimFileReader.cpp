#include "SimFileReader.h"
#include <iostream>
#include <sstream>
#include <math.h>
using namespace std;

SimFileReader::SimFileReader(string filePath)
{
    fin.open(filePath);
    if(!fin.good())
    {
        cout<<"failed to open file "<<filePath.c_str()<<"!\n";
        fin.close();
        exit(1);
    }

}

SimFileReader::~SimFileReader(){
    fin.close();
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


}
