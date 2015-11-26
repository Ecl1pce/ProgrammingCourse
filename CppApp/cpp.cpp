#include "cpp.h"
#include <iostream>

using namespace std;


PriceList::PriceList()
{
   char **name = new char*;
   cin >> N;
   for (int i = 0; i < N; i++)
   {
       char *name = new char;
   }
}
void PriceList::setname(int i)
{
    cin >> *name[i];
}
void PriceList::setprice(int i)
{
    cin >> price[i];

}
PriceList::~PriceList()
{
return;
}
