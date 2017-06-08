#include "Material.h"

Material::Material()
{

}

Json::Value Material::toJson(){
    Json::Value j;
    j["name"]=Json::Value(name);
    j["type"]=Json::Value(type);
    j["fpc"]=Json::Value(fpc);
    j["rho"]=Json::Value(rho);
    j["E"]=Json::Value(E);
    j["nu"]=Json::Value(nu);
    j["fu"]=Json::Value(fu);
    j["epsr"]=Json::Value(epsr);
    j["fy"]=Json::Value(fy);

    return j;
}
