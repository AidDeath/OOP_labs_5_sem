#include <iostream>
#include "stipend.h"


    stipend::stipend() {
        this->FIO = "";
        this->grade = NULL;
        this->payment_sum = NULL;
        received = NULL;
    }
    stipend::stipend(std::string FIO,unsigned short grade, double payment_sum, bool received) {
        this->FIO = FIO;
        this->grade = grade;
        this->payment_sum = payment_sum;
        this->received = received;
    }
    stipend::stipend(stipend* source) {
        this->FIO = source->FIO;
        this->grade = source->grade;
        this->payment_sum = source->payment_sum;
        this->received = source->received;
    }
    stipend::~stipend() {
     //   std::cout << "Destructor called \n";
    }


    void stipend::set_fio(std::string value) {
        this->FIO = value;
    }
    void stipend::set_grade(unsigned short grade) {
        this->grade = grade;
    }
    void stipend::set_payment_sum(double payment_sum) {
        this->payment_sum = payment_sum;
    }
    void stipend::set_received(bool received) {
        this->received = received;
    }
    std::string stipend::get_fio() {
        return (this->FIO);
    }
    unsigned short stipend::get_grade() {
        return (this->grade);
    }
    double stipend::get_payment_sum() {
        return (this->payment_sum);
    }
    std::string stipend::get_received() {
        return (this->received) ? "Yes" : "No"  ;
    }

    void stipend::output() {
        std::cout << "Contents of obj at " << this << " is :\n";
        std::cout << "Name is : " << this->FIO << "\nGrade is : " << this->grade << "\nFor payment : " << this->payment_sum << "\nReceived :" << ((this->received) ? "Yes" : "No") << std::endl;
    }

    stipend* stipend::copy()
    {
        return new stipend(*this);
    }