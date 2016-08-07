// Name of program

#include <iostream>
using namespace std;

int main()
{
	int x = 0;
	while ( x <= 5 )
		{
		// no curly braces needed
		// for only one line
		x = x + 1;
		cout << "x = " << x << '\n';
		}

	cout << "------\n";

	int y = 5;
	do
		{
		cout << "y = " << y << '\n';
		y = y - 1;
		}
	while (y > 0);


	return 0;
}

