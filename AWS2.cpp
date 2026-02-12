#include <iostream>
using namespace std;
int main()
{
int terapyts;
cout<<"please how much teraoyts you need ";
cin>> terapyts;
int plan;
cout<<"option 12$ of one terabyte for one month"<<endl;
cout<<"option 4$ of one terabyte for one year"<<endl;
cin>>plan;
double Totalprice;
if(plan == 1){Totalprice=terapyts*12;}
if (plan == 2) {Totalprice=terapyts*4;}
if (Totalprice>10000){Totalprice=Totalprice*0.95;}
cout<<"your chek>10000 you get dis 5%";
cout<<"The Totalprice for your cloud plan is: " <<Totalprice <<endl;
cin. ignore( 1000, './n');
cin . get ();
return 0;
}

