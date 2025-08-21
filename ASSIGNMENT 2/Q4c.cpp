#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cout << "Enter a string: ";
    getline(cin,s);
    string res="aeiouAEIOU";
    
    for (int i = 0; i < s.length(); i++)
    {
        for (int j = 0; j < res.length(); j++)
        {
            if(s[i]==res[j]){
                for (int k = 0; k+i+1 < s.length(); k++)
                {
                    s[i+k]=s[i+1+k];
                }
                s.pop_back();
                i--;
                
                
               
            }
        }
        

    }
    cout<<"new string is "<<s;
    
    return 0;
}