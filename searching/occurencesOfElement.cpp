#include<iostream>
using namespace std;
int lastindexElement(int arr[],int n,int x){
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
            if(mid==n-1 || arr[mid]!=arr[mid+1])
            return mid;
            else 
            low=mid+1;
        }
    }
    return -1;
}
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
int countOcc(int arr[],int n,int x){
    int first=indexElement(arr,n,x);//calling the function for first index of an element
 if(first==-1){
    return 0;
 }
 else
 return(lastindexElement(arr,n,x)-first+1);
}
int main()
{
 int n=7;
 int arr[n]={1,2,2,2,2,4,5};
 cout<<countOcc(arr,n,2);
}