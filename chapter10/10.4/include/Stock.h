#ifndef STOCK_H
#define STOCK_H

#include <cstring>
class Stock
{
    public:
        Stock();    //default constructor
        Stock(const std:: string & co,long n = 0,double pr = 0.0);
        virtual ~Stock();

        void buy(long num,double price);
        void sell(long num,double price);
        void update(double price);
        void show();

    protected:

    private:
        std::string company;
        long shares;
        double share_val;
        void set_tot(){total_val = shares * share_val};
};

#endif // STOCK_H
