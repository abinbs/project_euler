#include<stdio.h>
int main()
{
    long unsigned int i,sum=0;
    clrscr();
    for(i=0;i<1000;i++)//This loop traverses among the first 1000 integers
    {
        if((i%5==0)||(i%3==0))//Checks whether it is a multiple of 5 and 3
        {
            sum=sum+i;//Finds the sum of such numbers
        }
    }
    printf("%d\n",sum);//Prints the sum of multiples
    getchar();
    return 0;
}
