#include <iostream>
using namespace std;
int n, m, M = 0;
int a[1001][1001] = {0}, book[1001] = {0};
void dfs (int s, int foot) 
{
	
	if (foot >= M) 
		M = foot;
	for (int i = s + 1; i <= n; i++) {
		if (a[s][i] == 1 && book[i] == 0) {
			book[i] = 1;
			dfs(i, foot + 1);
			book[i] = 0;
		}
	}
	return;
}
int main()
{
	while (scanf("%d %d", &n, &m) != EOF) {
		int o, p;
		for (int i = 1; i <= m; i++) {
			scanf("%d %d", &o, &p);
			a[o][p] = 1;
		}
		book[1] = 1;
		dfs(1, 1);
	}
	
	printf("%d\n", M);
	
	return 0;
}

