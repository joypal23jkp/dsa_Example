#include<iostream>

using namespace std;
int main () {
    
    // Find the minimum element in unsorted array and swap it with element at begining.

    int array[6] = { 12, 45, 23, 51, 19, 8 };

    for(int i = 0; i< 6; i++)
    {
        for(int j = 0; j< 6; j++)
        {
            if(array[i] < array[j]) {
                int temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
        }
    }

    for(int i = 0; i< 6; i++)
    {
        cout<< array[i] << ' ';
    }
    return 0;
}