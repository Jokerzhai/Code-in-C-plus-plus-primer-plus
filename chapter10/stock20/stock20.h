//stock20.h  -- argumented version
#ifndef STOCK20_H
#define STOCK20_H_
#include <string>

class Stock
{
private:
    std::string comapny;
    int shares;
    double share_val;
    double total_val;
    void set_tot() {total_val = shares * share_val;}
public:
    Stock();        //default constructor
    Stock(const std::string & c, long n = 0, double pr = 0.0);
    ~Stock();       //do-nothing destructor
    void buy();
    void sell();
    void update();
    void show()const;
    const Stock & topval(const Stock & s) const;
};

#endif