#include<iostream>
using namespace std;
int binary(int arr[],int low,int high,int num){
    int mid;
    if(low<=high){
    mid=(high+low)/2;
    if(arr[mid]==num){
    return mid;
    }
    if(arr[mid]>num){
    return binary(arr,low,mid-1,num);
    }
    else
    return binary(arr,mid+1,high,num);
}
return -1;
}
int main(){
    int n=7;
      int array[] = {2,4,7,9,13,10,20};
  cout<<binary(array, 0, n - 1, 7);
}
 