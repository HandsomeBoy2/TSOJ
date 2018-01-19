#include <iostream>
#include <string>
using namespace std;
int main()
{
	//freopen("test.txt", "r", stdin); 
	int n;
	while (cin >> n) {
		string a;
		cout << n << ":" << endl;
		for (int i = 1; i <= n; i++) {
			if (i % 2 == 1) {
				a += '*';
				cout << a << endl;
			} else if (i % 2 == 0) {
				a += '-';
				cout << a << endl;
			}
		}	
	}
	
	return 0;
}

