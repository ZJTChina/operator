//============================================================================
// Name        : operator.cpp
// Author      : ZJT
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <fstream>
#include <string>
#include "classtime.h"

using namespace std;

int main()
{
	cout << "!!!Hello World!!!" << endl; // prints !!!Hello World!!!
	classtime t1(1,50);
	classtime t2(2,50);

	t1.show();
	t1+t2;
	t1.show();


	return 0;

}
