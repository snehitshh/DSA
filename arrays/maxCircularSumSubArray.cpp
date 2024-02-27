#include <iostream>
#include <cmath>
using namespace std;
int normalMaxSum(int arr[],int n){       //kadanes algo
    int curr_sum=0;
    int max_sum=0;
    for(int i=0;i<n;i++){
       curr_sum=curr_sum+arr[i];         //taking sum elementwise for ex for first iteration 0+5=5 
       if(curr_sum>max_sum){
        max_sum=curr_sum;                //max_sum will be updated to 5 for first iteration
       }
    if(curr_sum<0){
    curr_sum=0;                          //if at any point the sum goes below 0 the curr sum will be updated to 0
    }
    }
    return max_sum;
}
int overallMaxSum(int arr[], int n)
{
	int max_normal = normalMaxSum(arr, n);
	if(max_normal < 0)
		return max_normal;
	int arr_sum = 0;
	for(int i = 0; i < n; i++)
	{
		arr_sum += arr[i];
		arr[i] = -arr[i];                                //inverting the array
    }
	int max_circular = arr_sum + normalMaxSum(arr, n);  //when you are finding maximum sum in an inverted array
	return max(max_circular, max_normal);                //we are basically finding out minimum sum in original array
}
int main() {
    int n = 5;
     int arr[n] = {8, -4, 3, -5, 7};
     cout<<overallMaxSum(arr, n);
}

