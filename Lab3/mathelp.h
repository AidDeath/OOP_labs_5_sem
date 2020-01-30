#pragma once
#include "stipend.h"
class mathelp :
	public stipend
{
private:
	float help_sum;
public:
	mathelp();
	mathelp(std::string FIO, unsigned short grade, double payment_sum, bool received, double help_sum);
	double get_help_sum();
	void set_help_sum(double help_sum);
	void output();
};

