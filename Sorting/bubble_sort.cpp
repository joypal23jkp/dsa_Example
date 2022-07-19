#include<iostream>

using namespace std;
int main () {
    
    // check if the element is less than adjecent element.
    int length = 6;
    int array[length] = { 12, 45, 23, 51, 19, 8 };

    int counter = 1;
    while (counter < length)
    {
        for(int i = 0; i < length - counter; i++)
        {
            if(array[i] > array[i+1])
            {
                int temp = array[i];
                array[i] = array[i+1];
                array[i+1] = temp;
            }
            
        }
        counter++;
    }
    

    for(int i = 0; i< length; i++)
    {
        cout<< array[i] << ' ';
    }
    return 0;
}