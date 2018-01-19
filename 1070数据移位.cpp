#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
	int i, n, m;
	cin >> n >> m;
	vector <int> a(n);
	for (i = 0; i < n; i++) 
		cin >> a[i];                          // 12345  54321 45123
	reverse(a.begin(), a.end());
	reverse(a.begin(), a.begin() + n - m);
	reverse(a.begin() + n - m, a.begin() + n);
	for (i = 0; i < n; i++)
		cout << a[i] << endl;	
	return 0;
}

