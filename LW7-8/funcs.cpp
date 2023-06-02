#include "funcs.h"

void openFile(string file_name)
{
	ofstream file(file_name);
	file.close();
}

bool isLeapYear(int year) {
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

bool isValidDate(int day, int month, int year) {
    if (year < 0 || year > 9999) {
        throw "Недопустимий рік!";
    }
    else if (month < 1 || month > 12) {
        throw "Недопустимий місяць!";
    }
    else if (day < 1) {
        throw "Недопустимий день!";
    }

    const int days_in_month[] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

    if (month == 2 && isLeapYear(year)) {
        if (day > 29) {
            throw "Недопустимий день!";
        }
    }
    else {
        if (day > days_in_month[month - 1]) {
            throw "Недопустимий день!";
        }
    }

    return true;
}

