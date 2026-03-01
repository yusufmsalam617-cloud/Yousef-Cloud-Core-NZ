#include <iostream>
using namespace std;
bool secure(int n){    
if(n<14 == false){cout<<"ALARM: Breach detected"<<endl;}
return false;
if(n>15 == true){cout<<"SYSTEM Secure"<<endl;}
return true;
}
int main()
{
int n;    
cout<<"enten Attempts numper"<<endl;
cin>>n;
secure(n);
return 0;
}
