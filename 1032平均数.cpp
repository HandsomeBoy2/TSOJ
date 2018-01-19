#include <iostream>
#include <vector> 
using namespace std;
int main()
{
	int m;
	while (scanf("%d", &m) != EOF) {
		int k, n, count = 0;
		long long int sum = 0;
		for (int i = 1; i <= m; i++) {
			scanf("%d %d", &k, &n);
			vector<long long int> p(k+1); 
			for (int j = 1; j <= k; j++) {
				scanf("%d", &p[j]);
				if (p[j] > n) {
					count++;
					sum += p[j];
				}	
			} 
			if (count == 0)
				printf("-1\n");
			else 
				printf("%.2f\n", (double)sum / count);
			count = 0;
			sum = 0;
		}
	}
	return 0;
}

