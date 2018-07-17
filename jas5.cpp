#include<iostream>
#include<math.h>
using namespace std;
int main()
{
int i,n,a[20],sum=0,s2;
float avg,var,sd;
cout<<"enter the size of array:";
cin>>n;
cout<<"enter the array elmts";
for(i=0;i<n;i++)
{
cin>>a[0];
}

for(i=0;i<n;i++)
{
sum=sum+a[i];
}
avg=sum/n;
for(i=0;i<n;i++)
{
s2=s2+pow((a[i]-avg),2);
}
var=s2/n;
sd=sqrt(var);
cout<<"standard deviation="<<sd;
return 0;
}

