#include <iostream>
using std::cout;
using std::cin;

int main()
{
	int type;
	cout << "Select Triangle type : (1 - isosceles. 2 - Equilateral): ";
	cin >> type;
	cout << "Select the triangle size: ";
	int number;
	cin >> number;

	if (type == 1)
	{
		for (int i = 0; i < number; i++)
		{
			for (int a = 0; a <= i; a++)
			{
				cout << "*";
			}
			cout << "\n";
		}
	}
	if (type == 2)
	{
		for (int i = 0; i < number; i++)
		{
			for (int a = i; a < number; a++)
			{
				cout << " ";
			}
			for (int a = 0; a < i; a++)
			{
				cout << "*";
				for (int x = 0; x < 1; x++) {
					cout << " ";
				}
			}
			cout << "\n";
		}
	}
}