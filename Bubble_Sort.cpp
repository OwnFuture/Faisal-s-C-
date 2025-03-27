#include<bits/stdc++.h>
using namespace std;


void printArray(int arr[],int n){

    cout<<"The sorted array elements are: "<<endl;

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void bubbleSort(int arr[],int n){
    
    for(int step=0;step<n-1;step++){
        
        for(int i=0;i<n-step-1;i++){

            if(arr[i]>arr[i+1]){

                int temp=arr[i];
                arr[i]=arr[i+1];
                arr[i+1]=temp;
            }
        }
    }
}

int main(){

    int n;

    cout<<"Enter the size of the array: ";
    cin>>n;

    int arr[n];
    cout<<"The Array elements are:"<<endl;

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    bubbleSort(arr,n);
    printArray(arr,n);
}