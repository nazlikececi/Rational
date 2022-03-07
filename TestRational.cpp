#include "Rational.h"

int main()
{
	 Rational number1; // 1. use 1 and 1 for numerator and denominator
	 Rational number2(1,2); // 2. use 1 and 2 for numerator and denominator
	 Rational number3(number2); // 3. use numerator and denominator values of number2
	 number3.setNumDen(1,4); // 4. set numerator and denominator with 1 and 4
	 number1=number3; // 4. right hand side operand (number1) is changed
	 cout << number1; // 5. 1/4
	 number1+=number3; //6. right hand side operand (number1) is changed
	 cout << number1; // 2/4
	 number1.simplfy();
	 // 7. rational number is simplified. You need to find highest common divisor of num. and den.
	 cout << number1; // 1/2
	 cout<<( number1 + number2); // 1/1
	 //8. operands of + are not affected
	 
	return 0;
}
