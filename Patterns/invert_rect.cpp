#include<iostream>
#include<math.h>
#include<ctime>
#include<cstdlib>
#include<iomanip>
#include<cstring>

using namespace std;
int main () {
  
    int row = 5; int col = 5;
    for(int row_start = row; row_start > 0; row_start--) {
        for(int col_start = 0; col_start < row_start; col_start++) {
            cout<<" * ";
        }
        cout<<endl;
    }

    return 0;
}