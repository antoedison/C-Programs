#include<stdio.h>
int main(){
    int arr[10];
    printf("size of array: %zu bytes\n",sizeof(arr));
    printf("No. of elements in array: %zu\n", sizeof(arr) / sizeof(arr[0]));
    return 0;
}