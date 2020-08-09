#include "stdafx.h"
#include "Section.h"

Section::Section(){
};

Section::Section(const std::vector <Room> & RoomNoOnFloor,const std::vector <Camera> & Cameras, const std::vector <Floor> & Floors){
	this->RoomNoOnFloor = RoomNoOnFloor;
	this->Cameras = Cameras;
	this->Floors = Floors;
};

Section::Section(const std::vector <Camera> & Cameras, const std::vector <Floor> & Floors){
	this->Cameras = Cameras;
	this->Floors = Floors;
};

Section::Section(const std::vector <Room> & RoomNoOnFloor, const std::vector <Floor> & Floors){
	this->RoomNoOnFloor = RoomNoOnFloor;
	this->Floors = Floors;
};
	
Section::Section(const Room & RoomNoOnFloor, const Camera & Cameras, const Floor & Floors){
	this->RoomNoOnFloor.push_back(RoomNoOnFloor);
	this->Cameras.push_back(Cameras);
	this->Floors.push_back(Floors);
};
	
Section::Section(const Camera & Cameras, const Floor & Floors){
	this->Cameras.push_back(Cameras);
	this->Floors.push_back(Floors);
};
	
Section::Section(const Room & RoomNoOnFloor, const Floor & Floors){
	this->RoomNoOnFloor.push_back(RoomNoOnFloor);
	this->Floors.push_back(Floors);
};
	
void Section::setRooms(const std::vector <Room> & RoomNoOnFloor){
	this->RoomNoOnFloor = RoomNoOnFloor;
};
	
void Section::setCameras(const std::vector <Camera> & Cameras){
	this->Cameras = Cameras;
};
	
void Section::setFloors(const std::vector <Floor> & Floors){
	this->Floors = Floors;
};
	
void Section::setRoom(const Room & RoomNoOnFloor){
	this->RoomNoOnFloor.push_back(RoomNoOnFloor);
};
	
void Section::setCamera(const Camera & Cameras){
	this->Cameras.push_back(Cameras);
};
	
void Section::setFloor(const Floor & Floors){
	this->Floors.push_back(Floors);
};

void Section::setNumSection(int numsection) {
	this->numsection = numsection;
};
	
const std::vector <Floor> & Section::getFloors() const{
	return Floors;
};
	
const std::vector <Camera> & Section::getCameras() const{
	return Cameras;
};
		
const std::vector <Room> & Section::getRoomsNoOnFloor() const{
	return RoomNoOnFloor;
};

int Section::getNumSection() {
	return numsection;
};