#include <iostream>
#include <cmath>
using namespace std;
int main()
{


cout<<"Enter the year"<<endl;
int a;
cin>>a;

if(a%4==0 && a%100!=0) 
{

cout<<"Yes"<<endl;
}
else if (a%400==0) 
{
cout<<"Yes";
}
else {
cout<<"No";
}

system("pause>nul");
return 0;
}