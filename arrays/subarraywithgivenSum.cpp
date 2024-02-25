#include<iostream>
using namespace std;
int givenSum(int arr[],int n,int sum){   //modified sliding window technique
    int curr=0;
    int s=0;
    for(int e=0;e<n;e++){    //we increase e with every loop 
     curr+=arr[e];             //storing the current sum in curr
    }
    while(sum<curr){           //if the current sum is greater than the given sum
        curr-=arr[s];                //then we start subtracting from the first element 
        s++;           //increasing the starting index so as to subtract the second element and so on till the sum is less than curr
    }
    if(curr==sum){
        return true;  //chechking if the current sum is equal to the given sum and returning true
    }
    return false;
}
int main()
{
int n=4;
int arr[n]={4,8,12,5};
int sum=17;
cout<<givenSum(arr,n,sum);
}
