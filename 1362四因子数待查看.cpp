#include <stdio.h>
#include <math.h> 
using namespace std;
bool f(int n)
{
	int i, counter = 0;
	for (i = 2; i * i < n; i++) {//��֤sqrt��n��֮ǰ���� 
		if (n % i == 0) {
			counter++;
		} 
		if (counter == 2) //�������������� ��ǰ����ѭ�� 
			break;
	}
	if (counter == 1 && i * i != n) //����16��Ҫ�ų� 
		return true;
	else 
		return false;
}
int main()
{
	int a, b;
	while (scanf("%d %d", &a, &b) != EOF) {
		int cnt = 0;//����  
		for (int i = a; i <= b; i++) {
			if(f(i)) {
				cnt++;
			}
		} 
		printf("%d\n", cnt);
	}
	return 0;
}

