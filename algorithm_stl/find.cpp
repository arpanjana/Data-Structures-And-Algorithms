#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int a[] = {1,10,11,19,33};
    int n = sizeof(a)/sizeof(int);
    int key;
    cin>>key;
    auto it = find(a,a+n,key);
    int idx = it-a;
    if(idx == n)
    {
        cout<<"Element is not present in the array"<<"\n";
    }
    else{
        cout<<"Element is found at "<<idx<<"\n";
    }

    return 0;
}
