#include <iostream>
#include<string>
using namespace std;
int main()
{
string companyname;
cout<<"please enter your name company";
getline(cin , companyname);
long long startupcapital;
cout<<"enter your startupcapetal:";
cin>>startupcapital;
double montheexpenses;
cout<<"enter your montheexpenses";
cin>>montheexpenses;
double remainignbalance;
remainignbalance= startupcapital -(montheexpenses*12);
cout<<"after one year your remainingbalancein NZ is:"<< remainignbalance*1.2 <<endl;
return 0;
}