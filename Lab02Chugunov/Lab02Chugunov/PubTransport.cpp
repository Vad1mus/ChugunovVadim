#include "PubTransport.h"


//Getters and Setters//
const string PubTransport::GetNameOfTransport()const
{
    return nameOfTransport;
}

const int PubTransport::GetTransportID() const
{
    return transportID;
}

const int PubTransport::GetHight() const
{
    return hight;
}

const int PubTransport::GetSeatsNumber() const
{
    return seatsNumber;
}
void PubTransport::SetHight(const int hight)
{
    this->hight = hight;
}
void PubTransport::SetSeatsNumber(const int seatsNumber)
{
    this->seatsNumber = seatsNumber;
}
void PubTransport::SetTransportID(const int transportID)
{
    this->transportID = transportID;
}

void PubTransport::enterData()
{
    cout << "\nEnter a seats number of transport\n";
    cin >> seatsNumber;

    cout << "\nEnter a transport ID\n";
    cin >> transportID;

    cout << "\nEnter a transport hight (In the meters)\n";
    cin >> hight;

    cout << "\nEnter a name of Transport\n";
    cin >> nameOfTransport;

}