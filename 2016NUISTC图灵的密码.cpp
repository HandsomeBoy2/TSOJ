#include <iostream>
#include <string>
using namespace std;
int main()
{
	string a[10] = {".----", "..---", "...--", "....-", ".....", 
					"-....", "--...", "---..", "----.", "-----"};
	
	string b;
	while (cin >> b) {
		for (int i = 0; i < b.length(); i++) {
			if (i == 0) 
				cout << "-";
			cout << a[b[i]- '0'] << "-";
		}
		cout << endl;
	}
	
	return 0;
}

