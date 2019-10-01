#include <stdio.h>

int reverse_num(int num) //This function return the reverse of a number 
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

int check_palindrome(int num)//This function checks whether it is a palindrome or not
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
                if(temp>largest)//Compares the palindromes to find the largest of them
                {
                    largest = temp;
                    
                }
                
            }

        }
    }
    printf("found %d palindrome", largest);
    return 0;
}
