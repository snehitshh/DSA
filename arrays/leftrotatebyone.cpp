#include<iostream>
using namespace std;
void leftRotate(int arr[],int n){
    int i,temp;
    temp=arr[0];
    for(int i=1;i<n;i++){
        arr[i-1]=arr[i];
    }
    arr[n-1]=temp;
    for(i=0;i<n;i++){
        cout<<arr[i];
    }
}
int main(){
    int n=5;
    int arr[n]={1,2,3,4,5};
    leftRotate(arr,n);
}
