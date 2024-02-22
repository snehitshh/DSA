#include<iostream>
using namespace std;
void zerosToEnd(int arr[],int n){
    int count=0;
    for(int i=0;i<n;i++){
        if(arr[i]!=0){
            swap(arr[i],arr[count]);
            count++;
        }
    }
    for(int i=0;i<n;i++){
        cout<<arr[i] <<" ";
    }
}
int main(){
    int n=5;
    int arr[n]={3,0,5,0,8};
    zerosToEnd(arr,n);
}
