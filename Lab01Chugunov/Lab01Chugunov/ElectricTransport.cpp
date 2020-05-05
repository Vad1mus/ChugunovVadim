#include "PubTransport.h"
#include "ElectricTransport.h"

const int ElectricTransport:: GetSize() const
{
	return size;
}
void ElectricTransport::addElem(const PubTransport& transport)
{
	if (size == 0)
	{
		this->list = new PubTransport[size + 1];
		this->list[size] = transport;
		size++;
	}
	else
	{
		PubTransport* newList = new PubTransport[size + 1];
		for (int i = 0; i < size; i++)
		{
			newList[i] = list[i];
		}
		newList[size] = transport;
		delete[]list;
		list = newList;
		size++;
	}

}

void ElectricTransport::deleteElem(int pos)
{
	if (size == 0)
	{
		cout << "\nERROR:list is empty\n";
	}
	else
	{
		PubTransport* newList = new PubTransport[size - 1];
		for (int i = 0,j=0; i < size; i++,j++)
		{
			if (i == pos)
			{
				j--;
				continue;
			}
			newList[j] = list[i];
		}
		delete[]list;
		list = newList;
		size--;
	}
}
void ElectricTransport::printList()
{
	if (size == 0)
	{
		cout << "\nERROR:list is empty!!!\n";
	}
	else
	{
		for (int i = 0; i < size; i++)
		{
			cout << "\n============================== ";
			printf("\nInfo about Transport #%d: \n", i + 1);
			cout << "Seats number of Transport: " << list[i].GetSeatsNumber() << endl;
			cout << "Transport ID: " << list[i].GetTransportID() << endl;
			cout << "Hight of Transport: " << list[i].GetHight()<<"(meters)"<<  endl;
			cout << "\n==============================\n";
		}
		
	}
}

void ElectricTransport:: endOfProgram()
{
	delete[] list;
	list = nullptr;
}