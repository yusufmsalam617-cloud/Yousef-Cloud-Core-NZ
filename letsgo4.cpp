#include <iostream>
using namespace std;
bool secure(int n){    
if(n<15 == false){cout<<"ALARM: Breach detected"<<endl;
return false;}
else{cout<<"SYSTEM Secure"<<endl; 
     return true;}
}
int main()
{
while(true){    
int n;    
cout<<"enten Attempts numper"<<endl;
cin>>n;
secure(n);
}
return 0;
}
