#include "stdafx.h"
#include "Camera.h"
#include "Section.h"

Camera::Camera(){
	NumberCam = 0;
	LocRecord = "";
};

Camera::Camera(int NumberCam, std::string LocRecord,Section * section) {
	this->NumberCam = NumberCam;
	this->LocRecord = LocRecord;
	this->section = section;
};

Camera::Camera(int NumberCam, std::string LocRecord){
	this->NumberCam = NumberCam;
	this->LocRecord = LocRecord;
}


void Camera::setSection(Section * section) {
	this->section = section;
};

void Camera::setNumberCam(int NumberCam){
	this->NumberCam = NumberCam;
};

void Camera::setLocRecord(const std::string & LocRecord){
	this->LocRecord = LocRecord;
};

const Section * Camera::getSection() const {
	return section;
};

const int Camera::getNumberCam() const{
	return NumberCam;
};

const std::string & Camera::getLocRecords() const{
	return LocRecord;
};

void Camera::print() const{
	std::cout<<"NumberCam: "+NumberCam<<std::endl;
	std::cout<<"LocRecord: "+LocRecord<<std::endl;
	//std::cout << "Section: "+section.getNumSection() << std::endl;
};