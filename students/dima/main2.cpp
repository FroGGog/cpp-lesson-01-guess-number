#include <iostream>  // для cout и cin
#include <cstdlib>   // для rand() и srand()
#include <ctime>     // для time()
#include <windows.h>

int main()
{
	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);
	setlocale(LC_ALL, "ru_RU.UTF-8");
	srand(time(0));

	int number = 100;
	number = number - 1;


	std::cout << number;

	

	}

	return 0;
}
