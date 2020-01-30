#include <iostream>
#include "stipend.h"

/*		Иокша Дмитрий Александрович
В НАЧАЛЕ ПРОГРАММЫ ДОЛЖНА БЫТЬ УКАЗАНА ФАМИЛИЯ СТУДЕНТА
ПРИ ВВОДЕ И ПРИ ВЫВОДЕ ДОЛЖЕН БЫТЬ ПОЯСНЯЮЩИЙ ТЕКСТ
ВО ВСЕХ ЛАБОРАТОРНЫХ РАБОТАХ В ФУНКЦИИ MAIN() ДОЛЖНА БЫТЬ
ПРОДЕМОНСТРИРОВАНАРАБОТОСПОСОБНОСТЬ ВСЕХ РАЗРАБОТАННЫХ
МЕТОДОВ ДЛЯ ОБЫЧНЫХ И ДЛЯ ДИНАМИЧЕСКИХ ОБЪЕКТОВ


8)	строка ведомости на выдачу стипендии;
Описать на языке С++ класс:
*/

using namespace std;



int main() {
    setlocale(LC_CTYPE, "rus");
    cout << "Constructor without params" << endl;
    stipend wo_params;
    wo_params.output();
    cout << endl;

    cout << "Constructor with filling" << endl;
    stipend filled("Ioksha Dzmitry Alexandrovich", 2, 1000.23f, true);
    filled.output();
    cout << endl;

    cout << "Constructor with copying" << endl;
    stipend copy(filled);
    copy.output();
    cout << endl;

    cout << "Writing one by one" << endl;
    stipend one_by_one;
    one_by_one.set_fio("Лукашенко Александр Григорьевич");
    one_by_one.set_grade(5);
    one_by_one.set_payment_sum(20.01f);
    one_by_one.set_received(false);
    one_by_one.output();

    cout << endl;

    cout << "Reading one by one" << endl;
    cout << one_by_one.get_fio() << "\n" << one_by_one.get_grade() << "\n" << one_by_one.get_payment_sum() <<"\n"  << one_by_one.get_received() << "\n"<< endl;
    cout << endl;


   //NULL(wo_params);  // Destruction of oblects and calling destructor

}