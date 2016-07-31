// Switch-Case

#include <iostream>
using namespace std;

int main()
{
	int y;
	cout << "How many apples? "; cin >> y;

	switch(y)
	{
		case 0:
			cout << "You have no apples.\n";
			break;
		case 1:
			cout << "You have an apple.\n";
			break;
		case 2:
			cout << "You have a pair of apples.\n";
			break;
		case 3:
		case 4:
		case 5:
			cout << "You have fewer than half a dozen apples.\n";
			break;
		default:
			cout << "You have many apples, you polymilist.\n";

	}
	// cout << "Do stuff here\n";
	return 0;
}

