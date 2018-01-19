#include <iostream>
#include <vector>
#include <algorithm> 
using namespace std;
int main()
{
	int n;
	while (scanf("%d", &n) != EOF) {
		vector <int> a(n);
		for (int i = 0; i < n; i++) 
			scanf("%d", &a[i]); 
		sort(a.begin(), a.end());
		cout << a[n-1] << endl;
	}
	return 0;
}

