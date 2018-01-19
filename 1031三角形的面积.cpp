#include <stdio.h>
#include <math.h>
int main()
{
	double a, b, c, p, s; 
	while (scanf("%lf %lf %lf", &a, &b, &c) != EOF) {
		p = (a + b + c) / 2;
		if (p * (p - a) * (p - b) * (p - c) <= 0) {
			printf("-1\n");
		} else {
			s = sqrt(p * (p - a) * (p - b) * (p - c));
			printf("%.2lf\n", s); 
		}
	}
	return 0;
}

