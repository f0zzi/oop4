#include <iostream>
#include "Room.h"
using namespace std;

int main()
{
	Room room1, room2;
	cout << "Room1: ";
	room1.ShowInfo();
	room2.SetRoom();
	cout << "Room2: ";
	room2.ShowInfo();
	cout << "room1 = room2" << endl;
	room1 = room2;
	cout << "Room1: ";
	room1.ShowInfo();
	cout << "Room res = room1 + 5" << endl;
	Room res = room1 + 5;
	cout << "Res: ";
	res.ShowInfo();
	cout << "Room1: ";
	room1.ShowInfo();
	cout << "room1 += 55" << endl;
	room1 += 55;
	cout << "Room1: ";
	room1.ShowInfo();
	cout << "room1 *= 3" << endl;
	room1 *= 3;
	cout << "Room1: ";
	room1.ShowInfo();
	cout << "cout << room1 << endl" << endl;
	cout << room1 << endl;
	cout << "cin >> room1" << endl;
	cin >> room1;
	cout << "cout << room1 << endl" << endl;
	cout << room1 << endl;
	cout << "cout << int(room1) << endl" << endl;
	cout << int(room1) << endl;
	cout << "Room1: ";
	room1.ShowInfo();
	room1(5, 5, "eee", 5);
	room1.ShowInfo();
	system("pause");
	return 0;
}