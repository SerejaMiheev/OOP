#pragma once
#include "stdafx.h"

class BadEvent{
public:
	virtual void setLocation(Floor & location);
	virtual Floor getLocation();
};