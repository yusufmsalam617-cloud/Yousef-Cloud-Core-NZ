#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
int kilobytes;
cout<<"enter kilobytes num: "<<endl;
cin>>kilobytes;
int megabytes=kilobytes*1024;
cout<<"your kilobytes is  " <<fixed <<setprecision(2) <<megabytes<<"  megabytes  "<<endl;
int Gigabytes=megabytes*1024;
cout<<"your kilobytes is  " <<fixed <<setprecision(2) <<Gigabytes<<"  Gigabytes  "<<endl;
int Terabytes=Gigabytes*1024;
cout<<"your kilobytes is  " <<fixed <<setprecision(2) <<Terabytes<<"  Terabytes  "<<endl;
return 0;
}