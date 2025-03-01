#include <iostream>
using namespace std;


int binary_serach_rec(int *a,int s,int e,int key)
{
    int m = (s+e)/2;
    // base case
    if(s<e){
    if(a[m]==key)
    {
        return m;
    }
    else if(a[m]>key)
    {
        return binary_serach_rec(a,s,m-1,key);
    }
    else{
        return binary_serach_rec(a,m+1,e,key);
    }
    }
    return -1;
}



int main()
{
    int arr[] = { 2, 3, 4, 10, 40 }; 
    int x = 10; 
    int n = sizeof(arr) / sizeof(arr[0]); 
    int result = binary_serach_rec(arr, 0, n - 1, x); 
    (result == -1) ? cout << "Element is not present in array"
                   : cout << "Element is present at index " << result;
}