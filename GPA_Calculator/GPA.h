#include<iostream>
using namespace std;

#ifndef GPA_H
#define GPA_H

class GPA {
public:
	//Constructors
	GPA();

	//Funcions - setters
	void setCredits();
	void setGrade();
	void setThisGPA(double);

	//functions - getters
	float getCredits();
	float getGrades(string);
	string getStringGrades();
	float getPts();

	float getTtlCredits();
	float getTtlPts();

	double getThisGPA();

	//int getGPA(int,int);
	float getCGPA();

	//Functions - GPA System 
	string getGpaSystem();
private:

	float credits;
	string grade;

	float ttlCdts;
	float ttlPnts;

	float thisGPA;

};

#endif // !GPA_H

