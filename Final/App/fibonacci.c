#include <fibonacci.h>
#include <check.h>
#include <math.h>


int fibonacci(int N)
{    
    int setchik = 2;
    int number = 0;
    ArrayOfFibonacci = (int*) malloc(N * sizeof(int)); //выделяем память для массива
    ArrayOfFibonacci[1] = 1;
    ArrayOfFibonacci[2] = 1;
    printf("%d %d ", ArrayOfFibonacci[1], ArrayOfFibonacci[2]);
    i = 3;

    for (i = 3; i <= N; i++)
    {
        ArrayOfFibonacci[i] = ArrayOfFibonacci[i-1] + ArrayOfFibonacci[i-2];
        printf("%d ", ArrayOfFibonacci[i]);      
        setchik = setchik + check_nuber_of_number(ArrayOfFibonacci[i]);
        printf(" %d ", setchik);
        if(setchik >= N)
        {
            number = i;
            i = N+1;
        }
    }
    //setchik = setchik - check_nuber_of_number(ArrayOfFibonacci[number]);
    puts("\nYour number is in this part\n");
    printf("%d\n", ArrayOfFibonacci[number]);
    puts("Zifra otlichaetsya ot konechnoi na: ");
    int x = setchik - N; //позиция цифры с конца
    printf("%d\n", x);


    if (x == 0)
        result = ArrayOfFibonacci[number] % 10;
    else
    if (x == check_nuber_of_number(ArrayOfFibonacci[number]) - 1)
        result = (ArrayOfFibonacci[number] / (pow(10,x)));
    else
        result = ArrayOfFibonacci[number] / (int) pow(10,(x-1)) % 10;

    printf("%d\n", result);
    free(ArrayOfFibonacci);
    system("pause");
    return 0;
}
