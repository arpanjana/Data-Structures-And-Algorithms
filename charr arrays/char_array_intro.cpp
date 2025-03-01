#include <iostream>
using namespace std;

int main()
{
    int a[] = {1,3,4};
    cout<<a; // This will give the address of the array
    char b[] = {'a','b','c','\0'};
    cout<<b<<" "; // This will print the array(this is because of operator overloading)
    // Input
    char s[10];
    cin>>s;
    cout<<s;
    char s1[] = {'h','e','l','l','o'};
    char s2[] = "hello"; // In this case the null character is already included
    cout<<"\n";
    cout<<s1<<" "<<sizeof(s1)<<"\n";
    cout<<s2<<" "<<sizeof(s2)<<"\n";
    return 0;
}