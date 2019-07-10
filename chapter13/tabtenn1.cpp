//tantenn0.cpp -- simple base-calss methods
#include "tabtenn0.h"
#include <iostream>

TableTennisPlayer::TableTennisPlayer(const string & fn,const string & ln, bool ht):firstname(fn),lastname(ln),hasTable(ht){}
// the same design
/*
TableTennisPlayer::TableTennisPlayer(const string & fn, const string & ln, bool ht)
{
    firstname = fn;
    lastname = ln;
    hasTable = ht;
} 
*/
void TableTennisPlayers::Name() const
{
    std::cout << lastname << ", " << firstname; 
}

//RatedPlayer methods
RatedPlayer::RatedPlayer(unsigned int r,const string & fn,
                        const string & ln, bool ht):TableTennisPlayer(fn,ln,ht)
{
    rating = r;
}
RatedPlayer::RatedPlayer(unsigned int r,const TableTennisPlayer & tp)
    : TableTennisPlayer(tp),rating(r)
    
{
    
}