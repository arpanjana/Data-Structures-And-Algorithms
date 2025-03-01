#include <bits/stdc++.h>
using namespace std;


// char *strtok(char *s,char *delimiters)
// returns a token on each subsequent call
// on the first call function should be passed with string argument for 's'
// on subsequent calls we should pass the string arguement as well
int main() {
    char s[100] = "This is america!";

    char *ptr = strtok(s," ");
    cout<<ptr<<"\n";

    while(ptr!=NULL)
    {
        ptr = strtok(NULL," ");
        cout<<ptr<<"\n";
    }
    return 0;
}
