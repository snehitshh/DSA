#include<iostream>
using namespace std;
int indexElement(int arr[],int n,int x){
    int low=0;
    int high=n-1;
    while(low<=high){
        int mid=(low+high)/2;
        if(arr[mid]>x)
        {
            high=mid-1;
        }
        else if(arr[mid]<x){
            low=mid+1;
        }
        else{
            if(mid==0 || arr[mid-1]!=arr[mid])
            return mid;
            else 
            high=mid-1;
        }
    }
    return -1;
}


int main()
{
  int n=5;
  int arr[n]={1,2,3,4,5};
  cout<< indexElement(arr,n,5);
}