#include <iostream>
using namespace std;
int main() {
    // Allocation+deallocation = compiler
    int b[100];
    cout<<sizeof(b)<<endl;
    cout<<b; //symbol table
    // Here b cannot be overwritten, b is a part of Read only Memory
    // Dynamic allocation (on the fly)
    int n;
    cin>>n;
    int *a = new int[n];
    // int *a = new int[n]{0} to initialize the dynamic array with all the values zero.
    cout<<sizeof(a)<<endl;
    cout<<a<<endl; // Variable a that is created inside the static memory -> overwritten
    // a = new char[30];

    // No change
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        cout<<a[i]<<" ";
    }
    // Free up space
    delete [] a;
}
