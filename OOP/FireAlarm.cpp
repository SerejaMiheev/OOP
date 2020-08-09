#include "stdafx.h"

FireAlarm::FireAlarm(Floor & location){
	this->location = location;
};

void FireAlarm::setLocation(Floor & location){
	this->location = location;
};

Floor FireAlarm::getLocation(){
	return location;
};