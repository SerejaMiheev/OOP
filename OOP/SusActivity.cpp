#include "stdafx.h"

SusActivity::SusActivity(Floor & location){
	this->location = location;
};

void SusActivity::setLocation(Floor & location){
	this->location = location;
};

Floor SusActivity::getLocation(){
	return location;
};

/*const std::string & SusActivity::getLocRecord()const{
};*/