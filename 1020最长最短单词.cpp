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
		istringstream it(s);  //×Ö·û´®É¨ÃèÁ÷
		while (it >> s) {  //¿ªÊ¼É¨Ãè Óöµ½¿Õ¸ñ¾ÍÍ£Ö¹É¨Ãè
            a.push(s);  //Ñ¹ÈëÕ»
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

