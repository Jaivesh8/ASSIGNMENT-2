#include <bits/stdc++.h>
using namespace std;

int main() {
    string s1,s2;
    cout << "Enter string s1: ";
    getline(cin,s1);
    cout << "Enter string s2: ";
    getline(cin,s2);
    for (int i = 0; i < s1.length() && i<s2.length(); i++)
    {
        if(s1[i]<s2[i]){
                cout<<"s1 is smaller";
                return 0;
            }
        if(s1[i]>s2[i]){
                cout<< "s2 is smaller";
                return 0;
            }
        
            
        
    }
    if(s1.length()>s2.length()){
        cout<< "s2 is smaller";
    }
    if(s1.length()<s2.length()){
        cout<< "s1 is smaller";
    }
    if(s1.length()==s2.length()){
        cout<< "equal";
    }
    return 0;
    
}