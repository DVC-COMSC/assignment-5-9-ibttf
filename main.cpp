
#include <iostream>
using namespace std;

int main()
{
	int prev, current;
	bool first = true;
	while (cin >> current)
	{
		if (!first && current > prev){
			cout  << endl;
			return 0;
		}
		else{
			cout << current << endl;
		}
	}
	prev = current;
	first=false;
	}

