#include"GPA.h"

GPA::GPA() {

	credits = 0;
	ttlCdts = 0;
	ttlPnts = 0;
	thisGPA = 0;

	getCGPA();
	cout << "Total Credits: " << getTtlCredits() << "\n"
		<<"total points: "<< getTtlPts()<<"\n"
		<< "CGPA: " << getThisGPA()<<"\n"
		<< "Overall: " << getGpaSystem();

}

void GPA::setCredits() {
	bool cdtValid=false;
	
	do {
		cout << "Enter Credits: ";
		cin >> credits;

		if (credits < 0) {
			cout << "Enter valid credit...\n";
			cdtValid = false;
		}
		else
			cdtValid = true;
	} while (!cdtValid);

}

void GPA::setGrade() {
	bool validGrade = false;
	do {
		cout << "Grade:";
		cin >> grade;

		if (getGrades(grade) < 0 ) {
			cout << "Enter valid grade...\n";
			validGrade = false;
		}
		else
			validGrade = true;
	} while (!validGrade);
}

void GPA::setThisGPA(double newThisGPA) {
	thisGPA = newThisGPA;
}

float GPA::getCredits() {
	return credits;
}

float GPA::getGrades(string g) {
	float gpaSystem = 0;

	if (g == "A+" || g == "a+") gpaSystem = 12.0 / 3;
	else if (g == "A" || g == "a") gpaSystem = 11.5 / 3;
	else if (g == "A-" || g == "a-") gpaSystem = 11.0 / 3;

	else if (g == "B+" || g == "b+") gpaSystem = 10.0 / 3;
	else if (g == "B" || g == "b") gpaSystem = 9.0 / 3;
	else if (g == "B-" || g == "b-") gpaSystem = 8.0 / 3;

	else if (g == "C+" || g == "c+") gpaSystem = 7.0 / 3;
	else if (g == "C" || g == "c") gpaSystem = 6.0 / 3;
	else if (g == "C-" || g == "c-") gpaSystem = 5.0 / 3;

	
	else if (g == "D" || g == "d") gpaSystem = 4.0 / 3;

	else if (g == "F" || g == "f" || g == "P" || g == "p") gpaSystem = 0.0;

	else gpaSystem = -1.0;

	return gpaSystem;
}

double GPA::getThisGPA() {
	return thisGPA;
}

string GPA::getStringGrades() {
	return grade;
}

float GPA::getPts() {
	return getCredits() * getGrades(getStringGrades());
}

float GPA::getCGPA() {

	bool anotherCrs = false;
	string yesNo;
	float gpa=0.0;
	do {

		setCredits();
		setGrade();
		getPts();

		ttlPnts += getPts();
		ttlCdts += getCredits();

		gpa = double(ttlPnts) / double(ttlCdts);

		cout << "Enter another course ? (Y/N)";
		cin >> yesNo;

		anotherCrs = yesNo == "n" || yesNo == "N" ? false : true;

	} while (anotherCrs);

	setThisGPA(gpa);
	

	return gpa;
}

float GPA::getTtlCredits() {
	return ttlCdts;
}
float GPA::getTtlPts() {
	return ttlPnts;
}

string GPA::getGpaSystem() {
	float gpaValue = thisGPA;
	string finalEvaluation;

	finalEvaluation = gpaValue >= 3.4 && gpaValue <= 4.0 ? "Excellent" :
		gpaValue >= 2.8  && gpaValue < 3.4 ? "Very Good" :
		gpaValue >= 2.4 && gpaValue < 2.8 ? "Good" :
		gpaValue >= 2.0 ? "Pass" :
		"Fail";

	cout << "GPA value: "<<gpaValue << endl;

	return finalEvaluation;
}
