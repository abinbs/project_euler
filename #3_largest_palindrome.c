#include <stdio.h>

int reverse_num(int num) 
{
    int ret = 0, value = 1, temp = 0;
    temp = num;
    while(temp>0)
    {       
        temp = temp/10;
        value = value * 10;
    }
    value = value/10;

    while(num>0)
    {
        temp = num % 10;
        temp = temp * value;
        ret = ret + temp;
        num = num/10;
        value = value/10;
    }

    return ret;
}

int check_palindrome(int num)
{
    if(num==reverse_num(num))
        return 1;
    else
        return 0;
}

int main(void)
{
    int num = 0, i = 0, j = 0, temp = 0, largest = 0;

    for(i=100; i<1000; i++)
    {
        for(j=100; j<1000; j++)
        {
            temp = i * j;
            if(check_palindrome(temp))
            {
                if(temp>largest)
                {
                    largest = temp;
                    
                }
                
            }

        }
    }
    printf("found %d palindrome", largest);
    return 0;
}
