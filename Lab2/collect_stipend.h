#include "stipend.h"
#include <iostream>
#include <clocale>
#include <string>
#include <typeinfo>
#include <list>
using namespace std;

class collect_stipend
{
private:
     stipend **a;
     int n;
public:
    ~collect_stipend() ;
    collect_stipend();
    void add(stipend *tp);
    int count (void);
    stipend *info(int index);
    void operator -= (int i);
    friend ostream& operator <<(ostream& out, const collect_stipend &x);

};
