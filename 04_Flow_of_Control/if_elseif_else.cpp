// If, else if, else

#include <iostream>
using namespace std;

int main()
{
	int x = 2;
	int y;
	cin >> y;

	// First conditional in C++
	if (x > y)
		// No semicolon/braces needed
		cout << "x > y\n";
	else if (y > x)
		{
		// It will still work with braces
		cout << "y > x\n";
		}
	else
		cout << "x = " << y << '\n';

	return 0;
}

