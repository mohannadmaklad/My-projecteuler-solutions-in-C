#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <time.h>
#include <sys/time.h>
#include <unistd.h>



uint32_t isPalindrome(int a);


int main()
{

    struct timeval start, end;
    long mtime, secs, usecs;
    gettimeofday(&start, NULL);

    double time_spent;
    clock_t begin = clock();
    long long int c;
    for( int a = 900; a <= 999; a++)
    {
        for( int b = 900; b<=999 ;b++)
        {
            c = a*b;
            if(isPalindrome(c)) printf(" --%d\n",c);
        }
    }

    gettimeofday(&end, NULL);
	secs  = end.tv_sec  - start.tv_sec;
	usecs = end.tv_usec - start.tv_usec;
	mtime = ((secs) * 1000 + usecs/1000.0) + 0.5;
	printf("Elapsed time: %ld millisecs\n", mtime);
    return 0;
}

uint32_t isPalindrome(int origNum)
{
    uint32_t n , remainder , reversedNum = 0;
    n = origNum;
    while(n != 0 )
    {
        reversedNum *= 10;
        reversedNum += n%10;
        n /= 10 ; // move to the next digit
    }

    if(reversedNum == origNum) return 1;
    else return 0 ;
}
