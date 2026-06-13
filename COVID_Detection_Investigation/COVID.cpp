#include"COVID.h"

COVID::COVID(){

}

COVID::COVID(int newTtlTimes, float newSymTimes, float newInfectedP, float newNotDeseaseNeg) {
	setTtlTimes(newTtlTimes);
	setSymTimes(newSymTimes);
	setDeseaseNeg(newInfectedP);
	setNotDeseaseNeg(newNotDeseaseNeg);
}


void COVID::setTtlTimes(int nTL) {
	totalTimes = nTL;
}

void COVID::setSymTimes(float nST) {
	symptomsTimes = nST;
}

void COVID::setNotDeseaseNeg(float nNNST) {
	negativeCOVID_With_no_Symptoms = nNNST;
}

// Infected Negative Times
void COVID::setDeseaseNeg(float nINT) {
	negativeCOVID_With_Symptoms = nINT;
}


int COVID::getTtlTimes() {
	return totalTimes;
}

float COVID::getSymTimes() {
	return symptomsTimes;
}

float COVID::getNoSymTimes() {
	return getTtlTimes() - getSymTimes();
}

float COVID::getDeseaseNeg() {
	return negativeCOVID_With_Symptoms;
}


//Desease positive
float COVID::getDeseasePost() {
	return getSymTimes() - getDeseaseNeg();
}


float COVID::getNotDeseaseNeg() {
	return negativeCOVID_With_no_Symptoms;
}


//Not Desease Positive
float COVID::getNotDeseasePost() {
	return getNoSymTimes() - getNotDeseaseNeg();
}

float COVID::probHaveCOVID() {
	return getDeseasePost() / (getDeseasePost() + getNotDeseasePost());
}
