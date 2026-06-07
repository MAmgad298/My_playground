#include<iostream>
#include"GPA.h"
#include "CourseNameFormat.h"
//#include"Date.h"
#include"Clinic_Visit.h"

using namespace std;

string studentName;

string listOfCrs[100] = {
	"Code\tCourse Name\n",
	"CS111\tIntroduction to Computers\n",
	"LH135\tESP I\n",
	"BA003\tMath 0\n",
	"BA113\tPhysics\n",
	"AR115\tVisual Studies\n",
	"LH136\tESP II\n",
	"BA101\tCalculus I\n",
	"CS143\tIntroduction to problem solving & programming\n" };

void printListOfCourses(string[]);
void orderDataEntry();
void printServices();
void switchService(int);
string registerNewSt(string);
bool isRegistered(string);

int main() {

	int userIn;
	string sName;
	bool somethingElse;

	

	do {
		cout << "1.Register New Student ?\n2.Login?\n";
		cin >> userIn;

		switch (userIn) {

		case 1:
			studentName = registerNewSt(sName); break;
		case 2:
			orderDataEntry(); break;
		}
		cout << "Login? 1.yes 2.No\n";
		cin >> userIn;
		somethingElse = userIn == 1 ? true : false;
	} while (somethingElse);

	return 0;

}

void printServices() {

	string fname,lname,name;

	cout << "Type your name to login:\n";
	cout << "First Name: "; 
	cin >> fname;
	name += fname;

	cout << "Last Name: ";
	cin >> lname;
	name += " " + lname;

	bool isReg = isRegistered(name);

	while (!isReg) {
		name = "";
		cout << "\nYou're new student, Register first ! \n";
		name = registerNewSt(name);
		studentName = name;
		isReg = isRegistered(name);
		
	}

	cout << "\nHello, " + name << " \n\nChoose from the below:\n" <<
		"1.Student Grades \t" <<
		"2.GPA Calculator \n" <<
		"3.Register New Courses\t" <<
		"4.Unoffcial Transcript\n" <<
		"5.Semester Schedule\t" <<
		"6.Request a Clinical Visit\n";

}

void switchService(int srvc) {

	switch (srvc) {
	case 1:cout << "under progress"; break;
	case 2:
		if (srvc == 2)  GPA gpa1;
		; break;
	case 3:
		if(srvc==3)
		{
			printListOfCourses(listOfCrs);
			Course crs; 
		}
		break;
	case 6: 
		if(srvc==6)
		{
			Clinic_Visit cv;
			cv.mainFn();
		}
		break;

		//default:cout << "enter valid value." << endl; break;
	}

}

void orderDataEntry() {

	bool additionalProcess=false;
	int somthingelse=0;
	int makeOrder=0;

	do {

		printServices();
		cin >> makeOrder;
		switchService(makeOrder);

		cout << "\nDo Something else ? \n1.Yes\t2.No\n";
		cin >> somthingelse;

		additionalProcess = somthingelse == 1 ? true : somthingelse == 2 ? false : false;

	} while (additionalProcess);

}

void printListOfCourses(string crs_list[]) {
	for (int i = 0; i < 8; ++i)
		cout << crs_list[i];
}

string registerNewSt(string stName) {
	string name;
	cout << "Enter first name: ";
	cin >> name;
	stName += name;
	cout << "Enter last name: ";
	cin >> name;
	stName += " " + name;
	
	return stName;
}

bool isRegistered(string writtenName) {
	if (writtenName == studentName)
		return true;
	else
		return false;
}

