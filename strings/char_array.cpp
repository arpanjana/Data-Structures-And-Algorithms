#include <iostream>
using namespace std;
int main() {
    int a[] = {1,2,34};
    cout<<a<<"\n";// It will print the address of the array(this is a default behavior)
    char b[] = {'a','b','c','\0'};
    cout<<b<<"\n"; // Here,it will print the character array.this is a special behavior shown by operator "<<" (this is because of operator overloading)
    // Input
    char s[10];
    cin>>s;
    cout<<s;
    char s1[] = {'h','e','l','l','o'};// This doesn't terminate will null character
    char s2[] = "hello"; // another way 
    cout<<s1<<" "<<sizeof(s1)<<"\n"; // 5 bytes
    cout<<s2<<" "<<sizeof(s2)<<"\n"; // 6 bytes
    char s3[10] = "hello";
    cout<<s3<<" "<<sizeof(s3)<<"\n";
    return 0;
}
