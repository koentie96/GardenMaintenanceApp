// GardenMaintenanceApp.cpp : Defines the entry point for the console application.
// Author: Koen Gort
// 
//	Usage:
//	1.) "Draw" the garden
//	2.) Divide the garden in multiple sections if needed
//	3.) Assign (a) plant(s) to the sections
//	4.) Generate the task list for this garden 

#include "stdafx.h"
#include <iostream>

#include "GardenMaintenanceApp.hpp"

void init()
{
	std::cout << "Application: GardenMaintenanceApp" << std::endl;
	std::cout << "Author:      Koen Gort" << std::endl;
	std::cout << "Version:     " << VERSION_NUMBER_MAJOR << "." << VERSION_NUMBER_MINOR << "." << VERSION_NUMBER_BUILDNR << std::endl << std::endl;
}

int _tmain(int argc, _TCHAR* argv[])
{
	init();
	std::cout << "Hello world, let's create GardenMaintenanceApp!" << std::endl;
	getchar(); // hold console window
	return 0;
}
