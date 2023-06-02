#include "class.h"

void Products::setFileName(string new_file_name)
{
	file_name = new_file_name;
}

void Products::setProductName(string new_product_name)
{
	product_name = new_product_name;
}

string Products::getFileName()
{
	return file_name;
}

string Products::getProductName()
{
	return product_name;
}



void Date::setDay(int new_day)
{
	day = new_day;
}

void Date::setMonth(int new_month)
{
	month = new_month;
}

void Date::setYear(int new_year)
{
	year = new_year;
}

int Date::getDay()
{
	return day;
}

int Date::getMonth()
{
	return month;
}
int Date::getYear()
{
	return year;
}