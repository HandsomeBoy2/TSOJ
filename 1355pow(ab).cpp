#include <iostream> 
#include <string> 
using namespace std;
int main()
{
	string s;
	while (cin >> s) {
		int n = 0, n1 = 0, n2 = 0;
		for (int i = 0; i < s.length(); i++) {
			if (s[i] == ',') {  
				n = s[i - 1] - '0';  //ǰһ�����ֵ�ĩβ���� 
				n1 = i + 1; //���ź��λ�� 
			}
			if (s[i] == ')')
				n2 = i - 1;//������ǰ��λ�� 
		}
		int temp, t1 = n;	  //tempΪ���� 
		if (s[n1] == '0') {  //��֤����Ϊ0����� 
			cout << 1 << endl;
			continue;
		}	
		temp = (s[n1] - '0') % 4; //���� 
		if (n1 != n2) {
			for (int i = n1; i <= n2; i++) {
				temp = ((temp * 10) + s[i] - '0') % 4;
			} 	
		}
		if (temp == 0) {
			n = n * n * n * n;
		} else {
			for (int i = 1; i <= temp - 1; i++) 
				n = n * t1;
		}
		cout << n % 10 % 10 << endl;	
	} 
	return 0;
}

