#include<iostream>
using namespace std;
int majority(int arr[],int n){
    for(int i=0;i<n;i++){
        int count=1;
        for(int j=i+1;j<n;j++) //for first index of i,j travels through the whole array 
            if(arr[i]==arr[j])   //for eg{1,1,1,2,3,4} first element is 1,then the j loop compares 1 with every element of array  
                count++;
            if(count>n/2)
                return i;
        }
            return -1;
    }
int main()
{
int n=5;
int arr[n]={2,1,1,1,4};
cout<<majority(arr,n);
}