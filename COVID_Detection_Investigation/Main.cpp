#include<iostream>
#include "COVID.h"
using namespace std;
int main() {

	int totalTimes;
	float symptomsTimes, negativeCOVID_With_Symptoms, 
		negativeCOVID_With_no_Symptoms;

	cout << "Hello, How many times have you been checked?\n";
	cin >> totalTimes;

	cout << "How many times have you checked with COVID symptoms?\n(infected)\n";
	cin >> symptomsTimes; 

	cout << "After checking, how many times did you get COVID Negative and you had symptoms?\n(Infected & Negative)\n";
	cin >> negativeCOVID_With_Symptoms; 

	cout << "After checking, how many times did you have COVID Negative with no Symptoms?\n(Not Infected & Negative)\n";
	cin >> negativeCOVID_With_no_Symptoms; 

	COVID CVD_caseI(totalTimes, symptomsTimes, negativeCOVID_With_Symptoms, negativeCOVID_With_no_Symptoms);

	cout << "\nIn " << CVD_caseI.probHaveCOVID() * 100 <<"% you do have COVID! " << endl;

	return 0;
}