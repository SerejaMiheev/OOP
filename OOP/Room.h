#pragma once
#include <list>
#include "Equipment.h"

class Room {
	bool status;
	int NumberRoom;
	std::list<Equipment> equipments;

public:
	Room();
	Room(bool status,const std::list<Equipment> & equipments, int NumberRoom);
	Room(bool status, const Equipment & equipments, int NumberRoom);

	void setStatus(bool status);
	void setEquipments(const std::list<Equipment> & equipments);
	void setNumberRoom(int NumberRoom);
	void addEquipment(const Equipment & equipment);
	bool getStatus() const;
	int getNumberRoom() const;
	const std::list<Equipment> & getEquipments() const;
};