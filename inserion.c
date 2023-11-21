#include<stdio.h>
void insertion_sort(int arr[] ,int n);

void main{
    int arr[10],i,n;
    printf("Enter the size of array : ");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    insertion_sort(arr,n);
    for(i=0;i<n;i++){
        printf("%d \t ",arr[i]);
    }

}

void insertion_sort(int arr[] , int n ){
    int i,j,temp;
    for(i=1;i<n;i++){
        temp = arr[i];
        j= i-1;
        while((temp < arr[j])&&(j>=0)){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = temp;
    }
}


/*
25, 4 

 i =1
 j = j-1 => j=0
arr[i] = 4
arr[j] = 25 
temp = 4 

arr[j+1] = arr[j] => arr[0+1] = arr[0] => arr[1] = 25
j-- =>  j = 0-1 => j = -1 exits the while loop 

arr[j+1] => arr[-1+1] => arr[0] = 4

4, 25 
increase i value by 1 for FOR loop 


*/
