#include <stdio.h>
#include <stdlib.h>
#include <matrixmaker.h>
#include <matrixcheck.h>


void matrixmaker(int strok, int stolbcov)   //строим матриу
{


    int **A = (int**) malloc(strok *sizeof(int));

    for (i = 0; i < strok; i++)
        A[i] = (int*) malloc(stolbcov*sizeof(int));
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
        for (j = 0; j < stolbcov; j++)
        {
            printf("%d ", A[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    puts("Checking process...\n");

    int q = 0;
    int result;
    for (i = 0; i < strok; i++)
    {
        for (j = 0; j < stolbcov; j++)
        {
            printf("%d ", A[i][j]);
            q = q + check(A[i][j]);
        }
        if (q = 0)
        {
        printf("Simple numbers\n") ;
        result = i;
        }
        if (q = stolbcov)
        {
        printf("Sostavnie numbers\n") ;
        result = i;
        }
        else puts("Nikakie numbers");
    }
    for (j = 0; j < stolbcov; j++)
        printf("%d ", A[result][j]);


    system("\n pause");
    return;
}
