#pragma once
#include "stdafx.h"

class SusActivity : virtual public BadEvent{
	Floor location;

public:
	SusActivity(Floor & location);
	virtual void setLocation(Floor & location);
	virtual Floor getLocation();
	const std::string & getLocRecord()const;
};