#include<bits/stdc++.h>
using namespace std;

void swap(int *a, int *b){
    int temp=*a;
    *a=*b;
    *b=temp;
}

int partition(int arr[],int low,int high){
    int pivot=arr[high];
    int i=low-1;
    
    for(int j=low;j<high;j++){
        if(arr[j]<=pivot){
            i++;
            swap(&arr[i],&arr[j]);
        }
    }
    swap(&arr[i+1],&arr[high]);
    return (i+1);
}

void quicksort(int arr[],int low,int high){
    if(low<high){
        int pi=partition(arr,low,high);
        
        quicksort(arr,low,pi-1);
        quicksort(arr,pi+1,high);
    }
}

void display(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;
    
    int arr[n];
    cout<<"The array elements are: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    quicksort(arr,0,n-1);
    
    cout<<"The sorted array elements are: ";
    display(arr,n);
}