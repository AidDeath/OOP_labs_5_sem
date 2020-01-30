#include <iostream>
#include "stipend.h"
#include "mathelp.h"

/*Иокша Дмитрий Александрович
Описать на языке С++ класс:
8)	строка ведомости на выдачу матпомощи, вычисляемой как процент от стипендии
Разработка класса должна быть выполнена с простым наследованием от класса из лабораторной работы №1.
Все поля класса должны быть частными (private).
Разработанный класс должен содержать следующие методы:
1)	конструкторы следующих видов:
	конструктор без параметров, очищающий переменные объекта класса;
	конструктор, инициализирующий все переменные класса значениями, заданными в качестве параметров, реализованный через список инициализации с вызовом конструктора базового класса;
2)	деструктор (при необходимости);
3)	установки значений отдельных переменных класса (отдельные методы для каждой переменной);
4)	получения значений отдельных переменных класса (отдельные методы для каждой переменной);
5)	отображения на экране содержимого объекта класса.

*/

using namespace std;



int main() {
    setlocale(LC_CTYPE, "rus");
    cout << "Constructor without params" << endl;
    mathelp wo_params;
    wo_params.output();
    cout << endl << endl;

    cout << "Constructor with filling" << endl;
    mathelp filled("Ioksha Dzmitry Alexandrovich", 2, 1000.23f, true, 54.45f);
    filled.output();
    cout << endl << endl;

    cout << "write and read help sum" << endl;
    wo_params.set_help_sum(34.34f);
    cout << wo_params.get_help_sum() << endl;




   //NULL(wo_params);  // Destruction of oblects and calling destructor

}