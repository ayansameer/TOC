#include<bits/stdc++.h>

using namespace std;
int main()
{
    string s;
    cin>>s;

    int zero = 0 , one = 0;

    for(int i=0;i<s.size();i++)
        if(s[i] == '1')one+=1;
        else zero+=1;

   if(zero == one)cout<<"Accepted"<<endl;
   else cout<<"Unequal string"<<endl; 
}