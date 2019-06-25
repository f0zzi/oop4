#include <iostream>
#include "Room.h"
using namespace std;

int main()
{
	Room room1, room2;
	//room1.ShowInfo();
	//room2.SetRoom();
	//room2.ShowInfo();
	//room1 = room2;
	//room1.ShowInfo();
	//Room res = room1 + 5;
	//res.ShowInfo();
	//room1.ShowInfo();
	//room1 += 55;
	//room1.ShowInfo();
	//room1 *= 3;
	//room1.ShowInfo();
	//cout << room1 << endl;
	//cin >> room1;
	//cout << room1 << endl;
	//cout << int(room1) << endl;
	room1.ShowInfo();
	room1(5, 5, "eee", 5);
	room1.ShowInfo();
	system("pause");
	return 0;
}