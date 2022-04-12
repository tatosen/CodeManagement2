/*
Nicholas Mccombs
04/11/2022
CIS 1202 R02
*/

#include <iostream>
#include <iomanip>

using namespace std;

float average(float i1, float i2, float i3);

float average(float i1, float i2, float i3)
{
	return (i1 + i2 + i3) / 3;
}

int main()
{
	float n1 = 0 , n2 = 0, n3 = 0;

	cout << "This program calculates the average of three numbers." << endl;

	cout << "\nFirst number: "; 
	cin >> n1;

	cout << "\nSecond number: "; 
	cin >> n2;

	cout << "\nThird number: "; 
	cin >> n3;

	float a = average(n1, n2, n3);

	cout << setprecision(1) << fixed << "\nThe average is " << a << endl;

	cout << endl << endl;
	system("pause");
	return 0;
}