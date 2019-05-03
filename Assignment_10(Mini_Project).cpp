#include<iostream>
#include<string>
#include<graphics.h>
#include<math.h>

using namespace std;


#define max 30
int parent[max];
struct edgelist
  {
    int u,v;
  }edge_arr[max];

struct city
{
  string city_name;
  int len;
  int x,y;
}name_arr[max];

int mindist(float dist[],bool visit[],int n)
{
  float mini=32767;
  int minindex;
  for(int i=0;i<n;i++)
  {
    if(visit[i]==false && dist[i]<=mini)
    {
      mini=dist[i];
      minindex=i;
    }
  }
  return minindex;
}

void dijsktras(float arr[][max],int s,int d,int n)
{

  float dist[n];
  bool visit[n];


for(int i=0;i<n;i++)
{
  dist[i]=32767;
  visit[i]=false;
  parent[i]=0;
}

int temp[max];

float prev_dis_d=32767;

dist[s]=0;
int u=0;
for(int j=0;j<n-1;j++)
{
  u=mindist(dist,visit,n);
  visit[u]=true;

  for(int v=0;v<n;v++)
  {
    if(!visit[v] && arr[u][v] && dist[u]!=32767 && dist[u]+arr[u][v]<dist[v])
    {
      dist[v]= dist[u]+arr[u][v];
      parent[v]=u;
    }
  }
}

cout<<"Minimum Distance from "<<name_arr[s].city_name<<" to "<<name_arr[d].city_name<<" is "<<dist[d]<<" .\n";
}


int find_index(string city_curr,int n,int len)
{

int count=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<len;j++)
        {

      if(name_arr[i].city_name[j] == city_curr [j])
      {
          count++;
      }
    }
    if(count==len)
    {
        cout<<i;
        return i;
    }
    }
}

int main()
{

 int gd , gm;
 gd = DETECT;
 initgraph(&gd,&gm,NULL);

  int n;
  cout<<"Enter the no. of cities in map:";
  cin>>n;
  int src;
  float arr[max][max];

  for(int i=0;i<n;i++)
  {
      for(int j=0;j<n;j++)
      {
          arr[i][j]=0;
      }
  }

  cout<<"\nEnter the city names and there co-ordinates:\n";
  for(int i=0;i<n;i++)
  {
      cout<<"\nName: ";
      cin>>name_arr[i].city_name;
      name_arr[i].len=name_arr[i].city_name.length();
      cout<<"\nx:";
      cin>>name_arr[i].x;
      cout<<"\ny:";
      cin>>name_arr[i].y;
  }
  cout<<endl<<endl;
  cout<<"These are the cities entered:\n";
  for(int i=0;i<n;i++)
  {
      cout<<i<<": "<<name_arr[i].city_name<<endl;
  }

  int e;
  cout<<"\nEnter total number of paths: ";
  cin>>e;
  cout<<endl;
  int j=0;

  int a,b;
  string city1,city2;
  int x1,y1,x2,y2;
  int len1,len2;

  float distance;
  while(j<e)
  {
      cout<<"Enter the two cities which has path in between them :\n";
      cin>>city1;
      len1=city1.length();
      a=find_index(city1,n,len1);
      edge_arr[j].u=a;
      x1=name_arr[a].x;
      y1=name_arr[a].y;
      cin>>city2;
      len2=city2.length();
      b=find_index(city2,n,len2);
      edge_arr[j].v=b;
      x2=name_arr[b].x;
      y2=name_arr[b].y;
      cout<<"\nDistance between them is: ";
      distance=sqrt(((x2-x1)*(x2-x1))+((y2-y1)*(y2-y1)));
      cout<<distance;
      cout<<endl;
      arr[a][b]=arr[b][a]=distance;
      line(x1,y1,x2,y2);
      j++;
  }

cout<<"\nAdjacency Matrix is:\n";;

  for(int i=0;i<n;i++)
  {
   for(int j=0;j<n;j++)
   {
       cout<<arr[i][j]<<"\t";
   }
   cout<<endl;
  }
  int src_index,src_len;
  int des_index,des_len;

  int k[max];

  string src_city,des_city;
  cout<<"Enter source city: ";
  cin>>src_city;
  src_len=src_city.length();
  src_index=find_index(src_city,n,src_len);
  cout<<"Enter Destination city: ";
  cin>>des_city;
  des_len=des_city.length();
  des_index=find_index(des_city,n,des_len);

  int p;
  dijsktras(arr,src_index,des_index,n);
  cout<<des_index;
  p=des_index;
  k[0]=des_index;
 int m=1;
  while(p!=0)
  {


      p=parent[p];
      k[m]=p;
      //cout<<"-->"<<p;
      m++;
  }



  for(int i=0;i<m-1;i++)
  {
   edge_arr[i].u=k[i];
   edge_arr[i].v=k[i+1];
  }

  cout<<endl;
  cout<<endl;

/*  for(int i=0;i<m-1;i++)
  {

      cout<<k[i]<<"\t";
    cout<<"u: "<<edge_arr[i].u<<" v:"<<edge_arr[i].v<<endl;
  }
cout<<endl;*/

setcolor(RED);
for(int i=0;i<m-1;i++)
{
 line(name_arr[edge_arr[i].u].x,name_arr[edge_arr[i].u].y,name_arr[edge_arr[i].v].x,name_arr[edge_arr[i].v].y);
}
cout<<"Displaying Your Path With Red Color\n"<<endl;

char ch;
cout<<"\nEnter n to exit";
cin>>ch;
if(ch=='n')
{
  return 0;
}

}
