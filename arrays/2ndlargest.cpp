#include<iostream>
using namespace std;
int seclarge(int arr[],int n)
{
    int res=-1,largest=0;
    for(int i=1;i<n;i++)
    {
        if(arr[i]>arr[largest])
        {
            res=largest;
            largest=i;
        }
        else if(arr[i]!=arr[largest]){
            if(res==-1 || arr[i]>arr[res])
            {
                res=i;
            }
        }  
    }
    return arr[res]; 
}
int main(){
    int n=6;
   int arr[n]={3,2,5,9,8,9};
    cout<<seclarge(arr,n);
}

