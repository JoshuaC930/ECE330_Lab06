#include <stdio.h>

//Function for finding out if a specific bit is set to 1 or 0 (Task 1)
int setBit(int n, int position)
{
    if (n & (1 << position))
    {
        return 1;
    }
    else return 0;
}

int main() {
    int i;
    int position;
    printf("Enter a number to check set bit: ");
    scanf("%d %d", &i, &position);
    
    printf("\n");
    printf("\n ---------------------------------------------------------- \n");
    //Write a program in “c” to find out a specific bit is set to 1 or 0.
    printf("Bit set for number %d at position %d: %d \n", i, position, setBit(i, position));
}
