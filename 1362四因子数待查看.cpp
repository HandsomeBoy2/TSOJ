#include <stdio.h>
#include <math.h> 
using namespace std;
bool f(int n)
{
	int i, counter = 0;
	for (i = 2; i * i < n; i++) {//验证sqrt（n）之前的数 
		if (n % i == 0) {
			counter++;
		} 
		if (counter == 2) //超过四因子数的 提前跳出循环 
			break;
	}
	if (counter == 1 && i * i != n) //例如16就要排除 
		return true;
	else 
		return false;
}
int main()
{
	int a, b;
	while (scanf("%d %d", &a, &b) != EOF) {
		int cnt = 0;//计数  
		for (int i = a; i <= b; i++) {
			if(f(i)) {
				cnt++;
			}
		} 
		printf("%d\n", cnt);
	}
	return 0;
}

