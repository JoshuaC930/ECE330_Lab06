// Online C compiler to run C program online
#include <stdio.h>

int countSetBit(int n)
{
    int count = 0;
    
    while (n) 
    {
        count += n & 1;
        n >>= 1;
    }
    return count;
}

int countUnsetBit(int n)
{
    int count = 0;
    for (int i = 1; i <= n; i = i << 1)
    {
        if ((i & n) == 0)
        {
            count++;
        }
    }
    return count;
}

int main() {
    int input;
    printf("Enter a number to count set and unset bits: ");
    scanf("%d", &input);

    printf("\n");
    printf("\n ---------------------------------------------------------- \n");
    printf("Number of set Bits: %d | Number of unset Bits: %d", countSetBit(input), countUnsetBit(input));
    
    // printf("%d", countUnsetBit(input));
    return 0;
}
