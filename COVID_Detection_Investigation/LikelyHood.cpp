#include "LikelyHood.h"

LikelyHood::LikelyHood(){
	total = 0;
	positiveResults = 0, negativeResults = 0;
	deseaseNo = 0, healthyNo = 0;
	deseasePos = 0;
}

LikelyHood::LikelyHood(int newTtl, int newAllPos, int newAllDeseases, int newDeseasesPos) {
	setTtl(newTtl);
	setAllPos(newAllPos);
	setAllDeseases(newAllDeseases);
	setDeseasePos(newDeseasesPos);

}

//Setters
void LikelyHood::setTtl(int newTtl) { total = newTtl;}
void LikelyHood::setAllPos(float newPosNo) { positiveResults = newPosNo; }
void LikelyHood::setAllDeseases(float newDNo ) { deseaseNo = newDNo;}
void LikelyHood::setDeseasePos(float newDPosNo) { deseasePos = newDPosNo; }

//Getters
int LikelyHood::getTtl() { return total; }
int LikelyHood::getAllPos() { return positiveResults; }
int LikelyHood::getAllDeseases() { return deseaseNo; }
int LikelyHood::getDeseasesPos() { return deseasePos; }

//Calculations - report purpose
//int LikelyHood::calcAllNegs() { return getTtl() - getAllPos(); }
//int LikelyHood::calcAllHealthy() { return getTtl() - getAllDeseases(); }
//int LikelyHood::calcDeseaseNeg() { return getAllDeseases() - getDeseasesPos(); }
//int LikelyHood::calcHealthyNeg() { return calcAllNegs() - calcDeseaseNeg(); }
//int LikelyHood::calcHealthyPos() { return calcAllHealthy() - calcHealthyNeg(); }

// Right handside
float LikelyHood::rCalcPropDesPos() { return float(getDeseasesPos()) / float(getAllDeseases()); }
float LikelyHood::rCalcPropDes() { return float(getAllDeseases()) / float(getTtl()); }
float LikelyHood::rCalcPropPos() { return float(getAllPos()) / float(getTtl()); }

//Left Handside
float LikelyHood::lCalcPropDesPos() { return (rCalcPropDesPos() * rCalcPropDes()) / rCalcPropPos(); }