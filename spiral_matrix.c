

// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int i,n,top, bottom,left, right,j,m;
    printf("enter the no. of rows:");
    scanf("%d",&n);
    printf("Enter no. of columns");
    scanf("%d",&m);
    int a[n][m];
    for(i = 0;i<n;i++){
        for (j=0;j<m;j++){
            scanf("%d", &a[i][j]);
        }
    }
    left = 0;
    top = 0;
    right = m-1;
    bottom = n-1;
    while (left<=right && top <= bottom){
        for (i = left;i<=right;i++){
            printf("%d ",a[top][i]);
        }
        top++;
        for (i = top;i<=bottom;i++){
            printf("%d ",a[i][right]);
        }
        right--;
        for(i = right;i>=left;i--){
            printf("%d ",a[bottom][i]);
        }
        bottom--;
        for( i = bottom;i>=top;i--){
            printf("%d ",a[bottom][left]);
        }
        left++;
        
    }
}