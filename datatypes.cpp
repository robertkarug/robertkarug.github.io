#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	float floatotis = 4.55555555;//numbers with decimals
		cout << floatotis << endl;
		double double_number = 1.44445544445;
		cout << setprecision(20)<<double_number << endl;
		long double otoo = 1.33333333333333333333333;
		cout << setprecision(50) <<otoo << endl;
	return 0;
}