#include <iostream>
#include <cmath>
using namespace std;
int main()
{
int k,m,n;
cin>>k>>m>>n;
if(n%k==0) {
cout<<(n/k)*m*2;
}
else {
cout<<((n/k)+1)*m*2;
}



system("pause>nul");
return 0;
}