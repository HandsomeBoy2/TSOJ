#include <iostream>
#include <algorithm> 
using namespace std;
int main() {
	long int m = 0, n = 0;
	while (cin >> n >> m) { 
        long int sum = 0,a = 0, b = 0, i;
        long int *num1 = new long int[m+1];
        long int *num2 = new long int[m+1];
		for (i = 1; i <= m; i++) {  //种花 
			cin >> num1[i] >> num2[i];
		} 
		cin >> a >> b;
		for (i = 1; i <= m; i++) {
			if(num1[i] <= b && num2[i] >= a) { //慢慢逼近 取交集 
				sum += min(num2[i],b) - max(num1[i],a) + 1;
			}	
		}
		cout << sum << endl;
        delete[] num1;
        delete[] num2;
	}
	return 0;
}

