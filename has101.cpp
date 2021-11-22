#include <bits/stdc++.h>

using namespace std;
int has101(string s)
{
    for(int i=0;i<s.size()-2;i++){
        if(s[i]=='1' && s[i+1]=='0' && s[i+2] == '1')
            return 1;
    }
    return -1;
}
int main()
{
    
    string s;
    cout<<"Enter The String You Want To Check : ";
    cin>>s;
    if(has101(s) != -1)cout<<"True"<<endl;
    else cout<<"False"<<endl;
    return 0;
}