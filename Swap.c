
// Online C compiler to run C program online
#include <stdio.h>

void moveAllZeros(int Array[], int n)
{
    int index = 0;
    int size = (int)sizeof(Array)/sizeof(Array[0]);
    for (int i = size - 1; i >= 0; i--)
    {
        if (Array[i] != 0)
        {
            Array[size--] = Array[i];
        }
    }
    
    for (int i = size; i < n; i++)
    {
        Array[i] = 0;
    }
}
int main() {
    int array[] = {1,10,20,0,59,63,0,88,0}; 
    int arraySize = (int)sizeof(array)/sizeof(array[0]);
    
    printf("sizeof of array: %d\n",(int)sizeof(array)/sizeof(array[0])); 
    
    
    moveAllZeros(array, arraySize);
    
    for (int i = 0; i < arraySize; i++)
    {
        printf("%d, ", array[i]);
    }
    
    
    return 0;
}
