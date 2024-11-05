// Online C compiler to run C program online
#include <stdio.h>
int temp,  b,n, i,j,key;
int main() {
    //int a[] = {4,2,3,1};
    
    printf("Enter no. of elements:");
    scanf("%d",&n);
    int a[n];
    for (i = 0;i<n; i++){
        scanf("%d",&a[i]);
    }
    /*
    //n = sizeof(a)/ sizeof(a[0]);
    for ( i = 0;i<n;i++){
        for ( j =i+1;j<n;j++){
            if (a[i]>a[j]){
                temp = a[i];
                a[i] = a[j] ;
                a[j] = temp;
            }
        }
    }
    for(i = 0;i<n;i++){
        printf("%d ",a[i]);
    }
    printf("Second largest number is %d\n", a[n-2]);
    
    //To a search a number in an array
    printf("Enter the number to be searched\n");
    scanf("%d",&key);
    for (i=0;i<n;i++){
        if (a[i] == key){
            printf("Number matched in position: %d\n",key);
            break;
        }
    }
    */
    //reverse an array
    int s =0, e = n-1;
    while(s < e){
        int temp = a[s];
        a[s] = a[e];
        a[e] = temp;
        s++;
        e--;
    }
    for(i = 0;i<n;i++){
        printf("%d ",a[i]);
    }
    
}

