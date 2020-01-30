#include <iostream>
#include "stipend.h"
#include "collect_stipend.h"

/*		����� ������� �������������
������� �� ����� �++ �����, ���������� ���������� �������� ������, �������������� � ���� ���������� ������������ ������ �1.
���������� ��������� ������ ������� � �������������� ������� ���������� �� ������� ������, �������������� � ���� ���������� ������������ ������ �1.
������������� ����� ������ ��������� ��������� ������:
1)	�����������;
2)	����������, ������������ ������� ���������;
3)	���������� �������� � ��������� (�������� � ��������� �� ������);
4)	�������� �������� �� ��������� �� ������ (������������� ��������:
������_��_��������� -= int;);
5)	��������� ���������� ��������� � ���������;
6)	��������� ��������� �� ������ ��������� �� ������ �������;
7)	����������� �� ������ ���� ��������� ��������� (������������� ��������: �����_������<<������_��_���������;).

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
