/*
 * classtime.cpp
 *
 *  Created on: 2018年12月15日
 *      Author: zjt
 */

#include "classtime.h"

classtime::classtime() {
	// TODO Auto-generated constructor stub
	std::cout << " 请输入参数,初始化对象！！！" << std::endl;
}

classtime::classtime(int  val1 , int  val2)
{
	min = val1;
	hour = val2;
}
void classtime::addmin(int & val)
{
	min += val;
	hour += min/60;
	min %= 60;
}

void classtime::addhou(int & val)
{
	hour+=val;
}

void classtime::SetTime(int & val1 , int val2)
{
	min = val1;
	hour = val2;
}

classtime classtime::operator+(const classtime & val) const
{
	classtime temp;
	temp.min = this->min + val.min;
	temp.hour = this->hour + val.hour;
	return temp;
}

classtime  classtime::operator-( const classtime & val) const
{
	classtime temp;

	temp.min = this->min - val.min;
	temp.hour = this->hour - val.hour;
	return temp;
}


classtime  classtime::operator*( const double & val) const
{
	classtime temp;

	temp.min = this->min * val;
	temp.hour = this->hour * val;
	return temp;
}

void Init(classtime & val1 , int Minval , int hourval)
{
	val1.min = Minval;
	val1.hour = hourval;
}

void classtime::show(void)
{
	std::cout << " min = " << min << " hour = " << hour << std::endl;
}

classtime::~classtime() {
	// TODO Auto-generated destructor stub
	std::cout << " 释放对象！！！" << std::endl;
}
