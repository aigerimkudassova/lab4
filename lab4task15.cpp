#include <iostream>
#include <cmath>
using namespace std;
int main()
{
double a,b,c;
cin>>a>>b>>c;
if( (a+b)>c && (b+c)>a && (a+c)>b) {
cout<<"Yes";
else {
cout<<"No";
}
system("pause>nul");
return 0;
}