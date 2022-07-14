#include<iostream>

using namespace std;
int main () {
  
    int end = 5;
    for(int row_start = 0; row_start < end; row_start++) {
        for(int first_tri = 0; first_tri < row_start+1; first_tri++) {
            if ((row_start + first_tri) % 2 == 0)
            {
                cout<<"1";
            }else{
                cout<< "0";
            }
            
        }
        cout << endl;
        
    }
   

    return 0;
}