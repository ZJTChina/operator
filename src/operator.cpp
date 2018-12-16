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
	classtime t1(50,4);
	classtime t2(50,2);

	(t1+t2).show();
	(t1-t2).show();
	(t1*10).show();
    Init(t1,0,0);
    t1.show();


	return 0;

}



