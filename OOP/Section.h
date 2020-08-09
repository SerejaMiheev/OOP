#ifndef _SECTION_H_
#define _SECTION_H_

#include "Camera.h"
#include "Floor.h"
#include "Room.h"
#include <vector>

class Section{
	int numsection;
	std::vector <Floor> Floors;
	std::vector <Room> RoomNoOnFloor;
	std::vector <Camera> Cameras;

public:
	Section();
	Section(const std::vector <Room> & RoomNoOnFloor,const std::vector <Camera> & Cameras, const std::vector <Floor> & Floors);
	Section(const std::vector <Camera> & Cameras, const std::vector <Floor> & Floors);
	Section(const std::vector <Room> & RoomNoOnFloor, const std::vector <Floor> & Floors);
	Section(const Room & RoomNoOnFloor, const Camera & Cameras, const Floor & Floors);
	Section(const Camera & Cameras, const Floor & Floors);
	Section(const Room & RoomNoOnFloor, const Floor & Floors);

	void setRooms(const std::vector <Room> & RoomNoOnFloor);
	void setCameras(const std::vector <Camera> & Cameras);
	void setFloors(const std::vector <Floor> & Floors);
	void setRoom(const Room & RoomNoOnFloor);
	void setCamera(const Camera & Cameras);
	void setFloor(const Floor & Floors);
	void setNumSection(int numsection);
	const std::vector <Floor> & getFloors() const;
	const std::vector <Camera> & getCameras() const;
	const std::vector <Room> & getRoomsNoOnFloor() const;
	int getNumSection();
};

#endif