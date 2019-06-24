#include <iostream>
#include "Room.h"
using namespace std;

int main()
{
	Room room1, room2;
	room1.ShowInfo();
	room2.SetRoom();
	room2.ShowInfo();
	room1 = room2;
	room1.ShowInfo();
	Room res = room1 + room2;
	res.ShowInfo();
	system("pause");
	return 0;
}