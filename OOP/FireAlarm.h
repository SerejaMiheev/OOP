#pragma once
#include "stdafx.h"

class FireAlarm : virtual public BadEvent{
	Floor location;

public:
	FireAlarm(Floor & location);
	virtual void setLocation(Floor & location);
	virtual Floor getLocation();
};