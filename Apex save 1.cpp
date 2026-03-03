#include <iostream>
#include <iomanip>
#include <fstream>
using namespace std;
struct CloudRecord{
string customerName;
int totalServers;
int bonus;
double priceWitheTax;
};
bool isSYstemOperational=true;
double calculateTotal(int d , int t , int l , int n){
double bas1ePrice = 0;
if(t == 1){bas1ePrice = 60000; }
else if(t == 2) {bas1ePrice = 100000; }
if(l == 2){bas1ePrice = bas1ePrice*1.20; }
if(d == 2){bas1ePrice = bas1ePrice*0.85; }
return bas1ePrice*n;
}
    int main()
{
ofstream clientFile;
clientFile.open("NZ_Clients.txt ", ios::app);
CloudRecord client1;

 while (isSYstemOperational)
 {
if(isSYstemOperational == false){
cout<<"We apologize for the temporary interruption. "
    <<"Our global infrastructure is currently undergoing strategic optimization to enhance "
    <<"your data sovereignty in New Zealand. "
    <<"Please commence your operations later " <<endl;
return 0;}
cout<<"SYstem initialization complete. "
    <<"Welcome to the New Zealand Strategic Cloud Core. " <<endl;
    cout <<"Special Offer: "
    <<"For every 15 dedicated units ,get 1 compiementary server for free"<<endl;
cout<<"please enter the legal name of your enterprise. " <<endl;
 getline(cin>> ws, client1. customerName);
cout<<"Please enter the number of servers you wish to deploy: "<<endl;
cin>>client1. totalServers;
cout<<"Each dedicated server unit in our infrastructure provides "
    <<"a robust capacity of 50 TB. "
    <<"Fragmentation is strictly prohibited to ensure "
    <<"maximum data sovereingty. " <<endl;
cout<<"Option 1: Monthly Subscription"
    <<"Ideal for flexible scaling with no long-term commitment."<<endl;
cout<<"Option 2: Annual Subscription "
    <<"Secure your dedicated unit for 12 months and receive a 15% strategic discount. "<<endl;
int durationChoice;
cout<<"Enter your choice(1 or 2): " <<endl;
cin>>durationChoice;
cout<<"Tier 1: Normal Server "
    <<"(60,000$) per month. "
    <<"Includes a dedicated 50TB unit with standard security. "<<endl;
cout<<"Tier 2: VIP Server"
    <<"(100,000$) per month."
    <<"Includes 24/7 elite support and advanced encryption. "<<endl;
int tierChoice;
cout<<"Enter your choice(1 or 2) "<<endl;
cin>>tierChoice;
cout<<"Option 1: Single location Deployment"
    <<"Your dedicated 50TB unit is hosted in our primary Auckland data center. " <<endl;
cout<<"Option 2: Dual Location Redundancy "
    <<"Real-time data mirroring between Auckland and Wellington for Maximum "
    <<"disaster recovery. " <<endl;
int locationChoice;
cout<<"enter your choice (1 or 2).  " <<endl;
cin>>locationChoice;
double finalPrice =calculateTotal(durationChoice , tierChoice , locationChoice , client1. totalServers);
double taxValue = finalPrice*0.15;
double grandTotal = finalPrice+taxValue;
client1. bonus = client1. totalServers/15;
int finalUnits = client1.totalServers+client1.bonus;
clientFile <<fixed <<setprecision(2) << client1.customerName <<"| units:  "<<finalUnits<< " | Total: $"<<grandTotal <<endl;
cout<<"EnterPrise Name: "<<client1.customerName <<endl;
cout<<"servers number: "<<client1.totalServers <<endl;
cout<<"you got bouns"<<client1.bonus <<endl;
cout<<"Total Server is: "<<finalUnits<<endl;
cout<<"Grand Total Price is: $ "<<fixed <<setprecision(2) <<grandTotal <<endl;
cout<<"Strategic Tax (GST 15%): $ " <<fixed <<setprecision(2) <<taxValue <<endl;
cout<<"Continue using the system? (1 for yes / 0 for no) " <<endl;
cin>>isSYstemOperational;
}
clientFile.close();
return 0;
}