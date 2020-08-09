#pragma once
#include <vector>
#include "Room.h"

class Floor{
	int number;
	std::vector <Room> RoomOnFloor;
	//std::vector <Camera> CamerOnFloor;

public:
	Floor();
	Floor(const std::vector <Room> & RoomOnFloor/*,const std::vector <Camera> & CamerOnFloor*/,int number);
	//Floor(const std::vector <Room> & RoomOnFloor,const std::vector <Camera> & CamerOnFloor);
	Floor(const std::vector <Room> & RoomOnFloor);
	/*Floor(const std::vector <Camera> & CamerOnFloor);*/
	/*Floor(const Room & RoomOnFloor,const Camera & CamerOnFloor);*/
	Floor(const Room & RoomOnFloor);
	/*Floor(const Camera & CamerOnFloor);*/

	void setRooms(const std::vector <Room> & RoomOnFloor);
	/*void setCameras(const std::vector <Camera> & CamerOnFloor);*/
	void setNumber(int number);
	void addRoom(const Room & RoomOnFloor);
	/*void addCamera(const Camera & CamerOnFloor);*/
	const std::vector <Room> & getRooms() const;
	/*const std::vector <Camera> & getCameras() const;*/
	int getNumber () const;
	int CountRoomOnFloor () const;
	/*int CountCamerOnFloor () const;*/
};