#include "stdafx.h"
#include "Equipment.h"
#include <string>

Equipment::Type_of_equipment::Type_of_equipment(){}

Equipment::Type_of_equipment::Type_of_equipment(const std::string & name){
	TypeOfEquipment = name;
}

void Equipment::Type_of_equipment::setTypeOfEquipment_(const std::string & TypeOfEquipment){
	this -> TypeOfEquipment = TypeOfEquipment;
}

const std::string & Equipment::Type_of_equipment::getTypeOfEquipment_() const{
	return TypeOfEquipment;
}

Equipment::Equipment(){count = 0;}

Equipment::Equipment(const Type_of_equipment & type, int count){
	this->count = count;
	this->type = type;
}

void Equipment::setCountOfEquipment(int count){
	this->count = count;
}

int Equipment::getCountOfEquipment() const{
	return count;
}
 
void Equipment::setTypeOfEquipment(const Type_of_equipment & type){
	this->type = type;
}

const Equipment::Type_of_equipment & Equipment::getTypeOfEquipment() const{
	return type;
}