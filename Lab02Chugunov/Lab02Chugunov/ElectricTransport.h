#pragma once

class ElectricTransport
{
public:
	void addElem(const PubTransport& transport);
	void deleteElem(int pos);
	void printList();
	void endOfProgram();
	const int GetSize() const;
	 int AllSeatsNumber() ; // Number of ALL people that electrical public transport can hold

private:
	PubTransport* list;
	int size = 0;
};