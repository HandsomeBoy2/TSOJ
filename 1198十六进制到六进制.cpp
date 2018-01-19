#include <iostream>
#include <vector>
using namespace std;
int i, n;

void func(int m)
{
	int j = 0;
	char a[20];
	if (m == 0) {
		cout << 0;
		return;
	}
	while (m != 0) {
			a[j++] = m % 6 + '0';
			m = m / 6;
	}
	for (i = j - 1; i >= 0; i--) 
		cout << a[i];
	cout << endl;
}
int main()
{
	cin >> n;
	vector<int> a(n);
	for (i = 0; i < n; i++) {
		cin >> a[i];
	} 
	for (i = 0; i < n; i++)
		func(a[i]);
	return 0;
}

