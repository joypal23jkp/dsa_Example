#include<iostream>
#include<math.h>
#include<ctime>
#include<cstdlib>
#include<iomanip>
#include<cstring>

using namespace std;
int main () {
  
    int row = 4; int col = 5;
    for(int row_start = 0; row_start < row; row_start++) {
        for(int col_start = 0; col_start < col; col_start++) {
            if(row_start == 0 || row_start == row-1 || col_start == 0 || col_start == col-1)
            cout<<"*";
            else cout<< " ";
        }
        cout<<endl;
    }

    return 0;
}