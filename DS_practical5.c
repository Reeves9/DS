#include <stdio.h>

int bin_srch(int arr[] , int start , int end , int srch)
{
    if(end >= start)
    {
        int mid = start + (end - start) / 2;
        if(arr[mid] == srch)
        {
            return mid;
        }
        else if(arr[mid] > srch)
        {
            return bin_srch(arr , start , mid - 1 , srch);
        }
        else if(arr[mid] < srch)
        {
            return bin_srch(arr , mid + 1 , end , srch);
        }
    }
    return -1;

}

int main()
{
    int arr[] = {1,4,6,7,9,13,16,17,19,21,26,28};
    int start = 0 , end = 11 , srch;
    printf("enter query\n");
    scanf("%d",&srch);
    int ans = bin_srch(arr , start , end , srch);
    if(ans == -1)
    {
        printf("not found\n");
    }
    else
    {
        printf("%d is in %d position\n",srch , ans+1);
    }
    return 0;
}
