#include <iostream>
using namespace std;
int main()
{
	int n;
	while (scanf("%d", &n) != EOF) {
		int j = 7, a[8] = {0}; //a����������ʾԭ�� 
		if (n < 0) {    //����ʱ  ��λΪ1 
			a[0] = 1;
			n = -n;
		}	
		while (n != 0) {  //�ӵڰ�λ��ʼ���� 
			a[j--] = n % 2;
			n = n / 2;
		}
		for (int i = 0; i <= 7; i++) //��� 
			printf("%d", a[i]);
		printf("\n");
	}
	return 0;
}

