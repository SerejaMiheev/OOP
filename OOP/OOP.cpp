// OOP.cpp: ���������� ����� ����� ��� ����������� ����������.
//

#include "stdafx.h"


void main() {
	system("chcp 1251>nul");
	
	std::string FioPerson;
	unsigned int IdPerson;
	
	Person men1;

	std::cout<<"������� �.�.�.: ";
	getline(std::cin,FioPerson);
	men1.SetFio(FioPerson);

	std::cout<<"\n������� ID: ";
	std::cin>>IdPerson;
	men1.SetID(IdPerson);

	men1.GetPerson();
}
