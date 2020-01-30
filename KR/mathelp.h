#pragma once
#include "stipend.h"
class mathelp :
	public stipend
{
private:
	double help_sum;
public:
	mathelp();
	mathelp(std::string FIO, unsigned short grade, double payment_sum, bool received, double help_sum);
	double get_help_sum();
	void set_help_sum(double help_sum);
	virtual void output();
	virtual stipend* copy();
};

