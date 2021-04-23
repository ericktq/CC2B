#include <iostream>
using namespace std;

int triangular(int pos)
{
    return (pos * (pos + 1))/2;
}

int numDeDivisores(int n)
{
    if (n == 1){
        return 1;
    }
    int maxn = n / 2;
    int divs = 2;

    if (n % 2 == 0){
        for (int num = 2; num <= maxn; ++num){
            if (n % num == 0){
                ++divs;
            }
        }
    }

    else{
        for (int num = 3; num <= maxn; num += 2){
            if (n % num == 0){
                ++divs;
            }
        }
    }
    return divs;
}

int first_500(int nDivs)
{
    int divs = 0, n = 0, pos = 1;

    while (divs <= nDivs){
        n = triangular(pos);
        divs = numDeDivisores(n);
        ++pos;
    }
    return n;
}

int main()
{
    cout << first_500(500) << endl;

    return 0;
}
