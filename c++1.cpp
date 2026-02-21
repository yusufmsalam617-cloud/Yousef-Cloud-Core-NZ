#include <iostream>
using namespace std;
int globalVar=100;//any think writ out int main() is global 
// name (globalVar) is not basic I can get ane name 
void testScope(){
cout<<"messag from testScope function: "<<endl;
cout<<"I can see the glopalVar: "<<globalVar<<endl;
cout<<"-----------------------"<<endl;
}
int main()
{
    testScope();
    int localVar = 50;
cout<<"messag from main fanction: "<<endl;
cout<<"I can see my localVar: " <<endl;
cout<<"I can also see the glopalVar: "<<globalVar<<endl;
cout<<"-----------------------"<<endl;
testScope();
return 0;
}   