#include "Property.h"

Property::Property()
{

}

Json::Value Property::toJson(){
    Json::Value j;
    j[""]=Json::Value();
    return j;
}
