#include <iostream>
#include <iomanip>
#include<fstream>
using namespace std;
struct CloudClient{
string name ;
double serverCount ;
double totalCost;}; 
double   calculateTotal(int d , int t , int l , int n) {
    double bas1ePrice = 0;
if(t == 1){bas1ePrice = 60000; }
else if(t == 2) {bas1ePrice = 100000; }
if(l == 2){bas1ePrice = bas1ePrice*1.60; }
if(d == 2){bas1ePrice = bas1ePrice*1.15; }

return bas1ePrice*n;
}
int main() 
{    
int serverFreeSpace;
    ofstream clientFile;
clientFile.open("NZ_Clients.txt ", ios::app);
 CloudClient client1;
 while (true){
cout<<"Welcome to the NE Zealand Cloud core infrastructure."
    <<"Current Market Rate:$60000/per Full Dedicated Server."<<endl;
 int locationChoice;
 int ServiceChoice;
 cout<<"**{SYSTEM}:InitializationComplete. "
     <<"please enter Client / Company Identification Name:**"<<endl;
cin>>client1.name;
cout<<"**{PROMO}:infrastructure Scale-Up Offer:"
    <<"-Get FREE Server ffor every 10 Servers deployed.**";
cout<<"**{STORAGE}:Enter Required Capacity(SERVER)**"<<endl;
cin>>client1.serverCount;
cout<<"{LOCATION SERVICE}"
    <<"---[1] (Normal) :Single Data Center(Standar Security)---"
    <<"---[2] (VIP) :Dual-Region Replication(+60% Surcharge-High Security)---"<<endl;
cin>>locationChoice;    
cout<<"{SERVICE LEVEL}:"
    <<"---[1] (Normal) : Scheduled Maintenance---"
    <<"---[2] (VIP) :24/7 Non-Stop Operations(+15% Surcharg-Zero Downtime)---"<<endl;
cout<<ServiceChoice;
int totalServers=client1.serverCount;    
int bouns=(totalServers/10);
int allServer=bouns+totalServers;






 }
 return 0;
}