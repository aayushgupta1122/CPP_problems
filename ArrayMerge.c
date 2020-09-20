#include<stdio.h>
#include<stdlib.h>
int add(int arr[], int array[],int L,int U){
    int n, i;
    for(i=L;i<U;i++){
        arr[i]=array[i];
    }
    return arr;
}
int swap(int *x, int *y){
int *temp;
*temp = *x;
*x = *y;
*y = *temp;
return;
}
int sort(int n4, int arr[]){
int i, j, min;
min = arr[0];
for(i=1;i<=n4;i++){
       for(j=2;j<n4;j++){
        if(arr[i]>arr[j])
            {swap(&arr[i], &arr[j]);}
       }
       return arr;
}
}
int main(){
int n1, n2, n3, i;
printf("Input size of 3 sorted arrays: ");
scanf("%d %d %d", &n1, &n2, &n3);
int arr1[n1];
int arr2[n2];
int arr3[n3];
printf("Input contents of array 1:");
for(i=0;i<n1;i++)
    scanf("%d", &arr1[i]);
i=0;
printf("Input contents of array 2:");
for(i=0;i<n2;i++)
    scanf("%d", &arr2[i]);
i=0;
printf("Input contents of array 3:");
for(i=0;i<n3;i++)
    scanf("%d", &arr3[i]);
int n4 = n1+ n2+ n3;
int arr[n4];
add(arr, arr1, 0, n1);
add(arr, arr2, n1, n1+n2);
add(arr, arr3, n1+n2, n4);
sort(n4, arr);
for(i=0;i<n4;i++)
    printf("%d", arr[i]);
}
