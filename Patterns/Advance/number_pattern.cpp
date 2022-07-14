#include<iostream>

using namespace std;
int main () {
  
    int end = 5;
    for(int row_start = 0; row_start < end; row_start++) {
        for(int first_tri = 0; first_tri < (end - row_start - 1); first_tri++) {
            cout<< " ";
        }
        for(int first_tri = 0; first_tri < (row_start + 1); first_tri++) {
                cout<< "* ";
            
        }
        cout << endl;
        
    }
   

    return 0;
}