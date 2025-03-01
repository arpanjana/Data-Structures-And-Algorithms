#include <iostream>
using namespace std;
int main() {
    int a[] = {1,2,34};
    cout<<a<<"\n";// It will print the address of the array(this is a default behavior)
    char b[] = {'a','b','c','\0'};
    cout<<b<<"\n"; // Here,it will print the character array.this is a special behavior shown by operator "<<" (this is because of operator overloading)
}
