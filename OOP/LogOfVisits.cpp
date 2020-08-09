#include "stdafx.h"

LogOfVisits::LogOfVisits(){
	status = 1;
	//time
};

LogOfVisits::LogOfVisits(time_t & time, bool status){
	this->status = status;
	/*timeE = time(NULL);
	timeE = asctime(gmtime(&time)));*/
	//time
};

void LogOfVisits::setStatus(bool status){
	this->status = status;
};

const bool LogOfVisits::getStatus() const{
	return status;
};

void LogOfVisits::print() const{
	if (status){
		std::cout<<"Зашёл в "/*+Time*/;
	}
	else {
		std::cout<<"Вышел в "/*+Time*/;
	}
};