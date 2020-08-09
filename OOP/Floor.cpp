#include "stdafx.h"

Floor::Floor(){
};

Floor::Floor(const std::vector <Room> & RoomOnFloor,/*const std::vector <Camera> & CamerOnFloor,*/ int number){
	this->RoomOnFloor = RoomOnFloor;
	//this->CamerOnFloor = CamerOnFloor;
	this->number = number;
};

/*Floor::Floor(const std::vector <Room> & RoomOnFloor,const std::vector <Camera> & CamerOnFloor){
	this->RoomOnFloor = RoomOnFloor;
	this->CamerOnFloor = CamerOnFloor;
};*/

Floor::Floor(const std::vector <Room> & RoomOnFloor){
	this->RoomOnFloor = RoomOnFloor;
};

/*Floor::Floor(const std::vector <Camera> & CamerOnFloor){
	this->CamerOnFloor = CamerOnFloor;
};*/

/*Floor::Floor(const Room & RoomOnFloor,const Camera & CamerOnFloor){
	this->RoomOnFloor.push_back(RoomOnFloor);
	this->CamerOnFloor.push_back(CamerOnFloor);
};*/

Floor::Floor(const Room & RoomOnFloor){
	this->RoomOnFloor.push_back(RoomOnFloor);
};

/*Floor::Floor(const Camera & CamerOnFloor){
	this->CamerOnFloor.push_back(CamerOnFloor);
};*/


void Floor::setRooms(const std::vector <Room> & RoomOnFloor){
	this->RoomOnFloor = RoomOnFloor;
};

/*void Floor::setCameras(const std::vector <Camera> & CamerOnFloor){
	this->CamerOnFloor = CamerOnFloor;
};*/

void Floor::addRoom(const Room & RoomOnFloor){
	this->RoomOnFloor.push_back(RoomOnFloor);
};

/*void Floor::addCamera(const Camera & CamerOnFloor){
	this->CamerOnFloor.push_back(CamerOnFloor);
};*/

const std::vector <Room> & Floor::getRooms() const{
	return RoomOnFloor;
};

/*const std::vector <Camera> & Floor::getCameras() const{
	return CamerOnFloor;
};*/

int Floor::CountRoomOnFloor () const{
	return RoomOnFloor.size();
};

/*int Floor::CountCamerOnFloor () const{
	return CamerOnFloor.size();
};*/

void Floor::setNumber(int number){
	this->number = number;
};

int Floor::getNumber () const{
	return number;
};