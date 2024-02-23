#include<iostream>
using namespace std;
int rainWater(int building[],int n){
    int left[n],right[n];
left[0]=building[0];
for(int i=1;i<n;i++){
    left[i]=max(left[i-1],building[i]);//finding the building with most height on the left of any array element
}
right[n-1]=building[n-1];
for(int i=n-2;i>=0;i--){
    right[i]=max(right[1+i],building[i]);
}
int ans=0;
for(int i=0;i<n;i++){
    ans+=(min(right[i],left[i])-building[i]);
}
return ans;
}
int main()
{
int n=5;
int building[n]={5,0,6,2,3};
cout<<rainWater(building,n);
}
