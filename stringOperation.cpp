#include<bits/stdc++.h> 
using namespace std; 
int main() 
{ 
   
    string fName;
    string lName;
    
    cout<<"Enter your First Name : ";
    cin>>fName;
    cout<<"Enter your Last Name : ";
    cin>>lName;
    
     string fullName = fName + " " + lName; 
     cout<<"After Concatenation : "<<fullName<<endl;
     
     transform(fullName.begin(), fullName.end(), fullName.begin(), ::toupper); 
     cout<<"After Converting to UpperCase : " << fullName << endl; 
     
     transform(fullName.begin(), fullName.end(), fullName.begin(), ::tolower); 
     cout<<"After Converting to LowerCase : " << fullName << endl;

    cout << "Length of String : " << fullName.size()<<endl;
    
    fullName.erase(remove(fullName.begin(), fullName.end(), ' '), fullName.end());
    cout << "After White Space Removal : " << fullName;
     
     return 0; 
} 