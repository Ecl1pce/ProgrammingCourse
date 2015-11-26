#ifndef CPP_H
#define CPP_H


class PriceList
{
public:
    int price[100];
    char **name;

    PriceList(); //конструктор
    ~PriceList(); //деструктор
   void setname(int i);
    void setprice(int i);
    productdeleat();
    productpricesearch();
    int N;
};





#endif // CPP_H
