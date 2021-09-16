#include<iostream>
using namespace std;

void printarray(int arr[],int length){
    cout<<endl;
    for(int i=0; i<length; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void insertionsort(int arr[],int n){
    int temp=0;
    int j=0;
    for(int i=1;i<n;i++){
        temp=arr[i];
        j=i-1;
        while(j>=0 && arr[j]>temp){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=temp;
    }
    printarray(arr,n);
}

int main(){
    int n=5;
    int arr[n]={5,4,3,2,1};
    insertionsort(arr,n);
}