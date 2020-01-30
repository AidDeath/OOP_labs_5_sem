#include <iostream>
#include "stipend.h"
#include "collect_stipend.h"

/*		Иокша Дмитрий Александрович
Описать на языке С++ класс, являющийся коллекцией объектов класса, разработанного в ходе выполнения лабораторной работы №1.
Реализация коллекции должна вестись с использованием массива указателей на объекты класса, разработанного в ходе выполнения лабораторной работы №1.
Разработанный класс должен содержать следующие методы:
1)	конструктор;
2)	деструктор, уничтожающий объекты коллекции;
3)	добавления объектов в коллекцию (параметр – указатель на объект);
4)	удаления объектов из коллекции по номеру (перегруженная операция:
ссылка_на_коллекцию -= int;);
5)	получения количества элементов в коллекции;
6)	получения указателя на объект коллекции по номеру объекта;
7)	отображения на экране всех элементов коллекции (перегруженная операция: поток_вывода<<ссылка_на_коллекцию;).

*/

using namespace std;



int main() {
    setlocale(LC_CTYPE, "rus");

    cout << "===========================" << endl;
    stipend ex1("Ioksha Dzmitry Alexandrovich", 3, 1000.23f, true);
    stipend ex2("Volayevich Petr Vasilyevich", 5, 528.18f, true);
    stipend ex3("Grigor'ev Alexander Andreevich", 1, 8565.20f, true);
    stipend ex4("Pinchuk Vitaly Ivanovich", 3, 875.23f, true);
    stipend ex5("Kutovsky Fedor Nikitich", 4, 1101.03f, true);
    cout << "Created 5 objects of class stipend" << endl;
    cout << "===========================" << endl;

    collect_stipend collectionList; // create obj with collection

    collectionList.add(&ex1);
    collectionList.add(&ex2);
    collectionList.add(&ex3);
    collectionList.add(&ex4);
    collectionList.add(&ex5);   // add stipend objects to collection
    cout << "===========================" << endl;
    cout << "Objects of stipend added to collection" << endl;
    cout << "Objects amount in collection: ";   // count of obj in coll
    cout << collectionList.count() << endl;;
    cout << "===========================" << endl;
    
    cout << "===========================" << endl;
    cout << "Removing object by number" << endl;
    collectionList -= 1;        // removing obj at index 2
    cout << endl;
 
    cout << "After removind obj at 1 index" << endl;
    cout << "Elements in collection left: ";
    cout << collectionList.count() << endl;
    cout << endl;
    cout << "===========================" << endl;



    cout << "===========================" << endl;
    cout << "Obj No 3 is located at : ";
    cout << collectionList.info(3);
    cout << endl;   // output of obj  by No
    cout << "===========================" << endl;
           
    // display whole collection 
    cout << "===========================" << endl;
    cout << "START to displayind WHOLE collection" << endl;;
    cout << collectionList << endl;;
    cout << "COLLECTION DISPLAYED" << endl;
    cout << "===========================" << endl;


 
}
