#include<bits/stdc++.h>
using namespace std;

void printArray(int arr[],int n){

    cout<<"The sorted elements are: "<<endl;

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void insertionSort(int arr[],int n){
    for(int i=1;i<n;i++){

        int key=arr[i];
        int j=i-1;

        while(j>=0 && key<arr[j]){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=key;
    }
}

int main(){
  
    int n;

    cout<<"Enter the size of the array: ";
    cin>>n;

    int arr[n];
    cout<<"The array elements are:"<<endl;

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

   insertionSort(arr,n);
   printArray(arr,n);
}