#include <iostream>
using namespace std;

/*
    2D character Array|Strings
    No. of rows is optional if you are doing intialization first.

*/



int main() {
   // char a[][10] = {{'a','b','c','\0'},{'d','e','f','\0'}};
   char a[][10] = {"abc","def","hello","darkness"};
    cout<<a[2]<<endl;
    cout<<a[3]<<endl;
    char c[10][10];
    c[0][0] = 'A';

    return 0;
}
