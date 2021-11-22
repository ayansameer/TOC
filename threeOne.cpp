#include <bits/stdc++.h>
using namespace std;

int main ()
{
  string bin;
  cout<<endl;
  cout << "\tDesign A Program For Creating Machine That Accepts Three Consecutive Ones\n";
  cout<<"Enter Any Binary Number : ";
  cin>> bin;
  int size = bin.size ();
  for(int i=0;i<size-2;i++){
    if(bin[i]=='1' && bin[i+1] == '1' && bin[i+2]=='1'){
      cout<< "Accepted"<<endl;
      return 0;
    }
  }
  cout<<"Not Accepted"<<endl;
  return 0;
}