#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main()
{
	string a, b;
	while (cin >> a) {
		b = a; 
		reverse(a.begin(), a.end());
		if (a != b) 
			cout << "no\n";
		else
			cout << "yes\n";
	}
	return 0;
}

