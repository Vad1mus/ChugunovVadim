#pragma once
#include<iostream>
using std::cout;
using std::cin;
using std::endl;

class PubTransport
{
public:
	const int GetSeatsNumber() const;
	const int GetTransportID()const ;
	const int GetHight()const;
	void SetSeatsNumber(int seatsNumber);
	void SetTransportID(int transportID);
	void SetHight(int hight);
	void enterData();

private:
	int seatsNumber;
	int transportID;		// Rare characteristics
	int hight;
};