#include<stdio.h>
#include<stdlib.h>


int subset(int* arr, int n)
{
    int i, j, k;
    int count=arr[0];
    for(i=1;i<n;i++)
    {
        count += arr[i];
        if(count%2==0)
        {
           return i+1;
        }
    }
    return -1;
}

int main()
{
    int t, n, result;
    scanf("%d", &t);
    while(t--)
    {
        scanf("%d", &n);
        int* arr, i, shortcut = -1, index = -1;
        arr = (int*)malloc(sizeof(int)*n);
        for(i=0;i<n;i++)
        {
            scanf("%d", &arr[i]);
            if(arr[i]%2==0)
            {
                shortcut = 1;
                index = i+1;
            }
        }
        if(shortcut!=-1)
        {
            printf("%d\n%d\n", shortcut, index);
            continue;
        }
        result = subset(arr,n);
        if(result==-1)
            printf("%d", result);
        else
        {
                printf("%d\n", result);
            for(i=1;i<=result;i++)
            {
                printf("%d ", i);
            }
        }
        printf("\n");
    }
    return 0;
}
