//class to control the operations
#include "Operations.h"
#include "Calculator.h"
#using <System.Windows.Forms.dll>
using namespace System::Windows::Forms;
	
Operations::Operations(void)
{
}
double Operations::adding(double number1, double number2)
{
	double value=number1+number2;
	return value;
	
}
double Operations::subtraction(double number1, double number2)
{
	double value=number1-number2;
	return value;
}
double Operations::multiplication(double number1, double number2)
{
	double value=number1*number2;
	return value;
}
double Operations::partition(double number1, double number2)
{
	
	if (number2==0)
	{
		MessageBox::Show("You cant devide by 0!");
		return 0;
	}
	else
	{
	double value=number1/number2;
	return value;
	}
}
int Operations::factorial(int number1)
{

	if(number1==0)
		return 1;
		for(int i=number1-1;i>1;i--)
		{
			number1*=i;
		}
		return number1;
}
