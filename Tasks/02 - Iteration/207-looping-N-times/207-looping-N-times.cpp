#include <stdio.h>

int main()
{
    //Counter variable
    int i;


    //For loop (pre-C99 standard)


    // TASK A - count from 10 down to 0 in steps of -1 answer: for (i = 10; i >-1; i -= 1)

    // TASK B - count from 10 down to -10 in steps of -2 answer: for (i = 10; i >-12; i -= 2)

    // TASK C - count from 10 to 200 in steps of 10 answer: for (i = 10; i <=200 ; i += 10)

    // TASK D - count from -10 down to 20 in steps of 5 answer: for (i = -10; i <=20 ; i += 5)

    // TASK E - can you predict the largest value of i that is displayed?
    for (i = -10; i <=20 ; i += 5)
    {
        //Perform code tasks
        printf("i=%d\n", i);
    }
}