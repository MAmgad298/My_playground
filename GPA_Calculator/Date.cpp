#include"Date.h"
#include "iomanip"
#include<string>

Date::Date() {
	mon = 0;
	day = 0;
	year = 0;
	//LAST_MONTH_DAY = 30;
}
Date::Date(int newMon, int newDay, int newYear) {

	setMonths(newMon);
	setDays(newDay);
	setYears(newYear);

}

void Date::setMonths(int m) {
	mon = m;
	fullDate += mon;
}

void Date::setDays(int d) {
	day = d;
	fullDate += day;
}

void Date::setYears(int y) {
	year = y;
	fullDate += year;
}

void Date::setLastDay(int newLDay) {
	lastDay = newLDay;
}

//getters
int Date::getLastDay() {
	return lastDay;
}

void Date::fillMons(string mons[12]) {
	string monsNames[12] = {
		"January", "February","March",
		"April","May","June",
		"July","August","September",
		"October" ,"November","December" };

	for (int i = 0; i < 12 ; ++i)
		mons[i] = monsNames[i];
}

void Date::printMons(string mons[12]) {
	string p = "\t";
	cout << "\n";

	for (int i = 0,c = 0; i < 4; ++i) {
		for (int j = 0; j < 3; ++j,c++) 			
			cout <<c+1 << "." << mons[c] << "   " + p;
		cout << endl;
	}
}

void Date::printDays() {
	string s;
	cout << "\n";

	for (int i = 1; i <= getLastDay(); ++i) {
		s = i % 5 == 0 ? "\n" : " ";
		cout << i << s;
	}
	
}

void Date::fillYrs(int yrs[20]) {

	//Current year and index
	for (int i = 0, cur_year = 2015; i < 20; ++i, cur_year++)
	{
		yrs[i] = cur_year;
		
		/*if (i % 2 != 0)
			leapYr = true;
		else if (i % 2 == 0)
			leapYr = false;*/

	}
}

void Date::printYrs(int yrs[20]) {
	string sp = "\t";
	cout << "\n";
	for (int i = 1; i <= 19; ++i, sp = i % 4 == 0 ? "\n" : "\t")
		cout << yrs[i] << sp;
}

//Data Validation

void Date::checkFeb(string mon) {
	if (mon == "February")
		setLastDay(LAST_FEB_MONTH_DAY);
}

void Date::leapYear(int yr) {
	if (yr % 2 == 0)
		setLastDay(LAST_MONTH_DAY);
	else
		setLastDay(LAST_MONTH_DAY_LEAP_YEAR);

}

void Date::runFunctions() {
	//checkDate(int userIn, string dateStr)
	int userIn;
	string dateStr;

	//Year
	fillYrs(years);
	printYrs(years);

	cout << "\nYear: ";
	cin >> userIn;

	while (userIn < 2015 || userIn > 2030) {
		cout << "Enter valid Year from the provided above: ";
		cin >> userIn;
	}

	for (int i = 1; i <= 19; i++)
		if (userIn == years[i])
			dateStr += to_string(years[i]) + " ";
	
	leapYear(userIn);

	//Month
	fillMons(months);
	printMons(months);

	cout << "\nMonth: ";
	cin >> userIn;

	while (userIn < 0 || userIn > 12) {
		cout << "Enter valid Month from the provided above: ";
		cin >> userIn;
	}

	for (int i = 1; i <= 12; ++i)
		if (userIn == i)
			dateStr += months[i - 1] + " ";

	checkFeb(months[userIn-1]);

	//Days
	printDays();

	cout << "\nDay: ";
	cin >> userIn;

	while (userIn < 1 || userIn > getLastDay()) {
		cout << "Enter valid Day: ";
		cin >> userIn;
	}

	dateStr += to_string(userIn) + " ";

	//cout << "\nDate: " << dateStr << "\n";

	fullDate = dateStr;

}

string Date::getFullDate() {
	return fullDate;
}