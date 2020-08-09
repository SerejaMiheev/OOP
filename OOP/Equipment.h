#pragma once
#include <string>

class Equipment{
	int count;

public:
	class Type_of_equipment{
		std::string TypeOfEquipment;
	
	public:
		Type_of_equipment();
		Type_of_equipment(const std::string & name);
		void setTypeOfEquipment_(const std::string & TypeOfEquipment);
		const std::string & getTypeOfEquipment_()const;
	};

private:
	Type_of_equipment type;
	Equipment();

public:
	Equipment(const Type_of_equipment & type, int count);

	void setTypeOfEquipment(const Type_of_equipment & type);
	const Type_of_equipment & getTypeOfEquipment() const;

	void setCountOfEquipment(int count);
	int getCountOfEquipment() const;
};