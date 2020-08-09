// OOP.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"


void main() {
	system("chcp 1251>nul");
	
	std::string FioPerson;
	unsigned int IdPerson;
	
	/*time_t now = time(0);
	char* dt = ctime(&now);*/

	Person men1;

	std::cout<<"Введите Ф.И.О.: ";
	getline(std::cin,FioPerson);

	std::cout<<"\nВведите ID: ";
	std::cin>>IdPerson;

	men1.setFio(FioPerson);
	men1.setID(IdPerson);

	men1.print();

	Person men2;
	men2.print();

	Equipment::Type_of_equipment type1("asdasd");

	Equipment Equip(type1, 4);
	
	std::cout<<"Тип оборудования: " << Equip.getTypeOfEquipment().getTypeOfEquipment_();
	std::cout<<"\nКол-во оборудования данного типа: " << Equip.getCountOfEquipment();
	
	Room r1(true,Equip, 101);
	const std::list<Equipment> & eqs=r1.getEquipments();

	for(std::list<Equipment>::const_iterator it = eqs.begin(); it!=eqs.end(); it++)
		printf("\n%d", it->getCountOfEquipment());
	//std::cout<<std::endl;

	Camera cam1(1,"C:");
	cam1.print();

	Floor f1(r1);
	f1.setNumber(1);
	std::cout<<f1.getNumber()<<std::endl;
	std::vector<Room> roomf1; 
	roomf1 = f1.getRooms();
	for(std::vector<Room>::const_iterator it = roomf1.begin(); it!=roomf1.end(); it++)
		printf("\n%d", it->getNumberRoom());

	Section s1(cam1,f1);

	cam1.setSection(&s1);
	s1.setNumSection(1);
	Event e1(cam1,men2);
	//std::cout<<e1.getCamera()<<std::endl;
	std::cout<<e1.getRecord()<<std::endl;
	std::cout<<e1.getTime()<<std::endl;
}
