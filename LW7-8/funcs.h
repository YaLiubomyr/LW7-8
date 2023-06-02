#pragma once
#include <iostream>
#include <string>
#include <fstream>
#include <iomanip>

using namespace std;

void openFile(string file_name);

bool isLeapYear(int year);
bool isValidDate(int day, int month, int year);