#include <iostream>
using namespace std;
    int findpeakutil(int arr[], int High,int Low,int n )
    {
        int mid = Low +(High-Low)/2;
        if ((mid == 0 || arr[mid-1]<=arr[mid]) &&(mid == n -1 || arr[mid+1]<=arr[mid]))
        {
            return mid;
        }
        else if (mid>0 && arr[mid]<arr[mid-1])
        {
            return findpeakutil(arr,(mid-1),Low,n);
        }
        else
        {
            return findpeakutil(arr,(mid+1),Low,n);
        }
} 
int findpeak(int arr[], int n)
{
    return findpeakutil(arr, n - 1,0, n);
}
int main()
{
    int arr[] = { 1, 3, 20, 4, 1, 0 };
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "Index of a peak point is "
         << arr[findpeak(arr, n)];
    return 0;
}