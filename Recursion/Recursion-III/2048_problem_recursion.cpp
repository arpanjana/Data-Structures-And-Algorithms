#include <iostream>
using namespace std;

char words[][10] = {"zero","one","two","three","four","five","six","seven","eight","nine"};

void printSpelling(int n)
{
    // base case
    if(n==0)
    {
        return;
    }
    // recursive case
    printSpelling(n/10);
    cout<<words[n%10]<<" ";
}

int main() {
    int n; 
    cin>>n;
    printSpelling(n);
    return 0;
}
