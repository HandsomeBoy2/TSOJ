#include <iostream>
#include <map> 
using namespace std;
int main()
{
 	int n;
 	while (scanf("%d", &n) != EOF) {
 		int grade;
 		map <int, int> p;  //用map容器 不然会超时的喔 
 		for (int i = 1; i <= n; i++) {
 			scanf("%d", &grade);
 			p[grade]++;//对应标记加1 
		 }
		 for (const auto &q:p) { //输出 
		 	printf("%d %d\n", q.first, q.second);
		 }
	 }
	return 0;
}

