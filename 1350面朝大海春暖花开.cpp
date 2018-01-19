#include <iostream>   
using namespace std;
int main() {
	int m = 0, n = 0;
	while (cin >> n >> m) { 
        int sum = 0;
        int *arrSum = new int[n+1];
        for (int i = 0; i <= n; i++) arrSum[i] = 0; //初始化 
		for (int i = 1; i <= m; i++) {   
			int num1 = 0, num2 = 0;
			cin >> num1 >> num2;
			for (int j = num1; j <= num2; j++) { //num1-num2区间依次种花 
				arrSum[j]++;
			}
		}
		int a = 0, b = 0;
		cin >> a >> b; //求a-b的花数目总和 
		for (int i = a; i <= b; i++)  
			sum += arrSum[i];
		cout << sum << endl;
        delete[] arrSum;
	}
	return 0;
}

