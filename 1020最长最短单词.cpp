#include <iostream>
#include <sstream>
#include <algorithm>
#include <stack>
#include <string>
using namespace std;
int main()
{
	int max = 0;
	int min = 500;
	stack <string> a;
	string s, s1, s2;
	while (getline(cin, s)) {
		istringstream it(s);  //�ַ���ɨ����
		while (it >> s) {  //��ʼɨ�� �����ո��ֹͣɨ��
            a.push(s);  //ѹ��ջ
        }  
        while (!a.empty()) {
        	string a1 = a.top();
        	if (a1.length() >= max) {
        		max = a1.length();
        		s1 = a1;
			}
			if (a1.length() <= min) {
				min = a1.length();
				s2 = a1;
			}
			a.pop();
		}
		cout << s1 << endl << s2 << endl;
	}
	return 0;
}

