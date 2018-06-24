#include <iostream>
using namespace std;
int main() {
    string s;
    char t;
    int i;
    cin>>s;
 for(i=0;s[i]!='\0';i=i+2)
    {
        t=s[i];
        s[i]=s[i+1];
        s[i+1]=t;
    cout<<s[i]<<s[i+1];
}}
