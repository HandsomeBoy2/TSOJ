#include <stdio.h>
int main()
{
	int n;
	while (scanf("%d", &n) != EOF) {
		int a = 0, b = 0;
		char c;
		for (int i = 1; i <= n; i++) {
			scanf("%d%c%d", &a, &c, &b);
			switch(c) {
				case '+' :
					printf("%d\n", a+b);
					break;
				case '-':
					printf("%d\n", a-b);
					break;
				case '*':
					printf("%d\n", a*b);
					break;
				default :
					printf("%d\n", a/b);
					break;
			}
		}
	}
	return 0;
}

