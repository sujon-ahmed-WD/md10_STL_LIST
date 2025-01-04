#include <bits/stdc++.h>
using namespace std;
int main()
{
    list<int> l = {10, 20, 30,20,50,20};
   
    // list<int> l2;
    // l2 = l;
    // l2.assign(l.begin(),l.end());
    // l.push_back(40); // insert in tail and head
    // l.push_front(100);

    // l.pop_back(); //delete in tail and head operation ....
    // l.pop_front();
    // l.insert(next(l.begin(),1),l2.begin(),l2.end()); insert in anny position
    // l.erase(next(l.begin(),1),next(l.begin(),5)); // sov muca faler kaj kora ..
    //  replace(l.begin(),l.end(),20,100);// poriboton kora kaj kora ..
    // cout<<*next(l.begin(),2);
    auto it=find(l.begin(),l.end(),50);
    
    if(it==l.end())
    {
        cout<<"Not_Found"<<endl;
    }
    else
    {
        cout<<"Found"<<endl;
    }
    for (int val : l)
    {
        cout << val << "  ";
    }
    return 0;
}