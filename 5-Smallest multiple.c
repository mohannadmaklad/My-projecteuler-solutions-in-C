#include <stdio.h>
#include <stdlib.h>

int main()
{
    int smallestMul = 20, counter = 2;
    for(int i = 20 ; i > 1 ; --i)
    {
        if(smallestMul%i)
        {
            smallestMul = (20*19*18*17)*counter++;
            i = 21;
        }
    }
    printf("smallest multiple = %d\n",smallestMul);
    return 0;
}
