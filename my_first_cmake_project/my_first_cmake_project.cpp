// my_first_cmake_project.cpp : Defines the entry point for the application.
//

#include "my_first_cmake_project.h"


int main()
{
	
	std::cout << "Введите имя: ";
	std::string name{};
	std::cin >> name;
	std::cout << "Здравствуйте, " << name << '!' << std::endl;
	return 0;
}
