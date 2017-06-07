#include "Floor.h"

Floor::Floor()
{

}


Json::Value Floor::toJson(){
    Json::Value jfloor;
    jfloor["name"]=Json::Value(name);
    jfloor["elevation"]=Json::Value(elevation);
    return jfloor;
}
