#include <iostream>
#include <cmath>
using namespace std;
int main()
{
int a,b;
cin>>a>>b;
if (a==0){
cout<<"Inf";
}
else if(b%a==0) {
cout<<b/a*(-1); 
}
else {
cout<<"no"
}





return 0;
}