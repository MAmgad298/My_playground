#include<iostream>
using namespace std;

#ifndef LH

class LikelyHood {
public:
	//constructors
	LikelyHood();
	LikelyHood(int, int, int, int);

	//functions - setters
	void setTtl(int);
	void setAllPos(float);
	void setAllDeseases(float);
	void setDeseasePos(float);

	//functions - getters
	int getTtl();
	int getAllPos();
	int getAllDeseases();
	int getDeseasesPos();

	//functions - Data Driven (equation inputs)
	//int calcAllNegs();
	//int calcAllHealthy();
	//int calcDeseaseNeg();
	//int calcHealthyPos();
	//int calcHealthyNeg();

	//functions - Data Driven (Equation Terms - right handside)
	float rCalcPropDes();		// propability Infected (P(D) = P(D) / N(Total))
	float rCalcPropDesPos();	// propability Postive from the Infected  (P(+|D) = N(+) / N(Desease))
	float rCalcPropPos();		//propability Positive from all (P(+) = N(+) / N(Total))

	//functions - Data Driven (Equation Terms - Left handside)
	float lCalcPropDesPos();

private:
	int total;
	float positiveResults, negativeResults;
	float deseaseNo, healthyNo;
	float deseasePos;

};

#endif // !LH

