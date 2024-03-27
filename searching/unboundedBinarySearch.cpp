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
int search(int arr[],int num){  //arr={1,10,15,20,40,60,80,100,200,500,1000........}
    if(arr[0]=num)              //checking specially for 0 corner case as when we'll perform i=i*2 it will always give zero
    return 0;                   //num=100  
    int i=1;
    while(arr[i]<num)            
    i=i*2;                      //after while loop i=8
    if(arr[i]=num)
    return i;
    return binary(arr,num,i/2+1,i-1);        //calling binary search
}
int main(){
    int n=7;
      int array[] = {2,4,7,9,10,13,20};
  int result = binary(array, 0, n - 1, 4);
  if (result == -1){
      cout<<"Element doesn't exist in the array";
  }
  else{
      cout<<"The index of the element is "<< result;
  }
}
