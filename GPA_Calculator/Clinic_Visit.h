#include "Date.h"
#include<iostream>

using namespace std;

#ifndef CNC_V
class Clinic_Visit {

public:

	//Constructors
	Clinic_Visit();

	//funtions-setters
	void setComplaint(string);
	void setDate(Date);

	//functions-getters
	string getComplaint();
	string getDate();

	//functions - main run
	void mainFn();

private:

	Date d;
	string complaint;

};
#endif