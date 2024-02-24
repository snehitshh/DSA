#include <iostream>
using namespace std;
void minFlips(bool arr[], int n)
{
  // Traverse through all array elements
    // starting from the second element
    for (int i = 1; i < n; i++) {
        // If current element is not same
        // as previous
        if (arr[i] != arr[i - 1]) {

            // If it is same as first element
            // then it is starting of the interval
            // to be flipped.
            if (arr[i] != arr[0])
                cout << "From " << i << " to ";
 else
             cout << (i - 1) << endl;                                          // If it is not same as previous
                     }                                     // and same as first element, then
                 }                                        // previous element is end of interval
                           if (arr[n - 1] != arr[0])                                 // handling the end of
                              cout << (n - 1) << endl;                    // last interval   
}
int main()
{
    bool arr[] = { 0, 1, 1, 0, 0, 0, 1, 1 };
    int n = sizeof(arr) / sizeof(arr[0]);
    minFlips(arr, n);
    return 0;
}
