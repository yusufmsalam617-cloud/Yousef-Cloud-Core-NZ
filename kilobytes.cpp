#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
int kilobytes;
cout<<"enter kilobytes num: "<<endl;
cin>>kilobytes;
int megabytes=kilobytes*1024;
cout<<"your kilobytes is  " <<fixed <<setprecision <<megabytes<<"  megabytes  "<<endl;
int Gigabytes=megabytes*1024;
cout<<"your kilobytes is  " <<fixed <<setprecision <<Gigabytes<<"  Gigabytes  "<<endl;
int Terabytes=Gigabytes*1024;
cout<<"your kilobytes is  " <<fixed <<setprecision <<Terabytes<<"  Terabytes  "<<endl;
return 0;
}