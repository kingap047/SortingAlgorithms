#include<iostream>
using namespace std;

void swap(int* a, int* b){
    int temp = *b;
    *b = *a;
    *a = temp;
}

void printarr(int arr[], int size){
    cout<<endl;
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
}

int partition(int arr[], int left, int right){
    int pivot = arr[right];
    int i = left-1;
    for(int j=left;j<right;j++){
        if(arr[j]<pivot){
            i++;
            swap(&arr[j],&arr[i]);
        }
    }

    swap(&arr[right], &arr[i+1]);
    return i+1;
}

void quicksort(int arr[], int left, int right){
    if(left<right){
        int pivot = partition(arr,left,right);
        quicksort(arr,left,pivot-1);
        quicksort(arr,pivot+1,right);
    }
}

int main(){
    int n=5;
    int arr[]={15,2,13,1,15};
    quicksort(arr,0,n-1);
    printarr(arr,n);
}