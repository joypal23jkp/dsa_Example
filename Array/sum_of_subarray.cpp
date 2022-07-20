#include<iostream>

using namespace std;
int main () {
    
    // check if the element is less than adjecent element.
    int length = 5;
    int array[length] = { 1, 2, 3, 4, 5 };

    int crr = 0;

    for(int i = 0; i < length - 1; i++)
    {

        crr = 0;
        for(int j = i; j< length; j++)
        {
            crr += array[j];
            cout<< crr << endl;
        }
        for(int j = i; j< length; j++)
        {
            cout<< array[j] ;
        }
        cout<< endl;
    }
    return 0;
}