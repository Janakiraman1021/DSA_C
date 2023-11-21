#include<stdio.h>
#include<conio.h>
int main() {
    int i , n,temp, j,arr[10];
    printf("\n Enter the number of elements in the array : ");
    scanf("%d",&n);
    printf("\n Enter the Elements : ");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("\n The Elements are : ");
        for(i=0;i<=n-1;i++){
           printf("%d",arr[i]);
    }
    for(i=0;i<=n-1;i++){
        for(j=0;j< = n-i-1;j++){
            if (arr[j]>arr[j+1]){
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }

    printf("\n The Final Sorted Array Is ");
    for(i=0;i<n;i++){
        printf("\t %d",arr[i]);
    }
}