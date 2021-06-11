#ifndef ELEMENTO_H
#define ELEMENTO_H
#include<iostream>
#include<string>
#include<sstream>
using namespace std;

class ELEMENTO
{
    public:
        ELEMENTO();
        ELEMENTO(int);
        string toString();
        ~ELEMENTO();
    private:
        int Num;
};
ostream& operator<<(ostream &, ELEMENTO&);
#endif // ELEMENTO_H
