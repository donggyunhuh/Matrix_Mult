//
// Created by j2bom on 2022-04-09.
//
#include <math.h>

int arr[100][2]; // 2차원 행렬 선언
int d[100][100]; // 최솟값 저장

int min(int i, int j)
{
    int n;
    for(i = 1; i <= n; i++) {
        j = i + 1;
        if(i == j)
            return 0;
        else{
            d[i][j] = 999999999;
            for(int k = i; k < j; k++)  {
                d[i][j] = min(d[i][j], d[i][k] + d[k + 1][j] + (arr[i][0] * arr[k][1] * arr[j][1]));
        }
        }
    }
    return d[0][n-1];
}