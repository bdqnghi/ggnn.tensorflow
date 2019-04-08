/*
 * fuck.cpp
 *
 *  Created on: 2011-12-16
 *      Author: guan hong wei
 */
struct locations//????,????
{
int x;
int y;
int z;
}locations[100];
struct distances//?????????
{
int i;
int j;
double distance;
}distances[100];
struct distances m;
int main()
{
int n,i,j,t=0;
cin>>n;//?????
for(i=0;i<n;i++)
{
cin>>locations[i].x>>locations[i].y>>locations[i].z;//??????
}
for(i=0;i<n;i++)
{
for(j=i+1;j<n;j++)
{
distances[t].i=i;
distances[t].j=j;
distances[t].distance=sqrt((double)(pow(locations[i].x-locations[j].x,2.0)+pow(locations[i].y-locations[j].y,2.0)+pow(locations[i].z-locations[j].z,2.0)));//????
t++;
}
}
for(i=0;i<t;i++)//???????????
{
for(j=t-1;j>i;j--)
{
if(distances[j].distance>distances[j-1].distance)
{
m=distances[j];
distances[j]=distances[j-1];
distances[j-1]=m;
}
}
}
for(i=0;i<t;i++)
{
cout<<'('<<locations[distances[i].i].x<<','<<locations[distances[i].i].y<<','<<locations[distances[i].i].z<<')'<<'-'<<'('<<locations[distances[i].j].x<<','<<locations[distances[i].j].y<<','<<locations[distances[i].j].z<<")="<<fixed<<setprecision(2)<<distances[i].distance<<endl;
}
return 0;
}
