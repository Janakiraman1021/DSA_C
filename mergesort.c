#include<stdio.h>
void merge (int arr[] , int left , int right , int middle){
    int i,j,k;
    int n1 = middle-left+1;
    int n2 = right-middle;
    int L[n1] , R[n2];
    for(i=0;i<n1;i++){
        L[i] = arr[left+i];
    }
    for(j=0;j<n2;j++){
        R[j] = arr[middle+1+j];
    }

    i=0;
    j=0;
    k = left;
    while(i < n1 && j < n2 ){
        if(L[i]<=R[j]){
            arr[k] = L[i];
            i++;
        }
        else{
            arr[k] = R[j];
            j++;
        }
        k++;
    }
    while(i < n1){
        arr[k] = L[i];
        i++;
        k++;
    }
    while (j<n2){    
        arr[k] = R[j];
        j++;
        k++;
    }
}

void mergeSort(int arr[] , int left , int right){
    if(left<right){
        int middle = (left+right)/2;
        mergeSort(arr , left , middle);
        mergeSort(arr , middle+1 , right);
        merge(arr , left , right , middle);
    }
}

void printarry(int a[] , int size){
    for(int i=0;i<size;i++){
        printf("%d",a[i]);
    printf("\n");
    }
}

void main(){
    int arr[6];
    for (int  i= 0 ;i<6;i++){
        printf("Enter The Array : ");
        scanf("%d",&arr[i]);
    }
    int size = sizeof(arr)/sizeof(arr[0]);
    mergeSort(arr , 0 , size-1);
    printarry(arr , size);
    
}