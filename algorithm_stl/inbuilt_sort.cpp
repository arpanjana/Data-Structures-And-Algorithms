#include <iostream>
#include <algorithm>

using namespace std;

// Define a comparator function
bool compare(int a,int b)
{
    return a>b;
}
/*
    This comparator is very useful when we want to copmare string,various/differenty type of objects
    numbers based upon the number of digits it has
*/


int main() {
    int arr[10];
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    // sort an array using sort() function and its an inbuilt function more efficent
    sort(arr,arr+n,compare);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}
