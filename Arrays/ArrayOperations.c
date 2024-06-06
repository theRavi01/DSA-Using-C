#include<stdio.h>
#define MAX 10

// input array at runtime
int inputArray(int arr[]){
    int size;
    printf("Enter the size of array:");
    scanf("%d",&size);
    printf("Enter the elements in array:\n");
    for (int  i = 0; i < size; i++)
    {
       scanf("%d",&arr[i]);
    }
    return size;
}

void traverse(int arr[],int size){
    for (int  i = 0; i < size; i++){
        printf("%d",arr[i]);
    }
}

int main(){
     int arr[MAX];
int size1 = inputArray(arr);
traverse(arr,size1);
}