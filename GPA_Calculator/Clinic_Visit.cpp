#include "Clinic_Visit.h"
//#include "Date.h"

Clinic_Visit::Clinic_Visit(){
	
}

void Clinic_Visit::setComplaint(string newCom) {
	complaint = newCom;
}

string Clinic_Visit::getComplaint() {
	return complaint;
}

//void Clinic_Visit::setDate(Date newD) {
//	d = newD;
//}

string Clinic_Visit::getDate() {
	return d.getFullDate();
}

void Clinic_Visit::mainFn() {
	//d.runFunctions();
	int c=0;
	string userIn,additional="";
	bool somethingElse=false;

	do {
		cout << "From What do you suffer? \n";
		cin >> userIn;

		additional += somethingElse == false ? userIn : " &\n" + userIn;

		setComplaint(additional);

		cout << "Somthing Else? ( 1.Yes / 2.No )\n";
		cin >> c;

		somethingElse = c == 1 ? true : false;

	} while (somethingElse);


	cout << "When would you like to visit the doctor? \n";
	d.runFunctions();

	cout << "\nYou suffer from : \n"<< getComplaint() + "\n" 
		+ "You've chosen to visit the doctor on : "<<getDate() << endl;

}