/*���ӷ��˧��   ����������*/
/*���ڣ�2017-11-30*/

#include <iostream>
using namespace std;
int a[1001];

void QuickSort(int left, int right)
{
	int i, j, t, temp;
	if (left > right)
		return;
	
	temp = a[left];  //temp�д����׼�� 
	i = left;
	j = right;
	while (i != j) {
	 	while (a[j] >= temp && i < j)  //˳�����Ҫ Ҫ�ȴ��ҵ����� 
			j--;
		while (a[i] <= temp && i < j) //�ٴ��������� 
			i++;
		if (i < j) { //��i��j�����ʱ������������ 
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
	for (i = 1; i <= 10; i++)     //��ʼ��Ϊ0 
		a[i] = 0;
	while (scanf("%d", &n) != EOF) {
		for (i = 1; i <= n; i++) //����n���� 
		scanf("%d", &a[i]); 
	
		QuickSort(1, n);  //������ŵ���������λ�� 
		
		printf("%d %d", a[n], a[n - 1]); //���������͵ڶ����� 
	}

	return 0;
}

