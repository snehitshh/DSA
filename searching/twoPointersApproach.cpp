#include<iostream>
using namespace std;  //two pointer approach works well for sorted arrays,for unsorted arrays hashing is better
bool SumPair(int arr[],int n,int x){
    int i=0;
    int j=n-1;
    while(i<j){
        if(arr[i]+arr[j]==x){      //in this code we are checking whether a given number is a sum of another two numbers in the array
           return true;
        }
        else if(arr[i]+arr[j]<x)
            i++;
        else 
        j--;
    }
    return false;
}
int main()
{
int n=5;
int arr[n]={0,2,5,6,7};
cout<<SumPair(arr,5,3);
return 0;
}