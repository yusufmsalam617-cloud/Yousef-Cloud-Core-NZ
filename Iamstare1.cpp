#include <iostream>
#include <string>

using namespace std;
int main()
{
string companyName;    
cout<<"please eanter your cloud company name";
getline(cin, companyName);
long long startupCapital;
cout<<"enter the Initial Startup Capital($):" ;
cin>>startupCapital;
double monthlyExpenses;
cout<<"Enter monthlyExpenses($):";
cin>>monthlyExpenses;
double remainingBalance ;
remainingBalance =startupCapital-(monthlyExpenses*12);
cout<<"After one Year , your remainingBalance balance in NZ is: "<<remainingBalance*1.6<<endl;
return 0;

}