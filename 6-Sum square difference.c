#include <stdio.h>
#include <stdlib.h>

int main()
{
    unsigned int sqOfSum = 0, sumOfSq = 0 ;
    int max = 100;

    for(unsigned int i = 0 ; i <= max ; i++)
    {
        sqOfSum += i;
        sumOfSq += i*i ;
    }
    sqOfSum = sqOfSum*sqOfSum;
    printf("square of sum = %d , sum of square = %d !\n", sqOfSum , sumOfSq);
    printf("difference between them  = %d !\n", sqOfSum-sumOfSq);

    return 0;
}
