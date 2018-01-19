/*徐子峰大帅哥   哈哈哈哈哈*/
/*日期：2017-11-30*/

#include <iostream>
using namespace std;
int a[1001];

void QuickSort(int left, int right)
{
	int i, j, t, temp;
	if (left > right)
		return;
	
	temp = a[left];  //temp中存入基准数 
	i = left;
	j = right;
	while (i != j) {
	 	while (a[j] >= temp && i < j)  //顺序很重要 要先从右到左找 
			j--;
		while (a[i] <= temp && i < j) //再从左往右找 
			i++;
		if (i < j) { //当i与j不相等时，交换两个数 
			t = a[i];
			a[i] = a[j];
			a[j] = t;
		}	
	}
	a[left] = a[i];
	a[i] = temp;
	
	QuickSort(left, i - 1);
	QuickSort(i + 1, right);
	return;
}

int main()
{
	int i, j, n;
	for (i = 1; i <= 10; i++)     //初始化为0 
		a[i] = 0;
	while (scanf("%d", &n) != EOF) {
		for (i = 1; i <= n; i++) //读入n个数 
		scanf("%d", &a[i]); 
	
		QuickSort(1, n);  //传入快排的数字左右位置 
		
		printf("%d %d", a[n], a[n - 1]); //输出最大数和第二大数 
	}

	return 0;
}

