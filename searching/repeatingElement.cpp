#include<iostream>
using namespace std;
int findRepeating(int arr[],int n){    //code for when array doesnt start from zero
    int slow=arr[0];
    int fast=arr[arr[fast]];
    do{                     //first phase starts
        slow=arr[slow];
        fast=arr[arr[fast]];
    }
    while(slow!=fast);          //first phase ends
        
slow=arr[0];                //second phase
while (slow!=fast) 
{
    slow=arr[slow];
    fast=arr[fast]; 
}                            //second phase ends
return slow;     
}
int main()
{
int n=8;
int arr[n]={1,3,2,4,6,5,7,3};
cout<<findRepeating(arr,n);
}
