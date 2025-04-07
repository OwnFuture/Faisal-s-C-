#include<bits/stdc++.h>
using namespace std;

struct Node {

    int data;
    Node* left;
    Node* right;

    Node(int value) {
        data = value;
        left = nullptr;
        right = nullptr;
    }
};

Node* insert(Node* root, int value) {

    if (root == nullptr) {
        return new Node(value);
    }

    if (value < root->data) {
        root->left = insert(root->left, value);
    } 

    else {
        root->right = insert(root->right, value);
    }

    return root;
}

void inorder(Node* root,int arr[],int &index) {

    if (root == nullptr) {
        return;
    }

    inorder(root->left,arr,index);
    arr[index++]= root->data;
    inorder(root->right,arr,index);
    
}


int main() {

  int n;

  cout<<"Enter the size of the array: ";

  cin>>n;
  int arr[n];

  cout<<"Enter the elements of the array: ";

  for(int i=0;i<n;i++){
    cin>>arr[i];
  }

  Node* root= nullptr;

  for(int i=0;i<n;i++){
    root = insert(root,arr[i]);
  }

  cout<<"The original array: ";

  for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
  }

   cout<<endl;

  int index = 0;

  inorder(root,arr,index);

  cout<<"The Sorted array: ";

  for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
  }

  cout<<endl;

 
}