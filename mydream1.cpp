#include <iostream>
using namespace std;
int main()
{
cout<<"welcome";
int Exabites;
cout<<"how much Exabites you need"<<endl;
cin>>Exabites;
int plan;
cout<<" {type1} one server(0.5 EB) 2000000 (one hoer)"<<endl;
cout<<"{type2} one server(1.5 EB) 5000000(one hoer)"<<endl;
cin>>plan;
double totalprice;
if(plan == 1){totalprice=Exabites*2000000;}
if(plan == 2){totalprice=Exabites*5000000;}
if(totalprice>100000000){totalprice=totalprice*0.9;}
cout<<"if your chek>100000000 you get dis 10%"<<endl;
cout<<"total price fore your cloud plan is: "<<totalprice <<endl;
cin.ignore(1000,'./n');
cin.get();
return 0;
}