#include <iostream>
using namespace std;

// Search in an array of book
// Search in an array of person

// Linear Search
template<typename T>

int search(T arr[],int n,T key)
{
    for(int i=0;i<n;i++)
    {
        if(arr[i]==key)
        {
            return i;
        }
    }
    return n;
}
int main() {
    int a[] = {1,4,2,5,50};
    int n = sizeof(a)/sizeof(int);
    int key = 5;
   // cout<<search(a,n,key);
   float b[] = {1.45,1.20,1.94,1.03};
   float x = 1.94;
   cout<<search(b,n,x);

}
