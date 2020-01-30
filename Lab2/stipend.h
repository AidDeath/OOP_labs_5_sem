#include <iostream>
#include <string>
#ifndef STIPEND_H
#define STIPEND_H


class stipend {
private:
    std::string FIO; // ФИО студента
    unsigned short grade; // Курс
    double payment_sum;	// К выдаче
    bool received;  //Деньги получены

public:

    stipend() ;
    stipend(string FIO,unsigned short grade, double payment_sum, bool received);
    stipend(stipend* source) ;
    ~stipend() ;

    void set_fio(std::string value);
    void set_grade(unsigned short grade);
    void set_payment_sum(double payment_sum) ;
    void set_received(bool received) ;
    std::string get_fio() ;
    unsigned short get_grade() ;
    double get_payment_sum() ;
    std::string get_received() ;
    void output() ;

};

#endif // STIPEND_H
