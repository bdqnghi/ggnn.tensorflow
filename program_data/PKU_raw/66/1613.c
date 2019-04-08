int main()
{
int year,month,date;
int days=0,yearleft;
cin>>year>>month>>date;
int a[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
int b[13]={0,31,29,31,30,31,30,31,31,30,31,30,31};
yearleft=year%400;
if(yearleft==0)
{
yearleft=400;
}
for(int i=1;i<yearleft;i++)
{
	if(i%400==0||(i%4==0&&i%100!=0))
		days+=2;
	else days+=1;
}


if(year%400==0||(year%4==0&&year%100!=0))
{
for(int i=1;i<month;i++)
	days+=b[i];
days+=date;
}
else
{for(int i=1;i<month;i++)
	days+=a[i];
days+=date;}
switch((days)%7)
{
case 1:cout<<"Mon."<<endl;break;
case 2:cout<<"Tue."<<endl;break;
case 3:cout<<"Wed."<<endl;break;
case 4:cout<<"Thu."<<endl;break;
case 5:cout<<"Fri."<<endl;break;
case 6:cout<<"Sat."<<endl;break;
case 0:cout<<"Sun."<<endl;break;
};
return 0;
}
