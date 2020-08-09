#ifndef _CAMERA_H_
#define _CAMERA_H_

#include <string>

class Section;

class Camera{
	int NumberCam;
	std::string LocRecord;
	Section * section;
	
public:
	Camera();
	Camera(int NumberCam, std::string LocRecord,Section * section);
	Camera(int NumberCam, std::string LocRecord);

	void setSection(Section * section);
	void setNumberCam(int NumberCam);
	void setLocRecord(const std::string & LocRecord);
	const Section * getSection() const;
	const int getNumberCam() const;
	const std::string & getLocRecords() const;
	void print() const;
};

#endif