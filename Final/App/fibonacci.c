#include <fibonacci.h>


int fibonacci(N)
{    
    p = (int*) malloc(N * sizeof(int)); //выделяем память для массива
    p[1] = 1;
    p[2] = 1;
    printf("%d %d ", p[1], p[2]);
    i = 3;
    zifr = 2;
    while (i <= N)        //цикл для образования последовательности фибоначчи
    {
        p[i] = p[i-1] + p[i-2];
        printf("\n%d ", p[i]);
        i = i + 1;
        printf("\n%d", check(p[i]));
        zifr = zifr + check(p[i]);
       // printf("%d ", fx);

    }
   // printf("\n%d", zifr);

    free(p);
    return 0;
}
