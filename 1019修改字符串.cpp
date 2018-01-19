#include <iostream>
#include <cctype>
#include <string> 
using namespace std;
int main()
{
	string s;
	while (cin >> s) {
		for (int i = 0; i < s.length(); i++) {
			if (isupper(s[i]))
				s[i] = tolower(s[i]);
		}
		cout << s << endl;
	}
	return 0;
}

