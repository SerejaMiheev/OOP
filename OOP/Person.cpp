#include "stdafx.h"

Person::Person(){
	fio = "Unknown";
	ID = 0;
}

Person::Person(const std::string & fio, unsigned int ID){
	this->fio = fio;
	this->ID = ID;
}

Person::~Person(){
}

void Person::setFio(const std::string & valueFio){
	fio = valueFio;
}

void Person::setID(unsigned int valueID){
	ID = valueID;
}

const std::string & Person::getFio() const{
	return fio;
}

unsigned int Person::getID() const{
	return ID;
}

void Person::print() const{
	std::cout<<fio<<std::endl;
	std::cout<<ID<<std::endl;
}