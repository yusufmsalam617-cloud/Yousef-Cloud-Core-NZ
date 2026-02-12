#include<iostream>
using namespace std;
int main()
{
int gigabayts;
cout<<"how much gigabytes you need";
cin>>gigabayts;
int plan;
cout<<"Basic Plan (2$ per GB)"<<endl;
cout<<"Premium Plan (5$ per GB)"<<endl;
cout<<" chois your plan";
cin>>plan;
double totalPrice;
if(plan == 1) {totalPrice= gigabayts*2;}
if(plan == 2) {totalPrice=gigabayts*5;}
cout<<"The Total Price for your cloud plan is:" <<totalPrice <<endl;
cin. ignore(1000, '\n');
cin .get();
return 0;
}