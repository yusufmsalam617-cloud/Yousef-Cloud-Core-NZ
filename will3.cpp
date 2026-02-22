#include <iostream>
#include <iomanip>
using namespace std;
bool checkSystemStatus(bool status){
if (status == false){
cout<<"System closed for maintenance"<<endl;
}
return true;
}
double price;
double calculatePrice(long long petabytes,long long Subscriptions,double plan )
{
double price = 0;
if(Subscriptions == 1 && plan == 1){price=petabytes*2000000 ;}
if(Subscriptions == 1 && plan == 2){price=petabytes*2000000*1.7 ;}
if(Subscriptions == 2 && plan == 1){price=petabytes*3000000 ;}
if(Subscriptions == 2 && plan == 2){price=petabytes*3000000*1.7;}
return price;
}
int main()
{
bool isSystemOpen = true;
while (true){
if(checkSystemStatus(isSystemOpen) == false){return 0;}

long long petabytes;
cout<<"how much petabytes you need ?"<<endl;
cin>>petabytes;
long long Subscriptions;
cout<<"plan 1 (standar) petabyte = 2000000$"<<endl;
cout<<"plan 2 (vip) {Technical support (24/7) & Uptime Guarantee} petabyte = 3000000$ "<<endl;
cin>>Subscriptions;
double plan;
cout<<"plan 1: single Availability Zone (single AZ)  "<<endl;
cout<<"plan 2:Dual Availability Zones(Dual AZ) cost=total price * 1.7"<<endl;
cin>>plan;
double Totalprice = calculatePrice(petabytes,Subscriptions,plan);
long long Bonus;
Bonus=(petabytes/20)*2;
cout<<"final price $: " <<fixed <<setprecision(0) <<Totalprice <<endl;
cout<<"Bonus Storage: "<<Bonus <<endl;
cout<<"Total Storage: "<<petabytes+Bonus<<endl;
}
return 0;
}