#include<iostream>

using namespace std;
int main () {
  
    int end = 9;
    for(int row_start = 1; row_start <= 3; row_start++) {
        for(int first_tri = 1; first_tri <= end; first_tri++) {
            if((first_tri+row_start) % 4 == 0 || (row_start == 2 && first_tri % 4 == 0)) cout<< "*";
            else cout<< " ";
        }
        cout << endl;
        
    }

    return 0;
}