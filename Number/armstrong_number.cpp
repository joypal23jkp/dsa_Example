#include<iostream>
#include<math.h>
using namespace std;

int main () {

    int n = 153;

    int a_num = n;
    int sum = 0;

    while (n > 0)
    {
        int lastDigit = n%10;
        sum = pow(lastDigit, 3);
        n = n/10;
    }

    if (sum == a_num)
    {
        cout<<" ArmStrong Number " << sum;
    } else{
        cout<<" Not ArmStrong Number " << sum;
    }
    
    


    return 0;
}