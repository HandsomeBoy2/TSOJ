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
		vector <int> a(n+1);  //�洢��������� 
		vector <int> b(n+1);
		vector <int> temp(n+1); //����洢���������  Ԥ��ȫ�Ǹ�������� 
		for (int i = 1; i <= n; i++) {
			scanf("%d", &a[i]);
			temp[i-1] = a[i];
			sum += a[i];  //��� 
			if (sum < 0)  //���sumС��0 ��0��ֵ��sum 
				sum = 0;
			a[i] = max(sum, a[i - 1]); //д���ı�������a[i] 
			if (sum == a[i]) {  //��sum==a[i] �洢���� ���������� 
 				b[j++] = sum;
			}
		}
		sort(temp.begin(), temp.begin() + n, cmp); //�Ӵ�С���� 
		if (temp[0] < 0) {  //�����һ������С��0 
			cout << temp[0] << endl; //˵��ȫ�Ǹ������������һ���� 
		} else {
			sort(b.begin(), b.begin() + j, cmp); 
			cout << b[0] << endl;
		}	
	} 
	return 0;
}


