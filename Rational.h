#include <iostream>

using namespace std;

#ifndef RATIONAL_H
#define RATIONAL_H

class Rational
{
public:
	Rational(); //initialize the data members with ones.
	Rational(int n,int d); //initialize the data member num with n, denum with d
	Rational(const Rational& number);//initialize the rational number with another rational number
	
	void setRational(int n, int d); // set numerator and denominator values
	int getDenum() const ; //return the numerator value
	int getNum() const ; //return the denominator value
	
	int compare(const Rational& number1); 
	//compare the rational number with another rational number 
	//return {1,0,-1}. 1: number>number1, 0:number==number1, -1:number<number1

	Rational operator+ (const Points& srcPoint) const ;
	Rational  operator- (const Points& srcPoint) const ;
	Rational& operator = (const Points& srcPoint) ;
	Rational& operator += (const Points& srcPoint) ;
	Rational& operator -= (const Points& srcPoint) ;
	Rational& operator^ (const double pwr) ;
	
	void simplfy(); // simplify the Rational number 
	//(Hint the highest common divisor of the numerator and denominator is needed) 
	
	void display();
	// display the rational number in numerator/denominator form
	
	
private:
	int highestCommonDivisor(int n, int d); // returns the highest common divisor of two numbers
	int num;
	int denum;
};

#endif
	
