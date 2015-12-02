#include <fibonacci.h>


int fibonacci(int N)
{    
    p = (int*) malloc(N * sizeof(int)); //выделяем память для массива
    p[1] = 1;
    p[2] = 1;
    printf("%d %d ", p[1], p[2]);
    i = 3;
//    while (i <= N)        //цикл для образования последовательности фибоначчи
//    {
//        p[i] = p[i-1] + p[i-2];
//        printf("%d ", p[i]);
//        i = i + 1;
//    }
    for (i = 3; i <= N; i++)
    {
        p[i] = p[i-1] + p[i-2];
        printf("%d ", p[i]);
    }
   // printf("\n%d", zifr);

    free(p);
    return 0;
}
