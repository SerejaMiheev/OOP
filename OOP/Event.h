
#include <string>
#include <ctime>
#include "Camera.h"

class Event{
	time_t timeE;
	//Section section;
	Camera camera;
	Person person;
	std::string record;
	Event();

public:
	Event(const Camera & camera, const Person & person);
	Event(const Camera & camera);

	void setRecord(std::string & record);
	const char* getTime() const;
	const Camera getCamera() const;
	const Person getPerson() const;
	const std::string getRecord() const;
};