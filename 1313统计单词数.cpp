#include <iostream>
#include <string>
#include <cctype>
using namespace std;
int main()
{
	int cnt = 0;
	string a;
	getline(cin, a);
	for (int i = 0; i < a.length(); i++) {
		if (a[i] == ' ' || ispunct(a[i])) 
			cnt++;
	}
	cout << cnt;

	return 0;
}

