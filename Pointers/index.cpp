

#include<iostream>
using namespace std;

int main() {
    int varOne = 12; // store int value to variable.
    // cout<< varOne <<endl;

    int *ptrOne = &varOne; // store address of varOne in pointer of ptrOne.
    // cout<< ptrOne<<endl; // print address of ptrOne [*ptrOne -> print value of ptrOne]
    
    int **ptrTwo = &ptrOne; // store address of ptrOne
    varOne = 15;
    // cout << **ptrTwo <<endl; 

    int arr[] = {1, 2, 3}; // store array
    // cout<<sizeof(*arr); // print first index of array. Because [ sizeof(*arr) is 4 byte ]
    
    int *ptr = arr;

    for(int i = 0; i<3; i++) { // looping through pointer.
        cout<< *ptr <<(*arr+i) <<endl;
        ptr++;
    }



    return 0;
}