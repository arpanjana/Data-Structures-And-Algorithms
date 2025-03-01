#include <iostream>
using namespace std;
// read a sentence or a paragraph and strore it in a character array.
// cin.get() is used to read a character
// put a loop to read characters till you get a new line "\n"

void readLine(char arr[],int maxLen,char delim='\n')
{
    int i = 0;
    char ch = cin.get();
    while(ch!=delim)
    {
        arr[i] = ch;
        i++;
        if(i==(maxLen-1))
        {
            break;
        }
        ch = cin.get();
    }
    arr[i] = '\0';
    return;
}


int main() {
     char a[1000];
     cin.getline(a,1000,'$');
     //readLine(a,1000,'$');
     cout<<a;
}
