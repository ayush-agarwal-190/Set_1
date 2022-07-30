#include<bits/stdc++.h>
using namespace std;

int32_t main(){
    multiset<int>s;
    s.insert(1);
    s.insert(1);
    s.insert(1);
    s.insert(1);
    s.insert(2);
    s.insert(3);

    for(auto i:s)
    cout<<i<<" ";
    cout<<"\n";
    cout<<s.size()<<"\n";

    s.erase(s.find(1));
    for(auto i:s)
        cout<<i<<" ";
    cout<<"\n";

    
    s.erase(1);
    for(auto i:s)
        cout<<i<<" ";
    cout<<"\n";

} 