#include<stdio.h>
int smallest(int arr[], int k , int n );
void selection(int arr[] , int n );

void main() {
    int arr[10],i,n;
    printf("Enter the size of array : ");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    selection(arr,n);
    for(i=0;i<n;i++){
        printf("%d \t ",arr[i]);
    }
}

int smallest(int arr[], int k , int n){
    int pos = k , small = arr[k] , i;
    for (i=k+1;i<n;i++){
        if (arr[i]<small){
            small = arr[i];
            pos = i;
        }
    }
    return pos;
}

void selection(int arr[],int n){
    int k , pos ,  temp;
    for(k=0;k<n;k++){
        pos = smallest(arr,k,n);
        temp = arr[k];
        arr[k] = arr[pos];
        arr[pos] = temp;
    }
}

/*
39,9
k =0 ,  i = k+1 => i =1
temp =  39 
arr[0] = 9
arr[1] = 39

9 , 39
*/
