#include<iostream>
#include<math.h>
#include<ctime>
#include<cstdlib>
#include<iomanip>
#include<cstring>

using namespace std;
int main () {
  
    int end = 7;
    for(int row_start = 0; row_start < end; row_start++) {
        for(int col_start = 0; col_start < end; col_start++) {
            if (col_start <= (end-row_start-1))
            {
                cout<< " ";
            }
            else cout << "*";
        }
        cout<<endl;
    }

    return 0;
}