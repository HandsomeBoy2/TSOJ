#include <stdio.h>
int main()
{
	int n;
	while (scanf("%d", &n) != EOF) {
		int j = 7, a[8] = {0};
		int temp = n;  
		if (temp < 0) { //����Ϊ���� 
			a[0] = 1;
			temp = -temp; 
		} 
		while (temp != 0) { //ԭ�� 
			a[j--] = temp % 2;
			temp = temp / 2;
		}
		if (n < 0){
			for (int i = 1; i <= 7; i++) //��λȡ�� 
				a[i] = (!a[i]);
			a[7] = a[7] + 1;//���һλ��1 
			for (int i = 7; a[i] == 2; i--) { //�����1�����2 ��ĳ�0 
				a[i] = 0;
				if (i - 1 != 0)  //-128������ 
					a[i-1] += 1;
			}		
		}
		for (int i = 0; i <= 7; i++) //��� 
			printf("%d", a[i]);
		printf("\n");	
	}
	return 0;
}


