#include <iostream>
using namespace std;
int main() {
    char a[10][10];
    // Read a list of strings and we will store them in 2D character array.
    int n;
    cin>>n;
    cin.get(); // to consume any extra spaces
    for(int i=0;i<n;i++)
    {
        cin.getline(a[i],10);
    }
    // Print out all the strings
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<endl;
    }
    return 0;
}
