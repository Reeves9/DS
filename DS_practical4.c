#include <stdio.h>

int gcd(int num1 , int num2)
{
    if(num1 == 0)
    {
        return num2;
    }
    else
    {
        return gcd(num2%num1 , num1);
    }
}

int main()
{
    int num1 , num2;
    printf("enter two numbers\n");
    scanf("%d%d",&num1,&num2);
    int ans = gcd(num1, num2);
    printf("GCD is %d" , ans);
    return 0;
}
