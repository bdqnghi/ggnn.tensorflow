

int main()
{  

int n=0,a,b,c,d[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
cin>>a>>b>>c;

for(int i=1;i<=(a-1)%400;++i)
{
if(i%400==0||(i%4==0&&i%100!=0))
n+=2;
else
n+=1;
}

if(a%400==0||(a%4==0&&a%100!=0))
++d[2];

for(int i=1;i<b;++i)
	n+=d[i];
n=(n+c-1)%7;
switch (n)
{
case 0:cout<<"Mon.";break;
case 1:cout<<"Tue.";break;
case 2:cout<<"Wed.";break;
case 3:cout<<"Thu.";break;
case 4:cout<<"Fri.";break;
case 5:cout<<"Sat.";break;
default:cout<<"Sun.";

}
return 0;

}

