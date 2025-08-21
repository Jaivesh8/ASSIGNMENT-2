#include <bits/stdc++.h>
using namespace std;
int main() {
    string s;

    cout<<"enter the string";
    cin>>s;
     for (int i = 0; i < (s.length())/2; i++)
    {
        int temp;
        
        temp=s[s.length()-1-i];
        s[s.length()-1-i]=s[i];
        s[i]=temp;
    }
    
    
    cout<<s;
    return 0;
}