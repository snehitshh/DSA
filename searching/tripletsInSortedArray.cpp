#include<iostream>
using namespace std;
bool SumPair(int arr[],int n,int x,int si){
    int i=si;
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
bool Triplet(int arr[],int n,int x){
    for(int i=0;i<n-2;i++)                //going till n-2 as we are looking for triplets
        if(SumPair(arr,n,x-arr[i],i+1))//calling the pair function  x-arr[i] means for eg. 33-arr[0]=33-2=31 now we search for 31 in the pair array
        return true;                //we dont dind 31 so we go to the next element i.e 33-5=28 and we 28 in the pair function 
        return false;                // that means 28+5=33 exists in the array as a triplet
}

int main()
{
int n=5;
int arr[n]={2,5,10,15,18};
cout<<Triplet(arr,n,33);
}