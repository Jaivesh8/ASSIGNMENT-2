#include <bits/stdc++.h>
using namespace std;

int main() {
    char ch;
    cout<<"enter character";
    cin>>ch;
    if(ch>='A' && ch<='Z'){
        ch=ch+32;
        cout<<"this is character in lowercase "<<ch;
    }
    else {
        cout<<"character is not uppercase";
    }
    
    
    return 0;
}