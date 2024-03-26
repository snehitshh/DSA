#include<iostream>
using namespace std;
int binary(int arr[],int low,int high,int num){
    int mid;
    while(low<=high){
    mid=(high+low)/2;
    if(arr[mid]==num){
    return mid;
    }
    if(arr[mid]>num){
    high=mid-1;
    }
    if(arr[mid]<num){
    low=mid+1;
    }
}
return -1;
}
int main(){
    int n=7;
      int array[] = {2,4,7,9,10,13,20};
  int result = binary(array, 0, n - 1, 13);
  if (result == -1){
      cout<<"Element doesn't exist in the array";
  }
  else{
      cout<<"The index of the element is"<<result;
  }
}
