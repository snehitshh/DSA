#include<iostream>
using namespace std;
int maxProfit(int price[],int n){
    int profit=0;
    for(int i=0;i<n;i++){
        if(price[i]>price[i-1]){
            profit+=(price[i]-price[i-1]);
        }
    }
    return profit;
}
int main()
{
int n=5;
int price[n]={1,5,3,8,12};
cout<<maxProfit(price,n);
}