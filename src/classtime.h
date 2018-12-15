/*
 * classtime.h
 *
 *  Created on: 2018年12月15日
 *      Author: zjt
 */

#ifndef CLASSTIME_H_
#define CLASSTIME_H_

#include <iostream>
#include <fstream>
#include <string>

class classtime {
private:
		int min;
		int hour;
public:
		classtime();
		classtime(int  val1 , int  val2);
		void addmin(int & val);
		void addhou(int & val);
		void SetTime(int & val1 , int val2);
		//void Sum(classtime & val);
		void operator+(classtime & val);
		void show(void);
		~classtime();
};

#endif /* CLASSTIME_H_ */
