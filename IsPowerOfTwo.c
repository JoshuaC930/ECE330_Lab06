//Function for returning count that is set to 0 or 1 (Task 2

// Online C compiler to run C program online
#include <stdio.h>
int isPowerOfTwo(int n)
{
    while (n != 1)
    {
        if (n % 2 != 0)
        {
            return 0;
            
        }
        n = n / 2;
    }
    return 1;
}
int main() {
    int input;
    printf("Enter a number to test if it is a power of 2: ");
    scanf("%d", &input);
    
    printf("\n");
    printf("\n ---------------------------------------------------------- \n");
    if (isPowerOfTwo(input))
    {
        printf("%d Power is a power of 2.", input);
    }
    else
    {
        printf("%d is not a power of 2", input);
    }

    return 0;
}
