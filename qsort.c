#include<stdio.h>
#include<stdlib.h>

int cmp(const void *a,const void *b)
{
    return *(int*)a - *(int*)b;
}

void MaoPao(int *arr, int size)
{
    for (int i = 0; i < size-1; i++)
    {
        for (int j = 0; j < size-1-i; j++)
        {
            if (arr[j] > arr[j+1])
            {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}
int main()
{
    int arr[10] = {12,53,3,7,45,17,9,64,97,26};
    // qsort(arr, 10, sizeof(int), cmp);
    MaoPao(arr, 10);
    for (int i = 0; i < 10; i++)
    printf("%d ", arr[i]);
    return 0;
}