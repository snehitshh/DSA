#include<iostream>
using namespace std;
int getSum(int ps[],int l,int r){
  if(l==0){
    return ps[r];             //if the left index is given as zero then the sum will be the same as ps array
  }
  return ps[r]-ps[l-1];       //if l is not 0 then this equation for eg if l=2 and r=3 then ps[3]-ps[1]
}
int main()
{
   int n=7;
   int arr[n]={2,8,3,9,6,5,4};
   int ps[n];                 //preprocessing before the function call
   ps[0]=arr[0];              //first prefix sum will be the first element
   for(int i=0;i<n;i++){      
    ps[i]=ps[i-1]+arr[i];     //finding the prefix sum for every element
   }
   cout<<getSum(ps,1,2);
}
