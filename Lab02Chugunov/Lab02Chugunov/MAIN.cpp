/**
 * @mainpage
 * <b> ����������� ������ No 2. <br/> �����. </b>
 * <br/> <b> ���� ������: </b> �������� ����� ������ ��� �����. �������� �������
 *	������������. <br/>
 * <b> 1 �������� �� ������ <br/> ������� �������� <br/> </b>
 * ��������� ��� �����:
 * <ul>
 * <li> - ����, �� �������� ������� ��������� �����. ��� �����, �
 *	������ ���� ������� ���� ����� ��� �������� ���� (������, ��� ���� �
 *	��� ���� ���� ��������� ��������������� �ᒺ���); </li>
 * <li> - ����, �� �� � ��� ��������� ����� �ᒺ��� �������� ����� ��
 *	�� � ��� ������ ���������, ��������� ��������, ��������� �������� ��
 *	������� (��� ��������������), ���� ��� �������� �� �����. </li>
 * </ul>
 *
 * @author Chugunov V.
 * @date 31-mar-2020
 * @version 1.0
 */

#include "PubTransport.h"
#include "ElectricTransport.h"
#include "Functions.h"

int main()
{
	system("color 0A");
	PubTransport electric_bus;
	ElectricTransport listOfTransport;

	int choose;

	do
	{
		Menu();
		cin >> choose;
		if (choose < 1 || choose>4)
		{
			cout << "\nError: Please enter a number range of 1 to 4\n";
		}
		switch (choose)
		{
		case 1:
			electric_bus.enterData();
			listOfTransport.addElem(electric_bus);
			break;
		case 2:
			int pos;
			cout << "Choose a position that transport will be deleted: ";
			cin >> pos;
			if (listOfTransport.GetSize() == 0)
			{
				cout << "\n!!!List is empty!!!\n\n";
				break;
			}
			if ((pos - 1) >= listOfTransport.GetSize() || (pos - 1) < 0)
			{
				cout << "ERROR";
				break;
			}
			listOfTransport.deleteElem(pos - 1);
			break;
		case 3:
			listOfTransport.printList();
			break;
		case 4:
			cout << "\nSum of all People that can hold Electrical Public Transport is:  "
				<< listOfTransport.AllSeatsNumber() << " (people)\n";
			listOfTransport.endOfProgram();
			break;
		}
	} while (choose != 4);


	return 0;
}