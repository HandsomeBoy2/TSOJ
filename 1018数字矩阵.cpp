#include <iostream>
#include <vector>
#include <memory.h>
using namespace std;
int main()
{
	int  n;
	while (scanf("%d", &n) != EOF) {
		int num = 1, total = 0, i = 0, j = 0;
		vector <vector<int>> a(n, vector<int>(n));
		for (int i = 0; i < n; i++) 
			for (int j = 0; j < n; j++) 
				a[i][j] = -1;
		while (total < n * n) {
			while (j < n && a[i][j] == -1) { //向右 
				a[i][j] = num;
				j++; 
				num++;
				total++;
			} 
			j--;
			i++;
			while (i < n && a[i][j] == -1) {//向下 
				a[i][j] = num;
				i++;
				num++;
				total++;
			}
			i--;
			j--;
 			while (j >= 0 && a[i][j] == -1) {//向右 
 				a[i][j] = num;
 				j--;
 				num++;
 				total++;
			 } 
			 j++;
			 i--;
			while (i > 0 && a[i][j] == -1) {//向上 
 				a[i][j] = num;
 				i--;
 				num++;
 				total++;
			 }
			 i++; 
			 j++;				
		}
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) {
				cout << a[i][j];
				if (j != n - 1)
					cout << " ";
			}
			cout << endl;
		}	
	}
	return 0;
}

