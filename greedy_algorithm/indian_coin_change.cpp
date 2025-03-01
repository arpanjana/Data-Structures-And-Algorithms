#include <iostream>
#include <algorithm>
using namespace std;

int make_change(int money,int coins[],int t)
{
    int ans = 0;
    while(money>0)
    {
        int idx = upper_bound(coins,coins+t,money)-1-coins;
        cout<<coins[idx]<<"+";
        money = money-coins[idx];
        ans++;
    }
    cout<<"\n";
    return ans;
}


int main() {
    int n;
    cin>>n;
    int coins[] = {1,2,5,10,20,50,100,200,500,2000};
    int t = sizeof(coins)/sizeof(int);
    cout<<make_change(n,coins,t);
    return 0;
}
