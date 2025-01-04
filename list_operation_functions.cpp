#include<bits/stdc++.h>
using namespace std;
int main()
{
    list<int> l={10,10,20,20,40,50 ,30,30};
    // l.remove(10);
    // l.sort(greater<int>());
    // l.sort(less<int>());
    // l.unique();
    l.reverse();
    for(int val: l)
    {
        cout<<val<<" ";
    }
    return 0;
}