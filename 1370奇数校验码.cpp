#include <iostream>
#include <string> 
using namespace std;
int main()
{
	string s;
	int count0 = 0;
	while (getline(cin, s)) {
		for (int i = 0; i < s.length(); i++) {
			if (s[i] == '0')
				count0++;
		}
		if (count0 % 2 == 1 && (s.length - count0) % 2 == 1)
			cout << 1 << endl;
		else 
			cout << 0 << endl;
	}
	return 0;
}

