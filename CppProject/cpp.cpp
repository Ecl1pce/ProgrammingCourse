#include "cpp.h"

PriceList::PriceList()
{
    for (int i; i < 100; i++)
    {
        name[i] = 0;
        price[i] = 0;
    }
}
void PriceList::setname(int i)
{
    cin >> name[i];
    return 0;
}
PriceList::setprice(int i)
{
    cin >> price[i];
    return 0;
}
