#include <iostream>
#include <string>
using namespace std;

//Solution #7 Reverse Number
//Course #5

int ReadPositiveNumber(string Message)
{
	int Number = 0;
	do
	{
		cout << Message << endl;
		cin >> Number;
	} while (Number <= 0);
	return Number;
}
void PrintReverseDigits(int Number)
{
	int Remainder = 0;
	int sum = 0;
	while (Number > 0)
	{
		Remainder = Number % 10;
		Number = Number / 10;
		cout << Remainder;
	}
	
}
int main()
{
	PrintReverseDigits(ReadPositiveNumber("Please enter a positivenumber ? "));
	return 0;
}
