#include <stdio.h>

int main()
{
	int n, m;
	int b[5] = {0, 2, 4, 8, 6};  //代表2 
	int c[5] = {0, 3, 9, 7, 1};  //代表3
	int g[5] = {0, 7, 9, 3, 1};  //代表7
	int h[5] = {0, 8, 4, 2, 6};  //代表8 
	int d[3] = {0, 4, 6}; //代表4 
	int i[3] = {0, 9, 1}; //代表9 
	while (scanf("%d%d", &n, &m) != EOF) {
		switch (n % 10) {
			case 0 : case 1 : case 5 : case 6 :
				printf("%d\n", n % 10); 
				break;
			case 2 : case 3 : case 7 : case 8 :
				if (m <= 4)
					printf("%d\n", (int)(n % 10 + 'a' - 1)[m]);
				else
					printf("%d\n", (int)(n % 10 + 'a' - 1)[m % 4]);
				break;
			default :
				if (m <= 2)
					printf("%d\n", (int)(n % 10 + 'a' - 1)[m]);
				else
					printf("%d\n", (int)(n % 10 + 'a' - 1)[m % 2]);
				break;
		}
	} 
	return 0;
}

