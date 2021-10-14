#include <stdio.h>
void max_progression_series(int n, int arr[n]);
int main()
{
    int n;
    printf("\n Enter the number of elements of the array : ");
    scanf("%d", &n);
    int arr[n];
    printf("\n The array elements are : \n");
    for (int i = 0; i < n; i ++)
    {
        scanf("%d", &arr[i]);
    }
    max_progression_series(n, arr);
}
void max_progression_series(int n, int arr[n])
{
    int j = 1, k = 0, index[n], count[n], c = 1;
    index[0] = 0; 
    for (int i = 0; i < n; i ++)
    {
        if (arr[i + 1] == arr[i] + 1)
        {
            c ++;
            //printf(" %d ",c);
        }
        else
        {
            index[j] = i + 1;
            j ++;
            //printf("%d", index[j]);
            count[k] = c;
            k ++;
            c = 1;
             //printf("%d", count[k]);
        }
    }
    int max = -1, ind = -1;
    for (int i = 0; i < k; i ++)
    {
        //printf (" %d ", index[i]);
        //printf (" %d ", count[i]);
        if (count[i] > max)
        {
            max = count[i];
            ind = i;
        }
    }
    printf("\n The maximum count of the progression series present in that array is %d", max);
    int start_index = index[ind];
    printf("\n ***********The longest progression series is*******************\n");
    for (int i = start_index; i < start_index + count[ind]; i ++)
    {
        printf("%d   ", arr[i]);
    }
}