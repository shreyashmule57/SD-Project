#include<iostream>
#include<stdlib.h>
using namespace std;
int size=10;
void display(int hash[])
{
 int i;
 cout<<"HASH TABLE:\n";
 for(i=0;i<size;i++)
 {
  cout<<""<<hash[i]<<"\t";
 }
}
int main()
{
int hash[size],val,i;
char ch;
for(i=0;i<size;i++)
{
hash[i]=-111;
}
do
{
cout<<"Enter the value\n";
cin>>val;
int m=val%size;
if(hash[m] == -111)
{
 hash[m]=val;
 display(hash);
}
else
{
 cout<<"Collision\n";
 cout<<""<<hash[m]<<"\n";
 if(hash[m]%10!=m)
 {
     int h=hash[m];
     hash[m]=val;
     val=h;
 }
 int x=1+(val%(size-1));
 for(i=1;i<size;i++)
 {
  int y=(val+i*x);
  int z=y%size;
   if(hash[z]==-111)
   {
    hash[z]=val;
    display(hash);
    break;
   }
 }
}
cout<<"\nWant to add more values?\n";
cin>>ch;
int ss=0;
for(i=0;i<size;i++)
{
 if(hash[i]!= -111)
 ss++;
}
if(ss==10)
{
 cout<<"Hast table is full\n";
 exit(1);
}
}while(ch=='y' || ch=='Y');
display(hash);
return 0;
}
