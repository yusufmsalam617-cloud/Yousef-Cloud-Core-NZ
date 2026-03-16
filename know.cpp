#include <iostream>
#include <string>
struct cloudServer{
std::string name;
int Ram;
double price;
};
int main()
{
cloudServer myfirstserver;
std::cout<<"enter serverv name "<<std::endl;
std::cin>>myfirstserver.name;
std::cout<<"enter RAM size (GB)"<<std::endl;
std::cin>>myfirstserver.Ram;
std::cout<<"Enter monthly price($)"<<std::endl;
std::cin>>myfirstserver.price;
std::cout<<"Server details:"<<std::endl<<myfirstserver.name;
std::cout<<"RAM"<<std::endl<<myfirstserver.Ram;
std::cout<<"price"<<std::endl<<myfirstserver.price;
double broPrice=myfirstserver.price*12;
std::cout<<"pric in one year"<<std::endl<<broPrice;
return 0;
}
