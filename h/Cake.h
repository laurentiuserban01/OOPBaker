#define _WIN32 1
#ifdef _WIN32
#define NOMINMAX
#include <windows.h>

inline void delay(unsigned long ms)
{
	Sleep(ms);
}

#else  /* POSIX */

#include <unistd.h>

inline void delay(unsigned long ms)
{
	usleep(ms * 1000);
}

#endif 

#pragma once
#include<string>
#include<iostream>

class Cake
{ private:
	std::string name;

public:
	Cake() { name = "n\a"; }
	Cake(std::string _name) { name = _name; }

	std::string getName() { return name; }

};

