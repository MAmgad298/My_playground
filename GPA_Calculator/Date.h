#include<iostream>
using namespace std;

#ifndef DT_H

class Date {
public:
	//Constructor
	Date();
	Date(int, int, int);

	//functions- setters
	void setDays(int);
	void setMonths(int);
	void setYears(int);
	void setLastDay(int);

	//functions - getters
	int getDays();
	int getMonths();
	int getYears();
	string getFullDate();
	int getLastDay();

	//functions - fill Arrays
	void fillMons(string[]);

	//void fillDays(int[]);
	void fillYrs(int[]);

	//functions- printMons
	void printMons(string[]);
	void printDays();
	void printYrs(int[]);

	//check leapyear
	void leapYear(int);

	//check if febraury
	void checkFeb(string);

	//check months
	bool checkMonth(string);


	//functions - run
	void runFunctions();


private:
	string months[13];
	int days[32];
	int years[20];

	int const LAST_MONTH_DAY=30;
	int const LAST_MONTH_DAY_LEAP_YEAR = 31;
	int const LAST_FEB_MONTH_DAY=28;

	bool leapYr;

	int lastDay;

	int mon, day, year;

	string fullDate;

};
#endif // !DT_H

