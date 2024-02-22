#include<iostream>
using namespace std;
int maxDiff(int arr[],int n){
    int res=arr[1]-arr[0]; //taking difference between 1st and 2nd elements as result
    int minVal=arr[0];
    for(int j=1;j<n;j++){
        res=max(res,arr[j]-minVal);
        minVal=min(minVal,arr[j]);
    }
    return res;
}
int main()
{
    int n=5;
  int arr[n]={3,3,2,4,7};
  cout<<maxDiff(arr,n);
}

