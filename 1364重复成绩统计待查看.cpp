#include <iostream>
#include <map> 
using namespace std;
int main()
{
 	int n;
 	while (scanf("%d", &n) != EOF) {
 		int grade;
 		map <int, int> p;  //��map���� ��Ȼ�ᳬʱ��� 
 		for (int i = 1; i <= n; i++) {
 			scanf("%d", &grade);
 			p[grade]++;//��Ӧ��Ǽ�1 
		 }
		 for (const auto &q:p) { //��� 
		 	printf("%d %d\n", q.first, q.second);
		 }
	 }
	return 0;
}

