#include <iostream>
#include <string>
using namespace std;

int main(){
    // string Init
    string s0;
    string s1("hello");
    string s2 = "Hello world"; // Assignment
    string s3(s2); // We can also call copy constructor for the string object and we can pass another string here

    string s4 = s3;

    // We can also initialise a string object from an array
    char a[] = {'a','b','c','\0'};
    string s5(a);

    cout<<s0<<endl;
    cout<<s1<<endl;
    cout<<s2<<endl;
    cout<<s3<<endl;
    cout<<s4<<endl;
    cout<<s5<<endl;

    // Some methods on string
    if(s0.empty())
    {
        cout<<s0<<"is an empty string"<<endl;
    }
    // Append
    s0.append("I love C++ ");
    cout<<s0<<endl;
     s0 += " and Python";
    cout<<s0<<endl;
    // erase/Remove method
    cout<<s0.length()<<endl;
    s0.clear();
    cout<<s0.length()<<endl;

    // compare two strings
    s0 = "Apple";
    s1 = "Mango";
    cout<<s0.compare(s1); // Returns an integer ==0 or <0 or >0

    // Overloaded Operator 
    if(s0>s1)
    {
        cout<<"Mango is lexigraphically greater than apple";
    }
    // Find substrings
    string s = "I want to have apple Juice";
    int idx = s.find("apple");
    cout<<idx<<endl;
    // remove a word from the string
    string word = "apple";
    int len = word.length();
    s.erase(idx,len);
    cout<<s<<endl;

    // Iterate over all the characters in a string
    for(int i=0;i<s1.length();i++)
    {
        cout<<s1[i]<<":";
    }
    cout<<endl;
    // We can also use iterators
    for(string::iterator it=s1.begin();it!=s1.end();it++)
    {
        cout<<*it<<",";
    }
    cout<<endl;
    for(char c:s1)
    {
        cout<<c<<"|";
    }


    return 0;
}