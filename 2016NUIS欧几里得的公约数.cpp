#include <iostream>

using namespace std;
int main()
{
	int n;
	while (cin >> n) {
		int *a = new int [n];
		int cnt = 0;
		for (int i = 0; i < n; i++) {
			cin >> a[i];
			int b = n, c = a[i], d = 0;
			while (b != 0) {
				d = c % b;
				c = b;
				b = d; 
			}
			if (c == 1)
				cnt++;
		}
		cout << cnt << endl;
		delete[] a;
	} 
	return 0;
}


