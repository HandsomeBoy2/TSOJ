#include<stdio.h>
#include <string.h>
#define MAX_NUM 100005
int main()
{
    int N, M, T, l, r, i, j, t;
    int map[MAX_NUM];
    while(scanf("%d %d %d", &N, &M, &t) != EOF) {   
        memset(map, 0, sizeof(int) * MAX_NUM);
        for (i = 0; i < M; i++) {   //��¼��dn 
                scanf("%d %d", &l, &r);
                map[l]++;
                map[r+1]--;
        }
        for (j = 0; j < 2; j++)  {   //ѭ����һ����an  ѭ���ڶ�����sn 
            for (i = 1; i <= N; i++) {
                map[i] = map[i] + map[i-1];
            }
        }
        for (int i = 1; i <= t; i++) {   //������;���sr - sl-1 
        	scanf("%d %d", &l, &r);
        	printf("%d\n", map[r] - map[l-1]);   
		}
    }
    return 0; 
}
