#include <stdio.h>
int n = 0;
int grade[101];
void Quicksort(int left, int right) //¿ìËÙÅÅÐò 
{
	int i, j, t, temp;
	if (left > right) 
		return;
		
	temp = grade[left];
	i = left;
	j = right;
	while (i != j) {
		while (grade[j] >= temp && i < j) 
			j--;
		while (grade[i] <= temp && i < j) 
			i++;
		if (i < j) {
			t = grade[i];
			grade[i] = grade[j];
			grade[j] = t;
		}
	}
	grade[left] = grade[i];
	grade[i] = temp;
	
	Quicksort(left, i - 1);
	Quicksort(i + 1, right);
	
	return ;
} 
int main()
{
	while (scanf("%d", &n) != EOF) {
		int sum = 0;
		float average = 0.0f;
		for (int i = 1; i <= n; i++) {
			scanf("%d", &grade[i]);
		}
		Quicksort(1, n);//¿ìÅÅ 
		for (int i = 2; i <= n - 1; i++) {
			sum += grade[i];
		} 
		average = (float)sum / (n - 2);
		printf("%.2lf\n", average);
	}
	return 0;
}

