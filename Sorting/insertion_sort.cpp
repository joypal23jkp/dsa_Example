#include<iostream>

using namespace std;
int main () {
    
    // insert an element from unsorted array to its correct position in sorted array.
    int length = 6;
    int array[length] = { 12, 45, 23, 51, 19, 8 };

    int counter = 1;

    for(int i = 1; i < length; i++)
    {
        int currentNumber = array[i];
        int j = i-1;
        while (array[j] > currentNumber && j >= 0)
        {
            array[j+1] = array[j];
            j--;
        }
        array[j+1] = currentNumber;
            
    }

    for(int i = 0; i< length; i++)
    {
        cout<< array[i] << ' ';
    }
    return 0;
}