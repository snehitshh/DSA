#include<iostream>
using namespace std;
int maxSumSubArray(int arr[],int n){
    int curr_sum=0;
    int max_sum=0;
    for(int i=0;i<n;i++){
       curr_sum=curr_sum+arr[i];  //taking sum elementwise for ex for first iteration 0+5=5 
       if(curr_sum>max_sum){
        max_sum=curr_sum; //max_sum will be updated to 5 for first iteration
       }
    if(curr_sum<0){
    curr_sum=0;   //if at any point the sum goes below 0 the curr sum will be updated to 0
    }
    }
    return max_sum;
}
int main()
{
int n=5;
int arr[n]={5,-4,-2,6,-1};
cout<<maxSumSubArray(arr,n);
}
