#include <iostream>

using namespace std;
bool isDivisible(int num){
    return num%2 == 0;
}
int main()
{
    cout<<"Design A Program For Accepting Decimal Number Divisible By 2. "<<endl;
    int num;
    cout<<"Enter The Number You Want To Check : ";
    cin>>num;
    
    if(isDivisible(num))cout<<"True"<<endl;
    else cout<<"False"<<endl;
    return 0;
}