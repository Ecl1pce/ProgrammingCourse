#include <stdio.h>
#include <stdlib.h>
//В матрице A(m,n) записаны натуральные числа.
//Найти первую строку, в которой либо все числа – простые, либо все числа – составные.
//Вывести строку и обнаруженный признак (составные числа/простые числа).

void matrixmaker()
{
    puts("Enter a size of matrix (M x N) ");
    int strok;
    int stolbcov;
    scanf("%d%d", &strok, &stolbcov);

    int **A = (int**) malloc(strok *sizeof(int));
    int i;
    for (i = 0; i < strok; i++)
        A[i] = (int*) malloc(stolbcov*sizeof(int));
     int j;
     puts("Enter matrix values\n");
    for (i = 0; i < strok; i++)
    {
        for (j = 0; j < stolbcov; j++)
        {
            scanf("%d", &A[i][j]);
        }
    }
    for (i = 0; i < strok; i++)
    {
        for (j = 0; j < stolbcov; j++)
        {
            printf("%d ", A[i][j]);
        }
        printf("\n");
    }
   // system("pause");
return;
}
