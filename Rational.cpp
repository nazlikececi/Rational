#include "Rational.h"

Rational::Rational(){
	num = 1;
	denum = 1;
}

Rational::Rational(int n,int d){
	num = n;
	denum = d;
}

Rational::Rational(const Rational& number){
	num = number.getNum();
	denum = number.getDenum();
}

void Rational::setRational(int n, int d){
	num = n;
	denum = d;
}

int Rational::getDenum() const {
	return denum;
} 
int Rational::getNum() const {
	return num;
}

int Rational::compare(const Rational& number1){
	int n1 = num, n2 = number1.getNum();
	int d1 = denum, d2 = number1.getDenum();

	n1 *= d2;
	n2 *= d1;
	if(n1 > n2)
		return 1;
	else if(n1 == n2)
		return 0;
	else
		return -1;
}



Rational Rational::operator+ (const Points& srcPoint) const  // (p1 + p2)  
{
	Points temp;
	temp.x = x + srcPoint.x;
	temp.y = y + srcPoint.y;
	
	return temp; 
}

Rational Rational::operator- (const Points& srcPoint) const // (p1 - p2)  
{
	Points temp;
	temp.x = x - srcPoint.x;
	temp.y = y - srcPoint.y;
	
	return temp; 
}

Rational Rational::operator = (const Points& srcPoint)
{
	if (&srcPoint != this)
	{
		x = srcPoint.x;
		y = srcPoint.y;
	}
	else
		cout << "Attempted self-assignment\n";
	
	return *this;
}
Rational& Rational::operator += (const Points& srcPoint)
{
	x = srcPoint.x + x; // x = srcPoint.getX() + x;
	y = srcPoint.y + y;

	return *this;	
}
Rational& Rational::operator -= (const Points& srcPoint)
{
	x = srcPoint.x - x; 
	y = srcPoint.y - y;

	return *this;	
}

Rational& Rational::operator^ (const double pwr)
{
	x = pow(x, pwr);
	y = pow(y, pwr);
	
	return *this;
}



void Rational::simplfy(){
	cout << num << "/" << denum << " = " << num / highestCommonDivisor(num, denum) << "/" << denum / highestCommonDivisor(num, denum);
	cout << " (after simplification)" << endl;
}
	
void Rational::display(){
	cout << num << "/" << denum << endl;
}

int Rational::highestCommonDivisor(int n, int d){
	int hcd = 1;
	for(int i = 1 ; i <= n ; i++)
		if(n%i == 0 && d%i == 0)
			hcd = i;
	return hcd;
}
