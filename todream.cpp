#include <iostream>
#include <iomanip>
using namespace std;
bool checkServerCapacity(double Terabyte){
return Terabyte<=1000;
}
int calculateServer(double terabyte)
{
return(terabyte+999) / 1000;
}
int main()
{
while (true){
double userSize;
cout<<"blease enter user Size"<<endl;
cin>>userSize;
if (userSize == 0)break;
int TotalServer;
TotalServer=calculateServer(userSize);
long long TotalCost;
TotalCost=(TotalServer*5000000);
cout<<"this is total server:" <<fixed <<setprecision(0) <<endl;
}
return 0;
}
