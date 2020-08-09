// OOP.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"


void main() {
	system("chcp 1251>nul");
	
	std::string FioPerson;
	unsigned int IdPerson;
	
	Person men1;

	std::cout<<"Введите Ф.И.О.: ";
	getline(std::cin,FioPerson);
	men1.SetFio(FioPerson);

	std::cout<<"\nВведите ID: ";
	std::cin>>IdPerson;
	men1.SetID(IdPerson);

	men1.GetPerson();
}
