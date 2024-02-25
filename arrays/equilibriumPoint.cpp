#include<iostream>
using namespace std;
bool epoint(int arr[],int n){
    int rs=0;
    for(int i=0;i<n;i++){
     rs+=arr[i];              //storing sum of whole array in rs
    }
    int ls=0;                 //initialising left side sum
    for(int i=0;i<n;i++){
        rs-=arr[i];          //subtracting the right sum beginning from the first element(kind of like sliding window technique)
        if(ls==rs){          //now checking if ls==rs the giving true
            return true;
        }
        ls+=arr[i];          //now starting to store sum from starting ls
    }
    return false;
}
int main()
{
   int n=6;
   int arr[n]={3,4,8,9,-9,7};
   cout<<epoint(arr,n);
}
