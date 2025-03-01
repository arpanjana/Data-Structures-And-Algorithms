#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    // Sorted array
    int a[] = {2,4,10,13,13,13,13,18,22};
    int n = sizeof(a)/sizeof(int);
    int key;
    cin>>key;

    bool found = binary_search(a,a+n,key);
    if(found)
    {
        cout<<"Element is present"<<"\n";
    }
    else{
        cout<<"Element is not present"<<"\n";
    }
    // Get the index of the element
    // upper_bound and lower_bound
    auto ub = upper_bound(a,a+n,key);
    cout<<"Element found at "<<ub-a<<"\n";
    auto lb = lower_bound(a,a+n,key);
    cout<<"Element found at "<<lb-a<<"\n";
    // We can also count the frequency of the elements
    cout<<"frequency of "<<key<<" is "<<ub-lb<<"\n";

    return 0;
}
