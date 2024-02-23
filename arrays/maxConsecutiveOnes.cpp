#include<iostream>
using namespace std;
int maxOnes(int arr[],int n){
    int res=0;
    int curr;
    for(int i=0;i<n;i++){
        if(arr[i]==0)
        curr=0;
            else{
                curr++;
                res=max(res,curr);
            }        
    }
    return res;
}
int main()
{
  int n=5;
  int arr[n]={1,1,1,0,1};
  cout<<maxOnes(arr,n);
}