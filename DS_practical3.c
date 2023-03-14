#include <stdio.h>

int flooring(float num)
{
    return num;
}

int ceiling(float num)
{
    return num + 1;
}

int main()
{
    float num;
    printf("enter any float number\n");
    scanf("%f",&num);
    int ans1 = flooring(num);
    int ans2 = ceiling(num);
    printf("floored number is %d\n" , ans1);
    printf("ceiled number is %d\n" , ans2);
    return 0;
}
