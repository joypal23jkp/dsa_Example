#include<iostream>
#include<math.h>
#include<ctime>
#include<cstdlib>
#include<iomanip>
#include<cstring>

using namespace std;
int main () {
  
    int end = 4;
    for(int row_start = 0; row_start < end; row_start++) {
        for(int first_tri = 0; first_tri <= row_start; first_tri++) {
            cout<< "*";
        }
        int space = 2*end - 2*row_start-2;
        for(int space_start = 0; space_start < space; space_start++) {
            cout<< " ";
        }
        for(int first_tri = 0; first_tri <= row_start; first_tri++) {
            cout<< "*";
        }
        cout << endl;
        
    }
    for(int row_start = (end -1); row_start >= 0; row_start--) {
        for(int first_tri = 0; first_tri <= row_start; first_tri++) {
            cout<< "*";
        }
        int space = 2*end - 2*(row_start+1);
        for(int space_start = 0; space_start < space; space_start++) {
            cout<< " ";
        }
        for(int first_tri = 0; first_tri <= row_start; first_tri++) {
            cout<< "*";
        }
        cout << endl;
        
    }
   

    return 0;
}