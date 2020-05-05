#pragma once


class ElectricTransport
{
public:
	void addElem(const PubTransport& transport);
	void deleteElem(int pos);
	void printList();
	void endOfProgram();
	const int GetSize() const;

private:
	PubTransport* list;
	int size=0;
};