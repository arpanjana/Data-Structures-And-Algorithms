#include <iostream>
#include <list>
using namespace std;
int main() {
    list<int> l;
    // Init
    list<int> l1{1,2,3,4,6};
    // Different datatype
    list<string> l2{"hello","from","the","outside"};
    l2.push_back("to tell you I am sorry");
    // Sort function Here Instead of calling sort function from algorithm we are going to call sort function provided by the list
    l2.sort();
    // reverse list
    l2.reverse();


    // Iterate Over the list and print the data;
    for(auto it = l2.begin();it!=l2.end();it++)
    {
        cout<<*it<<"->";
    }
    cout<<endl;



    for(string s:l2){
        cout<<s<<" ";
    }
    cout<<endl;
    // Some More functions in the list
     l2.push_back("someone like you");
     // Remove a element(it removes all the occurance of a element)
     string lyr;
     cin>>lyr;
     l2.remove(lyr);
     for(auto s:l2)
     {
         cout<<s<<" ";
     }
     cout<<endl;
    // erase one or more elements
    //auto it = l2.begin()+3; this won't work since direct access operator is not allowed in list beciase the underlying memory is not linear

    it++;
    it++;
    l2.erase(it);
    // We can insert element in the list
    it = l2.begin();
    it++;
    l2.insert(it,"adele hit songs ")


}
