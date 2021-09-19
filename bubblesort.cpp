#include <iostream>
using namespace std;

void swap(int *a, int *b){
    int temp= *a;
    *a = *b;
    *b = temp;
}

void bubblesort(int arr[], int n){
    int count=0;
    for(int i=0;i<n-1;i++){
        if(arr[i]>arr[i+1]){
            swap(&arr[i],&arr[i+1]);
            count++;
        }
    }
    if(count==0){
        return;
    }
    else{
        bubblesort(arr,n);
    }
}

void printarray(int arr[], int max){
    cout<<endl;
    for(int i=0;i<max;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){

    int n=7;
    int arr[]={3,12,6,4,1,6,2};
    bubblesort(arr,n);
    printarray(arr,n);
    return 0;
}