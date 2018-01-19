#include <iostream>
using namespace std;
int main()
{
	int n;
	while (scanf("%d", &n) != EOF) {
		int j = 7, a[8] = {0}; //a数组用来表示原码 
		if (n < 0) {    //负数时  首位为1 
			a[0] = 1;
			n = -n;
		}	
		while (n != 0) {  //从第八位开始计算 
			a[j--] = n % 2;
			n = n / 2;
		}
		for (int i = 0; i <= 7; i++) //输出 
			printf("%d", a[i]);
		printf("\n");
	}
	return 0;
}

