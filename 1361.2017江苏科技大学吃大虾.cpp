#include <iostream>
using namespace std;
int main()
{
	int n;
	while (cin >> n) {
		int cnt = 0; //¼ÆÊý 
		while (n != 1) {
			if (n % 2 == 1) {
				n--; 
				cnt++;
			}
			n = n / 2;
		}
		cout <<  cnt  + 1 << endl;
	} 
	return 0;
}

