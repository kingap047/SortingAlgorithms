#include<iostream>
using namespace std;

void merge(int arr[], int left, int mid, int right)
{
    int n1 = mid-left+1;
    int n2 = right-mid;

    int subleft[n1];
    int subright[n2];

    for(int i=0; i<n1; i++){
        subleft[i]= arr[left+i];
    }
    for(int j=0; j<n2; j++){
        subright[j]= arr[mid+1+j];
    }

    int indexleft=0;
    int indexright=0;
    int indexmerged=left;

    while(indexleft<n1 && indexright<n2){
        if(subleft[indexleft]<=subright[indexright]){
            arr[indexmerged]=subleft[indexleft];
            indexleft++;        
        }
        else{
            arr[indexmerged]=subright[indexright];
            indexright++;
        }
        indexmerged++;
    }

    while(indexleft<n1){
        arr[indexmerged]=subleft[indexleft];
        indexmerged++;
        indexleft++;
    }

     while(indexright<n2){
        arr[indexmerged]=subright[indexright];
        indexmerged++;
        indexright++;
    }
}

void mergesort(int arr[], int left, int right){
    if(left>=right)
    {
        return;
    }

    int mid = left+(right-left)/2;
    mergesort(arr,left,mid);
    mergesort(arr,mid+1,right);
    merge(arr,left,mid,right);
}

void printarr(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int n=7;
    int arr[]={12,11,14,14,15,3,5};
    mergesort(arr,0,n-1);
    printarr(arr,n);
    return 0;
}