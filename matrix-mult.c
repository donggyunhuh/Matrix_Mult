#include <stdio.h>

int arr[100][2]; 
int d[100][100];

int min(int i, int j)
{

    if (i == j) 
        return 0;

    int val = 999999999; 
    for (int k = i; k < j; k++)
    {
        int temp = d[i][k] + d[k + 1][j] + arr[i][0] * arr[k][1] * arr[j][1]; 

        if (temp < val)
            val = temp; 
        else
            val = val; 
    }
    return val;
}

<<<<<<< HEAD


int makeArray(int n) 
{
    for (int i = 0; i < n; i++) {
=======
int makeArray(int n) //��ĸ����
{
    for (int i = 0; i < n; i++)
    {
>>>>>>> 05f42d037cc7ac0acd657b89abf0d30d2f081143
        printf("arr[%d][0]: ", i);
        scanf("%d", &arr[i][0]);
        printf("arr[%d][0]: ", i);
        scanf("%d", &arr[i][1]);
        printf("\n");
    }

    return arr[n][2];
}

int main()
{
    int n, minmult;

<<<<<<< HEAD
    printf("d" ");
=======
    printf("����� ����: ");
>>>>>>> 05f42d037cc7ac0acd657b89abf0d30d2f081143
    scanf("%d", &n);

    makeArray(n);

<<<<<<< HEAD
    for (int i = 0; i < n; i++) {
        int k = 0;
        for (int j = i; j <= n; j++) {
=======
    for (int i = 0; i < n; i++)
    {
        int k = 0;
        for (int j = i; j < n; j++)
        {
>>>>>>> 05f42d037cc7ac0acd657b89abf0d30d2f081143
            d[k][j] = min(k, j);
            k++;
        }
    }

<<<<<<< HEAD
    printf("============d[i][j]============\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
=======
    printf("=========d[i][j]============\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
>>>>>>> 05f42d037cc7ac0acd657b89abf0d30d2f081143
            printf(" %d ", d[i][j]);
        }
        printf("\n");
    }
<<<<<<< HEAD

    minmult = d[0][n - 1];

    printf("�ּ� ���� Ƚ��: %d", minmult);
=======
    printf("\n");

    minmult = d[0][n - 1];

    printf("�ּ� ���� Ƚ��: %d", minmult);
>>>>>>> 05f42d037cc7ac0acd657b89abf0d30d2f081143

    return 0;
}