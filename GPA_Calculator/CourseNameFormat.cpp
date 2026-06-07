#include "CourseNameFormat.h"


//Course name consists of 2 parts Literal part (like BA, CS, LH ...)
//and the Numeric part (like 113, 111 ...)

//Function getCrsName() to get the literal part (ex:CS)
//Function getCrsId() to get the Numeric part (ex:111)
//Function getCrsNameId() to get Literal part combined by Numeric part (ex:CS111)

//Function getCrsFullName() to get the course full name after checking the parsed course code format 
// (ex:CS111 => introduction to computers)

Course::Course() {
	crsId = 0;
	crsNamePtr = NULL;
	

	setCrsName();
	setCrsId();
	
	cout << "\nCourse Name: " << getCrsFullName() << endl;

}

Course::Course(char newName[3], int newId) {
	crsId = newId;
	crsNamePtr = newName;
}

void Course::setCrsName() {
	string newName;
	bool validNewName;

	do {

		cout << "Type course Code (literal term): ";
		cin >> newName;

		if (newName.size() > 2)
		{
			cout << "Type valid Course Name (consists of 2 litters) ";
			validNewName = false;
		}
		else
			validNewName = true;
	} while (!validNewName);

	for (int i = 0; i < 2; ++i)
		crsName[i] = newName[i];

}

void Course::setCrsId() {
	int id = 0;

	cout << "Type course Id (Numeric Term): ";
	cin >> id;

	crsId = id;
}

string Course::getCrsName() {
	string crsNamePart;

	if(crsNamePtr != NULL)
		for (int i = 0; i < 2; ++i)
			crsNamePart += crsNamePtr[i];
	else
		for (int i = 0; i < 2; ++i)
			crsNamePart += crsName[i];
		
	return crsNamePart;
}

int Course::getCrsId() {
	return crsId;
}
string Course::getCrsNameId() {
	
	return getCrsName() + to_string(getCrsId());
}

string Course::getCrsFullName() {
	
	if (validateCrsNameId())
		if (getCrsNameId() == "CS111")
			return "Computer science";
		else if (getCrsNameId() == "LH135")
			return "ESP I";
		else if (getCrsNameId() == "BA3")
			return "Math 0";
		else if (getCrsNameId() == "BA113")
			return "Physics";
		else if (getCrsNameId() == "AR115")
			return "Visual Studies";
		else if (getCrsNameId() == "LH136")
			return "ESP II";
		else if (getCrsNameId() == "BA101")
			return "Calculus I";
		else if (getCrsNameId() == "CS143")
			return "Introduction to problem solving & programming";
		else
			return "Enter Valid Code";
	else
		return "You've entered wrong course code format. ";
}

bool Course::validateCrsNameId() {
	if (getCrsNameId().size() > 5)
		return false;
	else
		return true;
}

float Course::getCrsPrice() const {
	return crsPrice;
}