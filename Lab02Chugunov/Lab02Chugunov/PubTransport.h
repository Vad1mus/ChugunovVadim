#pragma once
#include<iostream>
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::string;

class PubTransport
{
public:
	const int GetSeatsNumber() const;
	const int GetTransportID()const;
	const int GetHight()const;
	const string GetNameOfTransport() const;
	void SetSeatsNumber(int seatsNumber);
	void SetTransportID(int transportID);
	void SetHight(int hight);
	void enterData();

	// Default Constructor (using a list of initialization)
	PubTransport()
		: seatsNumber(NULL), transportID(NULL), hight(NULL), nameOfTransport("NULL")
	{
		cout << "\nDefault constructor of " << this << " was called.\n";
	}
	// Constructor with parameters (using a list of initialization)
	PubTransport(int seatsNumber, int transportID, int hight, string nameOfTransport)
		:seatsNumber(seatsNumber),
		transportID(transportID),
		hight(hight),
		nameOfTransport(nameOfTransport)
	{
		cout << "\nConstructor with parameters " << this << " was called.\n";
	}
	// Constructor of copy (using a list of initialization)
	PubTransport(const PubTransport& copyObject) 
		:seatsNumber(copyObject.seatsNumber),
		transportID(copyObject.transportID),
		hight(copyObject.hight),
		nameOfTransport(copyObject.nameOfTransport)
	{
		cout << "\nConstructor of copy " << this << " was called.\n";
	}
	
	// Destructor
	~PubTransport()
	{
		cout << "\nThe destructor of: " << this << " have called.\n";
	}
	
private:
	int seatsNumber;
	int transportID;		// Rare characteristic
	int hight;
	string nameOfTransport;
};