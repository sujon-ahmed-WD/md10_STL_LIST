#include<bits/stdc++.h>
using namespace std;
int main()
{
    list<int> l={10,20,30,40};
    cout<<l.back()<<endl;
    cout<<*l.begin()<<endl;
    cout<<l.front()<<endl;
    cout<<*next(l.begin(),3);
    return 0;
}