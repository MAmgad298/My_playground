#include<iostream>
#include<iomanip>
#include"LikelyHood.h"
using namespace std;

int main() {

	int total=0;

	int positiveResults = 0;
	int deseaseNo = 0;
	int deseasePos = 0;

	//how many ppl in total (Infected and healthy)?
	cout << "Type the total number of the sample: ";
	cin >> total;

	//Number of positive results 
	cout << "\nNumber of postive results?\n";
	cin >> positiveResults;

	//Number of Infected 
	cout << "Number of Infected: ";
	cin >> deseaseNo;

	//correct results (error free)
	cout << "\nHow many times has the device given correct results? (Postive Infected)?\n";
	cin >> deseasePos;

	LikelyHood case1(total,positiveResults,deseaseNo,deseasePos);
	
	cout << "\nIn " << setprecision(2)<< case1.lCalcPropDesPos() * 100 << "% you're COVID infected\n";

	return 0;

}