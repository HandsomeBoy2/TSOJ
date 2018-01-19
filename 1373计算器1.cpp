#include <iostream>
using namespace std;
int main()
{
	int a, b, sum = 0;
	char c;
	scanf("%d", &a);
	sum = a;
	while (scanf("%c%d", &c, &b) != EOF) {
			if (c == '+') {
				sum += b;
			} else if (c == '-') {
				sum -= b;
			}
		cout << sum << endl; 
	}
	return 0;
}

