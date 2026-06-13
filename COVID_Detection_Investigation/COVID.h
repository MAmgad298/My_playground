#include<iostream>
using namespace std;

#ifndef CVD_H

class COVID {
public:
	//constructors
	COVID();
	COVID(int, float, float, float);

	//functions - setters
	void setTtlTimes(int);
	void setSymTimes(float);
	void setNotDeseaseNeg(float);
	void setDeseaseNeg(float);

	//functions - getters
	int getTtlTimes();
	float getSymTimes();
	float getNoSymTimes();
	float getDeseasePost(); //positive_COVID_With_Symptoms
	float getDeseaseNeg(); //negativeCOVID_With_Symptoms
	float getNotDeseaseNeg();  //negativeCOVID_With_no_Symptoms
	float getNotDeseasePost(); //positiveCOVID_With_no_Symptoms
	float probHaveCOVID();


private:
	int totalTimes;
	float symptomsTimes,  negativeCOVID_With_Symptoms,
		negativeCOVID_With_no_Symptoms;
	//float probHaveCOVID;
};

#endif // !CVD_H
