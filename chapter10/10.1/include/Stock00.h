#ifndef STOCK_H
#define STOCK_H

#include <string>
class Stock
{
    public:
        void acquire(const std:: string & co, long n, double pr);
        void buy(long num,double price);
        void sell(long num, double price);
        void update(double price);
        void show();

    protected:

    private:
        std::string company;
        long shares;
        double share_val;
        double total_val;
//        void set_tot(){ total_val = shares * share_val;};
};


inline void Stock::set_tot()    //use inline in definition
{
    total_val = shares * share_val;
}

//use inline function or define in the private
#endif // STOCK_H
