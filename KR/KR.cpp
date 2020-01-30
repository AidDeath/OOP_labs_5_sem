#include <iostream>
#include "stipend.h"
#include "mathelp.h"
#include "collect_stipend.h"
#include <Windows.h>

/*Иокша Дмитрий Александрович

Переработать класс, разработанный в ходе выполнения лабораторной работы №2 и являющийся коллекцией объектов,так, 
чтобы в ней могли содержаться объекты как базового (лабораторная работа №1), так и производного(лабораторная работа №3) класса.
Для корректной работы ранее выполнявшихся функций коллекции базовый и производный класс должны быть переработаны так, чтобы содержать:
1)	виртуальные деструкторы (при наличии деструкторов);
2)	методы отображения объекта на экране(сделать виртуальными).
Дополнительно должен быть разработан метод коллекциидля отображения
на экране отдельных (по номеру) объектов коллекции.


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
	
		cout << "Выберите пункт меню" << endl;
		cout << "1 - Добавить строку выплаты" << endl;
		cout << "2 - Просмотреть строку ведомости по номеру" << endl;
		cout << "3 - Удаление строки ведомости по номеру" << endl;
		cout << "4 - Просмотр ведомости" << endl;
		cout << "5 - Просмотр строки по номеру" << endl;
		cout << "6 - Количество строк в ведомости" << endl;
		cout << "0 - Выход" << endl;
		int choose;
		cin >> choose;
		switch (choose)
		{
		case 1:
		{
			
			cout << "Фамилия студента" << endl;
			cin >> surname;
			cout << "Имя студента" << endl;
			cin >> name;
			cout << "Отчество студента" << endl;
			cin >> sec_name;
			name += " ";
			name += sec_name += " ";
			name += surname;
			cout << "Курс обучения" << endl;
			cin >> grade;
			
			cout << "Сумма начисленной стипендии" << endl;
			cin >> payment_sum;
			
			cout << "Начислялась ли мат помощь?" << endl;
			cout << "0 - Нет" << endl;
			cout << "1 - Да" << endl;
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
				cout << "Сумма мат. помощи:" << endl;
				cin >> help_sum;
				flag_mp = true;
				break;
			}
			default:

				break;
			}
			
			cout << "Пометка о выдаче выплаты:" << endl;
			cout << "0 - Нет" << endl;
			cout << "1 - Да" << endl;
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
		cout << "Номер строки ведомости" << endl;
		int i;
		cin >> i;
		i--;
		collection.info(i)->output();
		system("pause");
		}
		break;
		case 3:
		{	
		cout << "Введите номер объекта для удаления" << endl;
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
			cout << "Номер строки для просмотра" << endl;
			cin >> i;
			collection.info(--i)->output();
			system("pause");
		}
		break;
		case 6:
		{
			cout << "В ведомости сейчас " << collection.count() << " строк" << endl;
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
		cout << "Повторите ввод, команда не распознана" << endl << endl;
		}
		break;
		}
		//system("pause");
	}
}