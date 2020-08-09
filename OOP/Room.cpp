#include "stdafx.h"

Room::Room(){
};

Room::Room(bool status,const std::list<Equipment> & equipments, int NumberRoom){
	this->status = status;
	this->equipments = equipments;
	this->NumberRoom = NumberRoom;
};

Room::Room(bool status, const Equipment & equipments, int NumberRoom){
	this->status = status;
	this->equipments.push_back(equipments);
	this->NumberRoom = NumberRoom;
};

void Room::setStatus(bool status){
	this->status = status;
};

void Room::setNumberRoom(int NumberRoom){
	this->NumberRoom = NumberRoom;
};

void Room::setEquipments(const std::list<Equipment> & equipments){
	this->equipments = equipments;
};

void Room::addEquipment(const Equipment & equipment){
	equipments.push_back(equipment);
};

bool Room::getStatus() const{
	return status;
};
const std::list<Equipment> & Room::getEquipments() const{
	return equipments;
};

int Room::getNumberRoom() const{
	return NumberRoom;
};

