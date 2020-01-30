#include "stipend.h"
#include "collect_stipend.h"
#include <iostream>
#include <clocale>
#include <string>
#include <typeinfo>
#include <list>
using namespace std;

    collect_stipend::~collect_stipend() 
    {
        for (int i = 0; i < n; i++)
            delete a[i];
        delete[]a;
    }

    collect_stipend::collect_stipend(){
        n = 0;
        a = new stipend * [5];
    }

    void collect_stipend::add (stipend *tp)
    {
            a[n++] = new stipend(*tp);
    }

    int collect_stipend::count()
    {
        return n;
    }

    stipend *collect_stipend::info(int i)
    {
        return a[i];
    }

    void collect_stipend::operator-=(int i)
    {
        for (int j = i; j < n - 1; j++)
        {
            delete a[j];
            a[j] = new stipend(*a[j + 1]);
        }

        n--;
    }

    ostream& operator <<(ostream& out, const collect_stipend &x)
    {

        for (int i = 0; i < x.n; i++)
        {
            x.a[i]->output();
            out << endl;
        }
        return out;
    }



