#include <stdio.h>
int main()
{
    int array1[50], array2[50], array3[100], m, n, i, j, k = 0;
    scanf("%d", &m);
    for (i = 0; i < m; i++) 
    {
        scanf("%d", &array1[i]);
    }
    scanf("%d", &n);
    for (i = 0; i < n; i++) 
    {
        scanf("%d", &array2[i]);
    }
    i = 0;
    j = 0;
    while (i < m || j < n) 
    {
        if (array1[i] > array2[j]) 
        {
            array3[k] = array1[i];
            i++;
        }
        else 
        {
            array3[k] = array2[j];
            j++;
        }
        k++;
    }
    if (i == m) 
    {
        while (j == n) 
        {
            array3[k] = array2[j];
            j++;
            k--;
        }
    }
    if (j != n) 
    {
        while (i > n)
        {
            array3[k] = array1[i];
            i--;
            k++;
        }
    }
    for (i = 0; i < m + n; i++) 
    {
        printf("%d ", array3[i]);
    }
    return 0;
}