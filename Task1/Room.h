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
		size_t size = strlen(name) + 1;
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
	Room& operator=(const Room& other)
	{
		SetFloor(other.floor);
		SetLength(other.length);
		SetWidth(other.width);
		SetName(other.name);
		return *this;
	}
	Room operator+(const Room& other) const
	{
		return Room(name, width + other.width, length + other.length, floor);
	}
	Room operator+(int number) const
	{
		return Room(name, width + number, length + number, floor);
	}
	Room operator-(int number) const
	{
		if (width - number <= 0 || length - number <= 0)
			return Room(*this);
		else
			return Room(name, width - number, length - number, floor);
	}
	Room operator*(int number) const
	{
		if (number <= 0)
			return Room(*this);
		else
			return Room(name, width * number, length * number, floor);
	}
	Room& operator++()
	{
		width++;
		length++;
		return *this;
	}
	Room operator++(int)
	{
		Room tmp(*this);
		++*this;
		return tmp;
	}
	Room& operator--()
	{
		if (width > 1)
			width--;
		if (length > 1)
			length--;
		return *this;
	}
	Room operator--(int)
	{
		Room tmp(*this);
		--*this;
		return tmp;
	}

};