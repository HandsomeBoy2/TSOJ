#include <stdio.h>
#include <math.h> 
int main()
{
	long long int a, b, c;
	while (scanf("\npow(%lld,%lld)", &a, &b) != EOF) {
		c = pow(a, b);
		printf("%lld\n", c % 10);
	} 
	return 0;
}

