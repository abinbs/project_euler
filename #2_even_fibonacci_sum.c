#include <stdio.h>
int main() {
    int x=1,y=2,sum,limit;    
    int evensum=2;            
    printf("Enter Limit: ");   
    scanf("%d",&limit);
    while( (x+y)<limit ) {
        sum=x+y;
        x=y;
        y=sum;
        if (sum%2==0)
            evensum+=sum;
    }
    printf("%d \n",evensum);//this prints the sum pf even fibanocci numbers 
    return 0;
}
