#include <iostream>
#include <iomanip>
using namespace std;
bool checkSestemstatus(bool status){
if(status == false){cout<<"sestem cloce for maintenance";}
return true;
}
double price;
double calculateprice(long long petabytes, long long subscription,double plan)
{
double price = 0;
if(subscription == 1 && plan == 1){price=petabytes*2000000;} 
if(subscription == 1 && plan == 2){price=petabytes*2000000*1.7;}
if(subscription == 2 && plan == 1){price=petabytes*3000000;}
if(subscription == 1 && plan == 2){price=petabytes*3000000*1.7;}
return price;
}
int main()
{
bool isSestemIsOpen = true;
while (true)
{
if (checkSestemstatus(isSestemIsOpen) == false){return 0;}
long long petabytes;
cout<<"how much you need petabytes?";
cin>>petabytes;
long long subscription;
cout<<"plan 1 (standar) petabyte = 2000000$"<<endl;
cout<<"plan 2 (vip) {Technical support (24/7) & Uptime Guarantee} petabyte = 3000000$"<<endl;
cin>>subscription;
double plan;
cout<<"plan 1: single Availability Zone (single AZ)"<<endl;
cout<<"plan 2:Dual Availability Zones(Dual AZ) cost=total price * 1.7"<<endl;
cin>>plan;
double totalprice=calculateprice( petabytes, subscription, plan);
long long bouns;
bouns=(petabytes/20)*2;
cout<<"final price$: "<<fixed<<setprecision(0)<<totalprice<<endl;
cout<<"bouns storage"<<bouns<<endl;
cout<<"total storage"<<petabytes+bouns<<endl;
}
return 0;
}