
#include "stdafx.h"
#include <iostream>
#include <ctime>
#include <fstream>

using namespace std;

int main()
{
	ofstream ex13;
	ex13.open("Exercise13_1.txt");

	if (ex13.fail()) {
		cout << "File cannot open " << endl;
		return 0;
	}

	srand(time(0));

	for (int i = 0; i < 100; i++)
	{
		ex13 << (rand()) % 100 << " ";
	}
    return 0;
}

