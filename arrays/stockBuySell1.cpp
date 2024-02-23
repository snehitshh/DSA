#include<iostream>
using namespace std;
int maxProfit(int price[],int start,int end){
if(end<=start)
    return 0;
int profit=0;
for(int i=start;i<end;i++){
    for(int j=i+1;j<=end;j++){
        if(price[j]>price[i]){
            int curr_profit=(price[j]-price[i])+maxProfit(price,start,i-1)+maxProfit(price,j+1,end);  //checking all cases i.e on the left of i and on the right of j
            profit=max(profit,curr_profit);
        }
    }
}
return profit;
}
int main()
{
    int start=0,end=4;
    int price[5]={1,4,1,9,3};
    cout<<maxProfit(price,start,end);
}
