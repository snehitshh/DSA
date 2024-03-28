#include <iostream>
using namespace std;
int Peak(int arr[], int n)
{
	int low = 0, high = n - 1;

		while(low <= high)
		{
			int mid = (low + high) / 2;
			if((mid == 0 || arr[mid - 1] <= arr[mid]) &&
				(mid == n - 1 || arr[mid + 1] <= arr[mid]))     //checking if middle element is peak
				return mid;
			if(mid > 0 && arr[mid - 1] >= arr[mid])             //checking whether to go on the left side pr right side
				high = mid -1;                      //if the element to the left is greater than mid ,then we go to the left
			else
				low = mid + 1;                    //if the element on the right is greater than mid we go to the right side
		}
	return -1;
}

int main() {
int  n = 7;
int arr[n] = {5, 20, 40, 30, 20, 50, 60};
cout << Peak(arr, n);
return 0;
}