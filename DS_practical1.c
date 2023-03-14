#include <stdio.h>

void print_set(int set[], int size)
{
    printf("{ ");
    for (int i = 0; i < size; i++) 
    {
        printf("%d ", set[i]);
    }
    printf("}\n");
}

void find_union(int set1[], int size1, int set2[], int size2) 
{
    int i = 0, j = 0;
    int union_set[size1 + size2];
    int union_size = 0;

    while (i < size1 && j < size2) 
    {
        if (set1[i] < set2[j]) 
        {
            union_set[union_size++] = set1[i++];
        } 
        else if (set2[j] < set1[i]) 
        {
            union_set[union_size++] = set2[j++];
        } 
        else 
        {
            union_set[union_size++] = set1[i++];
            j++;
        }
    }

    while (i < size1) 
    {
        union_set[union_size++] = set1[i++];
    }

    while (j < size2) 
    {
        union_set[union_size++] = set2[j++];
    }

    printf("Union of the sets: ");
    print_set(union_set, union_size);
}

void find_intersection(int set1[], int size1, int set2[], int size2) 
{
    int i = 0, j = 0;
    int intersection_set[size1 < size2 ? size1 : size2];
    int intersection_size = 0;

    while (i < size1 && j < size2) 
    {
        if (set1[i] < set2[j]) 
        {
            i++;
        } 
        else if (set2[j] < set1[i]) 
        {
            j++;
        } 
        else 
        {
            intersection_set[intersection_size++] = set1[i++];
            j++;
        }
    }

    printf("Intersection of the sets: ");
    print_set(intersection_set, intersection_size);
}

void find_difference(int set1[], int size1, int set2[], int size2) 
{
    int i = 0, j = 0;
    int difference_set[size1];
    int difference_size = 0;

    while (i < size1 && j < size2) 
    {
        if (set1[i] < set2[j]) 
        {
            difference_set[difference_size++] = set1[i++];
        } 
        else if (set2[j] < set1[i]) 
        {
            j++;
        } 
        else 
        {
            i++;
            j++;
        }
    }

    while (i < size1) 
    {
        difference_set[difference_size++] = set1[i++];
    }

    printf("Difference of the sets: ");
    print_set(difference_set, difference_size);
}

int main() 
{
    int set1[] = {1, 3, 5, 7, 9};
    int size1 = sizeof(set1) / sizeof(set1[0]);
    int set2[] = {2, 3, 5, 7, 11, 13};
    int size2 = sizeof(set2) / sizeof(set2[0]);

    find_union(set1, size1, set2, size2);
    find_intersection(set1, size1, set2, size2);
    find_difference(set1, size1, set2, size2);

    return 0;
}
