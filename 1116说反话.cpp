#include <iostream>
#include <stack>
#include <string> 
using namespace std;
int main()
{
	int n;
	string a;
	stack <char> s;
	while (cin >> n) {
		getchar();
		for (int i = 0; i < n; i++) {
			getline(cin, a);
			for (int i = 0; i < a.length(); i++) {
				s.push(a[i]);
			}
			while (!s.empty()) {
				cout << s.top();
				s.pop();
			}
			cout << endl;
		} 
	}
	
	return 0;
}

