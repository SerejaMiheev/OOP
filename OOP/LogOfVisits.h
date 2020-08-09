#pragma once
#include "stdafx.h"

class LogOfVisits{
	time_t timeE;
	bool status;

public:
	LogOfVisits();
	LogOfVisits(time_t & time, bool status);
	void setStatus(bool status);
	const bool getStatus() const;
	void print() const;
};