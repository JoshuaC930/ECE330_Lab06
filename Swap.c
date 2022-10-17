#include <stdio.h>

//Function to move all zeroes to left
void moveAllZeroes(int arr[], int n)
{
    int count1 = 0;
    
    for (int i = 0; i < n; i++)
    {
        if (arr[i] != 1)
        {
            arr[count1++] = arr[i];
        }
    }
 
    while (count1 < n) 
    {
        arr[count1++] = 1;
    }

    int lastNonOne = 0;
 
    // Traverse the array and pull non-zero elements to the
    // required indices
    for (int i = n - 1; i >= 0; i--) 
    {
        if (!lastNonOne)
        {
            lastNonOne = i;
        }
        if (arr[i] != 0)
        {
            arr[lastNonOne--] = arr[i];
        }
    }
    
    // Put zeros to start of array
    while (lastNonOne >= 0)
        arr[lastNonOne--] = 0;
}

int main() 
{
    int array[] = {2,10,20,0,59,63,0,88,0}; 
    int arraySize = (int)sizeof(array)/sizeof(array[0]);
    
    printf("sizeof of array: %d\n", arraySize); 
    
    moveAllZeroes(array, arraySize);

    for (int i = 0; i < arraySize; i++)
    {
        printf("%d ", array[i]);
    }
        
    
    return 0;
}
