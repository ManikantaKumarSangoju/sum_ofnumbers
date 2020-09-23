#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num=0;
    int sum=0;
    printf("enter a number to be added if u want to stop then enter 0\n");
    scanf("%d",&num);
    while(num)
    {
        sum+=num;
        printf("enter a number to be added if u want to stop then enter 0\n");
        scanf("%d",&num);


    }
    printf("the sum is %d",sum);
    return 0;
}
