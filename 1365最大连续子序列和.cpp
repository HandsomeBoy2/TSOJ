#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath> 
using namespace std;
bool cmp (int a, int b) 
{
	return a > b;
}
int main()
{
	int n;
	while (scanf("%d", &n) != EOF) {
		int sum = 0, j = 0;
		vector <int> a(n+1);  //存储输入的数组 
		vector <int> b(n+1);
		vector <int> temp(n+1); //另外存储输入的数组  预防全是负数的情况 
		for (int i = 1; i <= n; i++) {
			scanf("%d", &a[i]);
			temp[i-1] = a[i];
			sum += a[i];  //求和 
			if (sum < 0)  //如果sum小于0 则将0赋值给sum 
				sum = 0;
			a[i] = max(sum, a[i - 1]); //写出改变后的数组a[i] 
			if (sum == a[i]) {  //当sum==a[i] 存储起来 里面有最大和 
 				b[j++] = sum;
			}
		}
		sort(temp.begin(), temp.begin() + n, cmp); //从大到小排序 
		if (temp[0] < 0) {  //如果第一个数就小于0 
			cout << temp[0] << endl; //说明全是负数，则输出第一个数 
		} else {
			sort(b.begin(), b.begin() + j, cmp); 
			cout << b[0] << endl;
		}	
	} 
	return 0;
}


