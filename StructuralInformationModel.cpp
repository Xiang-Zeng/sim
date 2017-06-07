#include "StructuralInformationModel.h"

StructuralInformationModel::StructuralInformationModel()
{

}


Json::Value StructuralInformationModel::toJson()
{
    Json::Value jsim;
    jsim["GeneralInformation"]=gi->toJson();
    jsim["StructuralInformation"]=si->toJson();
    return jsim;
}

void StructuralInformationModel::WriteJson(string path){
    Json::StyledWriter sw;
    ofstream fout(path);
    fout << sw.write(this->toJson());
    fout.close();
}
