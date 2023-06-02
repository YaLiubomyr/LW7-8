#pragma once

#include <iostream>

using namespace std;


class Date
{
	int day, month, year;

public:

	Date(int n_day = 1, int n_month = 1, int n_year = 1) :day(n_day), month(n_month), year(n_year) {};
	void setDay(int new_day);
	void setMonth(int new_month);
	void setYear(int new_year);

	int getDay();
	int getMonth();
	int getYear();
};

class Products
{
	string file_name,
		   product_name;
	Date product_date,
		 current_date;

public:
	Products(string n_file_name = "file.txt", string n_product_name = "product", Date n_product_date = Date(), Date n_current_date = Date()) :
		file_name(n_file_name), product_name(n_product_name), product_date(n_product_date), current_date(n_current_date) {};

	void setFileName(string new_file_name);
	void setProductName(string new_product_name);
	string getFileName();
	string getProductName();
};
