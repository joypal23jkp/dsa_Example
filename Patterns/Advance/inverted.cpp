#include<iostream>

using namespace std;
int main () {
  
    int end = 5;
    for(int row_start = 0; row_start < end; row_start++) {
        for(int first_tri = 0; first_tri < (end - row_start); first_tri++) {
            cout<< first_tri + 1;
        }
        cout << endl;
        
    }
   

    return 0;
}