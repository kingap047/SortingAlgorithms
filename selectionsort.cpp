#include<iostream>
using namespace std;

void printarray(int arr[],int length){
    cout<<endl;
    for(int i=0; i<length; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void swap(int arr[], int i, int j){
    int temp = arr[i];
    arr[i]=arr[j];
    arr[j]=temp;
}

void selectionsort(int arr[],int n){
    for(int i=0;i<n;i++){
        int minindex=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[minindex]){
                minindex=j;
            }
        }
        swap(arr,i,minindex);
    }
    printarray(arr,n);
}

int main(){
    int n=10;
    int arr[n]={5,4,3,2,1,5,3,4,1,2};
    selectionsort(arr,n);
    return 0;
}