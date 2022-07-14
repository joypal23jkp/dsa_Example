#include<iostream>
#include<math.h>
using namespace std;
int main () {
    int num = 13;
    bool flag = 0;

    for(int start = 2; start < sqrt(num) ; start++) {
        if (num  % start == 0)
        {
            cout<<"Not Prime Number "<<endl;
            flag = 1;
            break;
        }
        
    }

    if (flag == 0)
    {
        cout<< "Prime Number"<< endl;
    }
    

    return 0;
}