#include <stdio.h>

void find_cartesian_product(int set1[], int size1, int set2[], int size2)
{
    printf("Cartesian product of the sets: { ");
    for (int i = 0; i < size1; i++)
    {
        for (int j = 0; j < size2; j++)
        {
            printf("(%d, %d) ", set1[i], set2[j]);
        }
    }
    printf("}\n");
}

int main()
{
    int set1[] = {1, 2, 3};
    int size1 = sizeof(set1) / sizeof(set1[0]);
    int set2[] = {4, 5};
    int size2 = sizeof(set2) / sizeof(set2[0]);

    find_cartesian_product(set1, size1, set2, size2);

    return 0;
}
