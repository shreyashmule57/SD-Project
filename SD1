#include<iostream>
using namespace std;

void create(int a[])
{
cout<<"\n Enter the size of the SET";
int n;
cin>>n;
cout<<"\n Enter "<<n<<" Elements";
for(int i=1;i<=n;i++)
{
cin>>a[i];
}
a[0]=n;

}

void print(int *a)
{

int n=a[0];
for(int i=1;i<=n;i++)
cout<<a[i]<<" ";

}

int member(int s1[],int m)
{
int n=s1[0];
for(int i=1;i<=n;i++)
{
if(s1[i]==m)
return 1;

}
return 0;

}

void union_(int s1[],int s2[],int s3[])
{
int n=s1[0];
s3[0]=n;
for( int i=1;i<=n;i++)
s3[i]=s1[i];

n=s2[0];
for(int i=1;i<=n;i++)
{
if(!member(s3,s2[i]))
{
s3[0]++;
s3[s3[0]]=s2[i];

}


}


}
 void intersection(int s1[],int s2[],int s3[])
{
s3[0]=0;
for(int i=1;i<=s1[0];i++)
{
if(member(s2,s1[i]))
{s3[0]++;
s3[s3[0]]=s1[i];
}


}


}

void difference(int s1[],int s2[],int s3[])
{
s3[0]=0;
for(int i=1;i<=s1[0];i++)
{
if(!member(s2,s1[i]))
{
s3[0]++;
s3[s3[0]]=s1[i];
}


}



}
void insert(int s[])
{
int n=s[0];
int e;
cout<<"\n Enter the Element to be Inserted";
cin>>e;
s[n+1]=e;
s[0]=n+1;
cout<<"\n Updated: \n";
print(s);

}
void subset(int s1[],int s2[])
{

int n=s2[0];
int c=0;
for(int i=1;i<=n;i++)
{
if(member(s1,s2[i]))
c++;
}
if(c==n)
{
cout<<"\n It is A subset";
}
else
{cout<<"\n Not a Subset";
}



}
void remove(int s[])
{
int n=s[0];
int e;
cout<<"\n Enter the element to be removed";
cin>>e;
for(int i=1;i<=n;i++)
{
if(s[i]==e)
    
{
int j=i;
while(j<n)
{s[j]=s[j+1];
j++;
}
s[0]=n-1;
break;
}

}
cout<<"\n Updated : \n";
print(s);

}
void contains(int s[])
{
int n=s[0];
int e;
cout<<"\n Enter the element to be Searched";
cin>>e;
for(int i=1;i<=n;i++)
{
if(s[i]==e)
{
cout<<"\n Set Contains the Element";
break;
}

if(i>=n)
{
cout<<"\n Not Present";
break;
}
}
}
int main()
{
//int s1[20];
//int s2[20];
//create(s1);
//create(s2);
//union_(s1,s2,s3);
//intersection(s1,s2,s3);
//print(s3);
//print(s3);
//subset(s1,s2);
int c;

int s1[20];
int s2[20];
cout<<"\n Creating Set 1";
create(s1);
cout<<"\n Creating Set 2";
create(s2);
do
{
cout<<"\n ____________MENU_______________";
cout<<"\n 1.Union \n 2.Intersection  \n 3. Difference  \n 4.Subset  \n 5. Remove  \n 6.Size  \n 7.Contains  \n 8.Insert \n 9.Exit";
cout<<"\n Enter the choice";
cin>>c;


switch(c)
{
case 1:
{

int s3[20];

union_(s1,s2,s3);
cout<<"\n Union \n";
print(s3);

break;
}
case 2:
{
int s3[20];
intersection(s1,s2,s3);
cout<<"\n Intersection \n";
print(s3);

break;
}
case 3:
{
int s3[20];
difference(s1,s2,s3);
cout<<"\n Difference \n";
print(s3);

break;
}



case 4:
{

subset(s1,s2);
break;
}
case 5:
{
int c;
cout<<"\n From Which SET";
cin>>c;
if(c==1)
{
remove(s1);
}
else
{
remove(s2);
}

break;
}
case 6:
{
cout<<"\n Size of Set 1 is"<<s1[0];

cout<<"\n Size of Set 2 is"<<s2[0];
break;
}
case 7:
{
int c;
cout<<"\n Enter Set number (1/2)";
cin>>c;
if(c==1)
{
contains(s1);
}
else
{contains(s2);
}
break;


}

case 8:
{
cout<<"\n Enter the Set number(1/2)";
int c;
cin>>c;
if(c==1)
{
insert(s1);
}
else
insert(s2);

break;


}
case 9:break;

}
}while(c!=9);
}
