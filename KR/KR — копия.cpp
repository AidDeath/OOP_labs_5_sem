#include <iostream>
#include "stipend.h"
#include "mathelp.h"
#include "collect_stipend.h"

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

int main_menu() {

    system("cls");

	while (1)
	{
		system("cls");
		cout << "�������� ����� ����" << endl;
		cout << "1 - �������� ������ �������" << endl;
		cout << "2 - �������� ������ ������� � ���. �������" << endl;
		cout << "3 - �������� ������ ��������� �� ������" << endl;
		cout << "4 - ����������� ������ ��������� �� ������" << endl;
		cout << "5 - �������� ���������" << endl;
		cout << "0 - �����" << endl;
		int choose;
		cin >> choose;
		switch (choose)
		{
		case 1:
		{
			std::string FIO;
			unsigned short grade;
			double payment_sum;
			bool received;
			double help_sum;
			system("cls");
			cout << "������� ��� �������� ��������" << endl;
			cin >> FIO;
			system("cls");
			cout << "���� ��������" << endl;
			cin >> grade;
			system("cls");
			cout << "����� ����������� ���������" << endl;
			cin >> payment_sum;
			system("cls");
			cout << "����������� �� ��� ������?" << endl;
				cout << "0 - ���" << endl;
				cout << "1 - ��" << endl;
				int choise = 0;
				cin >> choise;
				 //(choise == 1) ?  : ;
				switch (choise)
				{
				case 0: {
				
				}
				case 1: {
				
				}
				default:
					break;
				}
				



			Computer x(memory, name, freq, video);
			a.addelem(&x);
		}
		break;
		case 2:
		{
			cout << "������� ����� ������� ��� ��������" << endl;
			int i;
			cin >> i;
			i--;
			a -= i;
		}
		break;
		case 3:
		{
			cout << "���������� ��������� � ��������� - " << a.Size() << endl;
		}
		break;
		case 4:
		{
			cout << "������� ����� ������� ��� ������" << endl;
			int i;
			cin >> i;
			if (i > a.Size())
			{
				cout << "�������� � ������ ������� �� ����������" << endl;

			}
			else
			{
				i--;
				a.print(i)->vyvod();
			}
		}
		break;
		case 5:
		{
			cout << a;
		}
		break;
		case 0:
		{
			menu = false;
		}
		break;
		default:
		{
			cout << "������� ������ ���� �� ����������" << endl;
		}
		break;
		}
		system("pause");
}

int main() {
    setlocale(LC_CTYPE, "rus");


    collect_stipend merged;
    merged.add(new stipend("Ioksha Dzmitry Alexandrovich", 3, 1000.23f, true));
    merged.add(new stipend("Volayevich Petr Vasilyevich", 5, 528.18f, true));
    merged.add(new mathelp("Grigor'ev Alexander Andreevich", 1, 8565.20f, true,56.23f));
    merged.add(new mathelp("Kutovsky Fedor Nikitich", 4, 1101.03f, true, 32.32f));
    merged.add(new stipend("Ioksha Dzmitry Alexandrovich", 3, 1000.23f, true));

    merged -= 4;
    cout << "===========================" << endl;
    cout << "DISPLAYING MERGED COLLECTION" << endl;
    cout << merged;
    cout << endl;
    cout << "===========================" << endl;

    cout << "===========================" << endl;
    cout << "Displaying elem by number in collection " << endl;
    merged.info(3)->output();
    cout << endl;
    cout << "===========================" << endl;

    std::string FIO;
    unsigned short grade; 
    double payment_sum;	
    bool received; 
	double help_sum;
    collect_stipend collection;


           
    main_menu();
   




   //NULL(wo_params);  // Destruction of oblects and calling destructor

}
