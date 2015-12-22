#include <stdio.h>
#include <stdlib.h>
#include <matrixmaker.h>
#include <matrixcheck.h>


void matrixmaker(int strok, int stolbcov)   //строим матриу
{
    q = 0;
    result = -1;

    int **A = (int**) malloc(strok *sizeof(int));

    for (i = 0; i < strok; i++)
        A[i] = (int*) malloc(stolbcov*sizeof(int));        //выделение памяти под матрицу
    puts("Enter matrix values\n");
    for (i = 0; i < strok; i++)
    {
        for (j = 0; j < stolbcov; j++)
        {
            scanf("%d", &A[i][j]);
        }
    }
    puts("Your matrix: ");

    for (i = 0; i < strok; i++)
    {
        for (j = 0; j < stolbcov; j++)                   // вывод матрицы
        {
            printf("%d ", A[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    puts("Checking process...");

    int result;
    for (i = 0; i < strok; i++)
    {
        q = 0;
        for (j = 0; j < stolbcov; j++)
        {
//            printf("%d ", A[i][j]);
            q = q + check(A[i][j]);
        }
        if (q == 0)
        {
            result = i;
            var = q;
            j = stolbcov;
        }
        if (q == stolbcov)
        {
            result = i;
            var = q;
            j = stolbcov;
        }

    }
    puts("\n");


    if (var == 0)
    {
        puts("There's prime numbers\n");

    for (j = 0; j < stolbcov; j++)
        printf("%d ", A[result][j]);
    }

    else if (var == stolbcov)
    {
        puts("There's composite numbers\n");
    for (j = 0; j < stolbcov; j++)
        printf("%d ", A[result][j]);
    }
    else if (result == -1)
        puts("There's no prime or composite numbers\n");
    else
        puts("Something goes wrong\n");
    puts("\n");
    system("pause");
    puts("\n");
    return;
}
