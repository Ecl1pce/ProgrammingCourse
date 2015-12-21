#include <matrixmaker.h>
#include <matrixcheck.h>

int matrixcheck(const int **A)   //функция возвращает номер строки с обнаруженным признаком (простое или составное число)
{
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
        if (q == 0)
        {
        printf("Simple numbers\n") ;
        result = i;
        }
        if (q == stolbcov)
        {
        printf("Sostavnie numbers\n") ;
        result = i;
        }
    }
    for (j = 0; j < stolbcov; j++)
        printf("%d", A[result][j]);
    system("pause");
    return 0;
}
