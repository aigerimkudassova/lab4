#include <iostream>
#include <cmath>
using namespace std;
int main()
{
double a,b,c,x1,x2;
cin>>a>>b>>c;
x1=b*(-1)+(sqrt(b*b-4*a*c))/2*a;
x2=b*(-1)-(sqrt(b*b-4*a*c))/2*a;
cout<<x1<<" "<<x2;

system("pause>nul");
return 0;
}