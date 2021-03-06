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
    ReadProperty(sim);
    ReadGeometry(sim);

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
            sim->si.layout->floors.insert(make_pair(floor.name,floor));
    }
    fin.close();

    fin.open("clines.txt");
    getline(fin,s);
    while(!fin.eof())
    {
        Cline cline;
        fin>>cline.name>>cline.location[0]>>cline.location[1];
        if(cline.name!="")
            sim->si.layout->clines.insert(make_pair(cline.name,cline));
    }
    fin.close();

}

void SimFileReader::ReadProperty(StructuralInformationModel* sim)
{
    ifstream fin("materials.txt");
    string s="";
    getline(fin,s);
    while(!fin.eof())
    {
        Material mat;
        fin>>mat.name>>mat.type>>mat.fpc>>mat.rho>>mat.E>>mat.nu>>mat.fu>>mat.epsr>>mat.fy;
        if(mat.name!="")
            sim->si.property->materials.insert(make_pair(mat.name,mat));
    }
    fin.close();

    fin.open("framesections.txt");
    getline(fin,s);
    while(!fin.eof())
    {
        FrameSection fs;
        fin>>fs.name>>fs.type>>fs.database>>fs.shape>>fs.material>>fs.top_flange_width
           >>fs.top_flange_thickness>>fs.web_thickness>>fs.bottom_flange_width>>fs.bottom_flange_thickness
           >>fs.fillet_radius>>fs.selfweight>>fs.depth>>fs.width>>fs.flange_thickness;
        if(fs.name!="")
            sim->si.property->framesections.insert(make_pair(fs.name,fs));
    }
    fin.close();

    fin.open("slabsections.txt");
    getline(fin,s);
    while(!fin.eof())
    {
        SlabSection slabs;
        fin>>slabs.name>>slabs.type>>slabs.material>>slabs.thickness
           >>slabs.longitudinal_rebar_material>>slabs.longitudinal_num_bars_depth;
        if(slabs.name!="")
            sim->si.property->slabsections.insert(make_pair(slabs.name,slabs));
    }
    fin.close();

}


void SimFileReader::ReadGeometry(StructuralInformationModel* sim)
{
    ifstream fin("columns.txt");
    string s="";
    getline(fin,s);
    while(!fin.eof())
    {
        Column column;
        int nClines=0;
        fin>>column.name>>nClines;
        column.clines.resize(nClines);
        for(int i=0;i<nClines;++i)
        {
            fin>>column.clines[i];
        }
        int nfloors=0;
        fin>>nfloors;
        column.floors.resize(nfloors);
        for(int i=0;i<nfloors;++i)
        {
            fin>>column.floors[i];
        }
        int nSegments=0;
        fin>>nSegments;
        column.segments.resize(nSegments);
        for(int i=0;i<nSegments;++i)
        {
            fin>>column.segments[i].section>>column.segments[i].ratio[0]>>column.segments[i].ratio[1]>>column.segments[i].angle;
        }

        if(column.name!="")
            sim->si.geometry->columns.insert(make_pair(column.name,column));
    }
    fin.close();

    fin.open("beams.txt");
    getline(fin,s);
    while(!fin.eof())
    {
        Beam beam;
        int nClines=0;
        fin>>beam.name>>nClines;
        beam.clines.resize(nClines);
        for(int i=0;i<nClines;++i)
        {
            fin>>beam.clines[i];
        }
        int nfloors=0;
        fin>>nfloors;
        beam.floors.resize(nfloors);
        for(int i=0;i<nfloors;++i)
        {
            fin>>beam.floors[i];
        }
        int nSegments=0;
        fin>>nSegments;
        beam.segments.resize(nSegments);
        for(int i=0;i<nSegments;++i)
        {
            fin>>beam.segments[i].section>>beam.segments[i].ratio[0]>>beam.segments[i].ratio[1]>>beam.segments[i].angle;
        }

        if(beam.name!="")
            sim->si.geometry->beams.insert(make_pair(beam.name,beam));
    }
    fin.close();

    fin.open("slabs.txt");
    getline(fin,s);
    while(!fin.eof())
    {
        Slab slab;
        int nClines=0;
        fin>>slab.name>>slab.floor>>slab.section>>nClines;
        slab.clines.resize(nClines);
        for(int i=0;i<nClines;++i)
        {
            fin>>slab.clines[i];
        }

        if(slab.name!="")
            sim->si.geometry->slabs.insert(make_pair(slab.name,slab));
    }
    fin.close();

}


