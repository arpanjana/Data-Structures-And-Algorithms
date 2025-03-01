#include <iostream>
using namespace std;

int* fun()
{
    int *a = new int[];
    a[0] = 1;
    a[1] = 2;
    cout<<a<<endl;
    cout<<a[0]<<endl;
    // We should never return a local variable
    return a;
}

int main() {
   int *b = fun();
   cout<<b<<endl;
   cout<<b[0]<<endl;
   // let us clear the array a
   delete [] b;
   return 0;
}
