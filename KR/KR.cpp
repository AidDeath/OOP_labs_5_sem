#include <iostream>
#include "stipend.h"
#include "mathelp.h"
#include "collect_stipend.h"
#include <Windows.h>

/*����� ������� �������������

������������ �����, ������������� � ���� ���������� ������������ ������ �2 � ���������� ���������� ��������,���, 
����� � ��� ����� ����������� ������� ��� �������� (������������ ������ �1), ��� � ������������(������������ ������ �3) ������.
��� ���������� ������ ����� ������������� ������� ��������� ������� � ����������� ����� ������ ���� ������������ ���, ����� ���������:
1)	����������� ����������� (��� ������� ������������);
2)	������ ����������� ������� �� ������(������� ������������).
������������� ������ ���� ���������� ����� ������������ �����������
�� ������ ��������� (�� ������) �������� ���������.


*/

using namespace std;

int main()
{
	setlocale(LC_CTYPE, "rus");
	system("cls");
	bool active = true;
	collect_stipend collection;
	collection.add(new stipend("Ioksha Dzmitry Alexandrovich", 3, 1000.23f, true));
	collection.add(new mathelp("Kutovsky Fedor Nikitich", 4, 1101.03f, true, 32.32f));

	system("color FC");
	while (active)
	{
		std::string name;
		std::string surname;
		std::string sec_name;
		unsigned short grade;
		double payment_sum;
		bool received, flag_mp;
		double help_sum;


		system("cls");
	
		cout << "�������� ����� ����" << endl;
		cout << "1 - �������� ������ �������" << endl;
		cout << "2 - ����������� ������ ��������� �� ������" << endl;
		cout << "3 - �������� ������ ��������� �� ������" << endl;
		cout << "4 - �������� ���������" << endl;
		cout << "5 - �������� ������ �� ������" << endl;
		cout << "6 - ���������� ����� � ���������" << endl;
		cout << "0 - �����" << endl;
		int choose;
		cin >> choose;
		switch (choose)
		{
		case 1:
		{
			
			cout << "������� ��������" << endl;
			cin >> surname;
			cout << "��� ��������" << endl;
			cin >> name;
			cout << "�������� ��������" << endl;
			cin >> sec_name;
			name += " ";
			name += sec_name += " ";
			name += surname;
			cout << "���� ��������" << endl;
			cin >> grade;
			
			cout << "����� ����������� ���������" << endl;
			cin >> payment_sum;
			
			cout << "����������� �� ��� ������?" << endl;
			cout << "0 - ���" << endl;
			cout << "1 - ��" << endl;
			int choise = 0;
			cin >> choise;
			switch (choise)
			{
			case 0: {
				flag_mp = false;
				break;
			}
			case 1: {
				;
				cout << "����� ���. ������:" << endl;
				cin >> help_sum;
				flag_mp = true;
				break;
			}
			default:

				break;
			}
			
			cout << "������� � ������ �������:" << endl;
			cout << "0 - ���" << endl;
			cout << "1 - ��" << endl;
			cin >> choise;
			received = (choise == 1) ? true : false;

			if (flag_mp)
			{
				collection.add(new mathelp(name, grade, payment_sum, received, help_sum));
			}
			else
			{
				collection.add(new stipend(name, grade, payment_sum, received));
			}
			system("pause");
		}
		break;
		case 2:
		{	
		cout << "����� ������ ���������" << endl;
		int i;
		cin >> i;
		i--;
		collection.info(i)->output();
		system("pause");
		}
		break;
		case 3:
		{	
		cout << "������� ����� ������� ��� ��������" << endl;
		int i;
		cin >> i;
		i--;
		collection -= i;
		}
		break;
		case 4:
		{	
			
			cout << collection;
			system("pause");
		}
		break;
		case 5:
		{
			int i;
			cout << "����� ������ ��� ���������" << endl;
			cin >> i;
			collection.info(--i)->output();
			system("pause");
		}
		break;
		case 6:
		{
			cout << "� ��������� ������ " << collection.count() << " �����" << endl;
			system("pause");
		}
		break;
		case 0:
		{
			active = false;
		}
		break;
		default:
		{	
		cout << "��������� ����, ������� �� ����������" << endl << endl;
		}
		break;
		}
		//system("pause");
	}
}