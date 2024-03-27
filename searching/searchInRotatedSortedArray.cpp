#include<iostream>
using namespace std;
int search(int arr[],int n,int x ){
    int low=0;
    int high=n-1;
    while(low<=high){
        int mid=(low+high)/2;
        if(arr[mid]==x)
        return mid;               //like normal binary search 
        if(arr[low]<=arr[mid]){
            if(x>=arr[low] && x<arr[mid])
                high=mid-1;
                else
                low=mid+1;        //checking if left half is sorted
        }
        else{
            if(x>arr[mid] && x<=arr[high])
            low=mid+1;
            else
            high=mid-1;           //right half sorted
        }
    }
    return -1;
}
int main(){
    int n=6;
      int array[] = {10,20,40,60,5,8};
  int result = search(array, n, 5);
  if (result == -1){
      cout<<"Element doesn't exist in the array";
  }
  else{
      cout<<"The index of the element is "<< result;
  }
}
