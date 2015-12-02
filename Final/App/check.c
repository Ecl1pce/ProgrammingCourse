int check_nuber_of_number(number)
{
    int k;
    k = 1;
    while (number >= 10)
    {
        number = number/10;
        k = k + 1;
    }
    return k;
}
