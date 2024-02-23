#include<iostream>
using namespace std;
void printFreq(int arr[],int n){
     int freq=1;
     int i=1;
     while(i<n){
        while(i<n && arr[i]==arr[i-1]){
            freq++;
            i++;
        }
         cout<<arr[i-1]<<" "<<freq<<" ";
          i++;
        freq=1;
     }
       if(n==1 || arr[n-1]!=arr[n-2])
    {
    cout<<arr[n-1]<<" "<<1;//freq of last element will be if it is alone
}
}
int main()
{
  int n=5;
  int arr[n]={1,1,2,2,3};
  printFreq(arr,n);
}
