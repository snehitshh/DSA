#include<iostream>
using namespace std;
int maxSum(int arr[],int n,int k){
    int curr_sum=0;
for(int i=0;i<k;i++){   //first loop sum till k elements
   curr_sum+=arr[i];
}
int res=curr_sum;
for(int i=k;i<n;i++){   //running loop for the next k elements
curr_sum=curr_sum+arr[i]-arr[i-k];   //adding the new(last)element and removing the first element from the previous array
res=max(curr_sum,res);               //checking if the current sum is larger or the previous result is larger
}
return res;
}
int main()
{
int n=6;
int k=4;
int arr[n]={1,8,30,-5,20,7};
cout<<maxSum(arr,n,k);
}
