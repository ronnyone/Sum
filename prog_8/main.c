// C Program to accept a three digit number and print the sum of individual digits.
#include <stdio.h>

int main()
{
    int num,sum=0,rem=0;
    printf("Enter the number :");
    scanf("%d",&num);
    while(num!=0)
    {
        rem=num%10;
        num=num/10;
        sum=sum+rem;

    }
printf("%d\n",sum);

    return 0;
}
