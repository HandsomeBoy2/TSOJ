#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main()
{
	string a, b;
	while (cin >> a >> b) {
		int lena = a.length();
		int lenb = b.length();
		if (lena > lenb) {
			reverse(b.begin(), b.end());
			reverse(a.begin(), a.end());
			b.append(lena - lenb, '0');
		} 
		else if (lena < lenb) {
			reverse(b.begin(), b.end());
			reverse(a.begin(), a.end());
			a.append(lenb - lena, '0');
		}
		for (int i = 0; i < lena; i++) {
			int sum = a[i] + b[i] + '0';
			if (sum >= 10) {
				a[i] = a[i] + b[i] - '0' - 10;
				a[i + 1] = a[i + 1] - '0'+ 1;
			} else {
				a[i] = a[i] + b[i] + '0';
			}
		}
		for (int i = a.length(); i >= 0; i--) 
			cout << a[i - 1] << endl;	
	}
	return 0;
}

