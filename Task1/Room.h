#pragma once
#include <iostream>
#include <cstring>
using namespace std;

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
	Room(const Room& other) : Room(other.name, other.width, other.length, other.floor) {}
	~Room()
	{
		if (name != nullptr)
			delete[] name;
		name = nullptr;
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
	const char* GetName() const
	{
		return name;
	}
	int GetFloor() const
	{
		return floor;
	}
	int GetWidth() const
	{
		return width;
	}
	int GetLength() const
	{
		return length;
	}
	int GetArea() const
	{
		return width * length;
	}
	void ShowInfo() const
	{
		cout << "Room: " << GetName() << "  Floor: " << GetFloor();
		cout << "  Width/length: " << GetWidth() << "/" << GetLength() << "  Area:" << GetArea() << endl;;
	}
	void SetRoom()
	{
		char name[30];
		int temp = 0;
		cout << "Enter room name: ";
		cin >> name;
		SetName(name);
		do
		{
			cout << "Enter floor name: ";
			cin >> temp;
			if (temp <= 0)
				cout << "Error. Should be bigger than zero.\n";
		} while (temp <= 0);
		SetFloor(temp);
		do
		{
			cout << "Enter room width: ";
			cin >> temp;
			if (temp <= 0)
				cout << "Error. Should be bigger than zero.\n";
		} while (temp <= 0);
		SetWidth(temp);
		do
		{
			cout << "Enter room length: ";
			cin >> temp;
			if (temp <= 0)
				cout << "Error. Should be bigger than zero.\n";
		} while (temp <= 0);
		SetLength(temp);
	}
};