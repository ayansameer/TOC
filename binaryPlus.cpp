#include <bits/stdc++.h>
using namespace std;
 
int main()
{
	long bn0,bn1=1;
	int i=0, r=0;
	int sum[20];
	cout << " Enter the number in Binary: ";
	cin>> bn0;
	
  while (bn0 != 0 || bn1 != 0) 
  {
   sum[i++] = (int)((bn0 % 10 + bn1 % 10 + r) % 2);
   r = (int)((bn0 % 10 + bn1 % 10 + r) / 2);
   bn0 = bn0 / 10;
   bn1 = bn1 / 10;
  }
  if (r != 0) 
  {
   sum[i++] = r;
  }
  --i;
  cout<<" After Increment : ";
  while (i >= 0) 
  {
   cout<<(sum[i--]);
  }
   cout<<("\n");  
return 0;
}  