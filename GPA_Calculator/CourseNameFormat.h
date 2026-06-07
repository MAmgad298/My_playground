#include<iostream>
#include<string>
using namespace std;

#ifndef CRS_H

class Course {
public :
	//constructor
	Course();
	Course(char[], int);

	//functions -setters
	void setCrsName();
	void setCrsId();
	
	//void setCrsPrice();

	//functions - getters
	string getCrsName();
	int getCrsId();
	string getCrsNameId();
	string getCrsFullName(); // takes the entered codes by user and returns the course name
	float getCrsPrice() const;

	//functions - validation
	bool validateCrsNameId();
	

private:

	char crsName[2] = "h";
	int crsId;

	char* crsNamePtr;

	const float crsPrice = 110;
};


#endif
