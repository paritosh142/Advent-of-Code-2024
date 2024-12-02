#include <iostream>
#include <vector>
#include <bits/stdc++.h>

using namespace std; 

int main()
{
    vector<int>list1 , list2;
    
    int n ; 
    cin>> n ; 
    for(int i  = 0;  i< n ; i++)
    {
        int a , b; 
        cin>>a>>b;
        
        list1.push_back(a); 
        list2.push_back(b);
        
    }
    
    sort(list1.begin(), list1.end()); 
    sort(list2.begin(), list2.end());
    
    
    int final = 0; 
    
    for(int i = 0 ; i <  n ; i++)
    {
        int x  = abs(list1[i] -list2[i]);
        final += x;
        
    }

    cout<<final<<endl;
    return 0;
}