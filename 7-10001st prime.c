#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <math.h>
#include <time.h>
#include <sys/time.h>
#include <unistd.h>

void printPrimes(uint8_t list[], int size);

int main()
{

    struct timeval start, end;
    long mtime, secs, usecs;
    gettimeofday(&start, NULL);


    int n = 150000;
    uint8_t *nIntegers;
    nIntegers = calloc(n,sizeof(uint8_t));

    for(int j = 2 ; j < sqrt(n); j++)
    {
        if(!nIntegers[j])
            for(int k = j*j ; k < n ; k += j )
                nIntegers[k] = 1 ;
    }

    printPrimes(nIntegers,n);

    gettimeofday(&end, NULL);
    secs  = end.tv_sec  - start.tv_sec;
    usecs = end.tv_usec - start.tv_usec;
    mtime = ((secs) * 1000 + usecs/1000.0) + 0.5;
    printf("Elapsed time: %ld millisecs\n", mtime);
    return 0;
}

void printPrimes(uint8_t list[], int size)
{
    int counter = 0;
    for(int i = 2 ; i < size ; i++)
    {
        if(!list[i]) counter++ ;
        if(counter == 10001)
        {
            printf("10001th prime is = %d\n",i);
            break;
        }
    }
}
