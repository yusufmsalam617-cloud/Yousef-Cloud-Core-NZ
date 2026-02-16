#include <iostream>
#include<iomanip>
using namespace std;
int main()
{
cout<<"welcome"<<endl;
int Exabytes;
cout<<"how much Exabytes you need"<<endl;
cin>>Exabytes;
int plan;
cout<<" {type1} one server(0.5 EB) 2000000 (one hour)"<<endl;
cout<<"{type2} one server(1.5 EB) 5000000(one hour)"<<endl;
cin>>plan;
double totalprice;
if(plan == 1){totalprice=Exabytes*2000000*720;}//*720(hour in month)
if(plan == 2){totalprice=Exabytes*5000000*720;}
if(totalprice>100000000){totalprice=totalprice*0.9;}
cout<<"if your check>100000000 you get dis 10%"<<endl;
cout<<fixed<<setprecision(2);
cout<<"total price for your cloud plan is: "<<totalprice <<endl;
cin.ignore(1000,'./n');
cin.get();
return 0;
}