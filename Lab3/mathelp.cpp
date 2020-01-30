#include "mathelp.h"
#include "stipend.h"
#include <iostream>;
#include <string>
using namespace std;

mathelp::mathelp() : stipend() {
	help_sum = NULL;
}

mathelp::mathelp(string FIO, unsigned short grade, double payment_sum, bool received, double help_sum) :
	stipend::stipend(FIO, grade, payment_sum,received){
	this->help_sum = help_sum;

}
double mathelp::get_help_sum() {
	return help_sum;
}
void mathelp::set_help_sum(double help_sum) {
	this->help_sum = help_sum;
}
void mathelp::output() {
	stipend::output();
	std::cout << "Material help is " << this->help_sum << " percents";
}