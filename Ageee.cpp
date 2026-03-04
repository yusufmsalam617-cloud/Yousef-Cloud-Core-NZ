//const        float        auto       
/*
#include <iostream>
using namespace std;
int main()
{
int Age;
cout<<"enter your age "<<endl;
cin>>Age;
int Age_in_days=Age*365;
cout<<"your age in days is: " <<Age_in_days <<endl;
int Age_in_hours=Age_in_days*24;
cout<<"your in hours is: "<<Age_in_hours <<endl;
return 0;
}
*/






#include <iostream>
using namespace std;
int main()
{
int kilobytes;
cout<<"enter kilobytes num: "<<endl;
cin>>kilobytes;
int megabytes=kilobytes*1024;
cout<<"your kilobytes is  "<<megabytes<<"  megabytes  "<<endl;
int Gigabytes=megabytes*1024;
cout<<"your kilobytes is  "<<Gigabytes<<"  Gigabytes  "<<endl;
int Terabytes=Gigabytes*1024;
cout<<"your kilobytes is  "<<Terabytes<<"  Terabytes  "<<endl;
return 0;
}