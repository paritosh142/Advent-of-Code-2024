#include <iostream>
#include <vector>
#include<unordered_map>

using namespace std;

int main(){

    vector<int> l1, l2; 
    
    int n ; 
    cin>>n ; 
    
    for(int i = 0 ; i  < n ; i++)
    {
        int a , b ; 
        cin>>a>>b; 
        
        l1.push_back(a);
        l2.push_back(b);
    }
    
    unordered_map<int , int> mp ; 
    
    for(auto i : l2)
    {
        mp[i]++;
    }
        
    vector<int> l1_mp;
    for (auto i : l1) {
        l1_mp.push_back(mp[i]); 
    }
    
    int final = 0 ; 
    for(int i = 0  ;  i < n ; i++)
    {
        final +=l1[i] * l1_mp[i];
    }

    cout << final <<endl;
    
    return 0;
}