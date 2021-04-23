#include<iostream>
#include<ctime>
using namespace std;

int main() {
    int i, j, k, temp, reversed, result = 0;

    for (i = 100; i < 1000; i++) {
        for (j = 100; j < 1000; j++) {
            if ((k = i * j) > result) {
                reversed = 0;
                temp = k;

                while (temp) {
                    reversed = reversed * 10 + temp % 10;
                    temp /= 10;
                }

                if (reversed == k) {
                    result = k;
                }
            }
        }
    }

    cout << result;
    return 0;
}
