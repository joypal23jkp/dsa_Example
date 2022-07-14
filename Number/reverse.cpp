#include<iostream>

using namespace std;
int main () {
    int num = 12345;
    int reverse = 0;

    while (num > 0)
    {
        int lastNum = num % 10;
        reverse = (reverse*10) + lastNum;
        num = num / 10;
    }
    
    cout<< reverse;

    

    return 0;
}