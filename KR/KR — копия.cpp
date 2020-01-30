#include <iostream>
#include "stipend.h"
#include "mathelp.h"
#include "collect_stipend.h"

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

int main_menu() {

    system("cls");

	while (1)
	{
		system("cls");
		cout << "Выберите пункт меню" << endl;
		cout << "1 - Добавить строку выплаты" << endl;
		cout << "2 - Добавить строку выплаты с мат. помощью" << endl;
		cout << "3 - Удаление строки ведомости по номеру" << endl;
		cout << "4 - Просмотреть строку ведомости по номеру" << endl;
		cout << "5 - Просмотр ведомости" << endl;
		cout << "0 - Выход" << endl;
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
			cout << "Фамилия Имя Отчество студента" << endl;
			cin >> FIO;
			system("cls");
			cout << "Курс обучения" << endl;
			cin >> grade;
			system("cls");
			cout << "Сумма начисленной стипендии" << endl;
			cin >> payment_sum;
			system("cls");
			cout << "Начислялась ли мат помощь?" << endl;
				cout << "0 - Нет" << endl;
				cout << "1 - Да" << endl;
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
			cout << "Введите номер объекта для удаления" << endl;
			int i;
			cin >> i;
			i--;
			a -= i;
		}
		break;
		case 3:
		{
			cout << "Количество элементов в коллекции - " << a.Size() << endl;
		}
		break;
		case 4:
		{
			cout << "Введите номер объекта для вывода" << endl;
			int i;
			cin >> i;
			if (i > a.Size())
			{
				cout << "Элемента с данным номером не существует" << endl;

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
			cout << "Данного пункта меню не существует" << endl;
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
