#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <time.h>
#include "library.h"

int dd=0,hh=0,mm=0,ss=0,flag=0;
void delay(ms)
{
    clock_t timegap=ms+clock();
    while(timegap>clock());

}
int timer()
{
    while(!kbhit()&& flag==0){
        if(ss>59)
        {
            ss=0;
            ++mm;
        }
           if(mm>59)
        {
            mm=0;
            ++hh;
        }
        if(hh>24)
        {
            hh=0;
            ++dd;
        }
        printtime();
        delay(1000);
        ss+=1;
    }
    select();
}
int printtime()
{
    system("cls");
    printf("1.start 2.stop 3.reset 4.End\n");
    printf("-------------------------------\n");
    printf("       %d:%d:%d:%d\n",dd,hh,mm,ss);
    printf("-------------------------------\n");

}
int main()
{
    while(1)
    {
        timer();
    }
}
