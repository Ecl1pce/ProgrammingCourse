#include <matrix.h>

//В матрице A(m,n) записаны натуральные числа.
//Найти первую строку, в которой либо все числа – простые, либо все числа – составные.
//Вывести строку и обнаруженный признак (составные числа/простые числа).

void matrix()
{
    puts("Enter a size of matrix (M x N)  (M = rows | N = columns) ");
    scanf("%d%d", &M, &N);

    matrixmaker(M,N);
 return;
}
