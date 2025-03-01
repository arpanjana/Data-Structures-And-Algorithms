#include <iostream>
using namespace std;
/*
    Pair is a container that actually helps us to bind two values as a single entity.
 */


int main() {
    pair<int,char> p;
    p.first = 10;
    p.second = 'b';

    // Another way
    pair<int,char> p2(p);
    cout<<p2.first<<"\n";
    cout<<p2.second<<"\n";

    pair<int,string> p3 = make_pair(100,"Audi");
    cout<<p3.first<<" "<<p3.second<<"\n";

    // Take input
    int a,b;
    cin>>a>>b;
    pair<int,int> p4 = make_pair(a,b);
    // Array of Pairs
    // Vector of Pairs
    pair<pair<int,int>,string> car;
    car.second = "Audi";
    car.first.first = 10;
    car.first.second = 20;
    cout<<car.first.first<<"\n";
    cout<<car.second<<"\n";

    return 0;
}
