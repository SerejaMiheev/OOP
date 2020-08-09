#pragma once
#include "stdafx.h"

class Person{
	std::string fio;
	unsigned int ID;

public:
	Person();
	Person(const std::string & valueFio, unsigned int valueID);
	void setFio(const std::string & valueFio);
	void setID(unsigned int valueID);
	const std::string & getFio() const;
	unsigned int getID() const;
	void print() const;
	virtual ~Person();
};