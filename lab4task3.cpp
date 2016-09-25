#include <iostream>
#include <cmath>
using namespace std;
int main()
{
int x1,y1,x2,y2;
cin>>x1>>y1>>x2>>y2;
if (x1-y1==x2-y2)
{
cout<<"yes"<<endl;
}
else { if (x1+y1==x2+y2)
{
cout<<"yes"<<endl; }
else {
cout<<"no"; }
}
return 0;
}