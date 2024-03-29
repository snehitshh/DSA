#include<iostream>
using namespace std;
int findRepeating(int arr[],int n){    //code for when array doesnt start from zero
    int slow=arr[0]+1;
    int fast=arr[0]+1;
    do{                     //first phase starts
        slow=arr[slow]+1;
        fast=arr[arr[fast]+1]+1;
    }
    while(slow!=fast);          //first phase ends
        
slow=arr[0]+1;                //second phase
while (slow!=fast) 
{
    fast=arr[fast]+1;
    slow=arr[slow]+1;
}                            //second phase ends
return slow-1;     
}
int main()
{
int n=8;
int arr[n]={0,2,1,3,5,4,6,2};
cout<<findRepeating(arr,n);
}
