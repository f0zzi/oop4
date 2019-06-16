#pragma once
#include <cstring>

class Room
{
private:
	int width;
	int length;
	int floor;
	char* name;
public:
	Room() : Room("No name", 1, 1, 1) {}
	Room(const char* name, int width, int length, int floor)
	{
		SetFloor(floor);
		SetLength(length);
		SetWidth(width);
		SetName(name);
	}
	void SetWidth(int width)
	{
		if (width > 0)
			this->width = width;
	}
	void SetLength(int length)
	{
		if (length > 0)
			this->length = length;
	}
	void SetFloor(int floor)
	{
		if (floor > 0)
			this->floor = floor;
	}
	void SetName(const char* name)
	{
		if (this->name != nullptr)
			delete[] this->name;
		int size = strlen(name) + 1;
		this->name = new char[size];
		strcpy_s(this->name, size, name);
	}

};