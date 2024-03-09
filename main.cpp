
#include <iostream>
using namespace std;

int main()
{
	int prev, current;
	while (cin >> current)
	{
		if (current > prev)
		{
			cout  << endl;
			return 0;
		}
		else
		{
			cout << current << endl;
		}
		prev = current;
	}
	/* ****************************
	// Complete this code.
	*************************** */
}
