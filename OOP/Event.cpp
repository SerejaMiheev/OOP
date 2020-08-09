#include "stdafx.h"

Event::Event(){
};

Event::Event(const Camera  & camera, const Person & person){
	timeE = time(0);
	//this->section = section;
	this->camera = camera;
	this->person = person;
};
	
Event::Event(const Camera  & camera){
	timeE = time(0);
	this->camera = camera;
};

void Event::setRecord(std::string & record) {
	this->record = record;
};

const char* Event::getTime() const{
	char* dt = ctime(&timeE);
	return dt;
};
	
const Camera Event::getCamera() const{
	return camera;
};
	
const Person Event::getPerson() const{
	return person;
};

const std::string Event::getRecord() const {
	return record;
};