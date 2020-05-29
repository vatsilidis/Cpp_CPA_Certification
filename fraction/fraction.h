#ifndef __FRACTION_H__
#define __FRACTION_H__

#include <stdexcept>
#include <string>

class Fraction {
private:
	int numerator, denominator;
	int LCM(int x, int y);
	int GCD(int x, int y);
public:
	Fraction();
	Fraction(int n);
	Fraction(int n,int d) throw(std::domain_error);
	std::string GetString(void);
	double GetValue(void);
	Fraction operator!(void);
	Fraction operator+(Fraction arg);
	Fraction operator*(Fraction arg);
	Fraction operator/(Fraction arg) throw(std::domain_error);
	Fraction& operator+=(Fraction arg);
};

std::ostream& operator<< (std::ostream &ostr, Fraction &f);

#endif