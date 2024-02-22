#include<iostream>
using namespace std;
void leader(int arr[],int n){
    int curr_leader=arr[n-1];
    cout<<curr_leader<<" ";
    for(int i=n-2;i>=0;i--){
        if(arr[i]>curr_leader){
            curr_leader=arr[i];
            cout<<curr_leader<<" ";
        }
    }
}
int main()
{
    int n=6;
int arr[n]={8,7,4,6,3,2};
leader(arr,n);
}