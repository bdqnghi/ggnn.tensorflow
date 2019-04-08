int main()
{int i,j=1,startyear,endyear,startmonth,endmonth,startday,endday;
int dou=0;
long days,p;
int	a[13]={0,31,28,31,30,31,30,31,31,30,31,30,31},b[1000]={0};
cin>>startyear>>startmonth>>startday>>endyear>>endmonth>>endday;
for(i=1;i<=3000;i++)
	if((i%4==0&&i%100!=0)||i%400==0)
		{b[j]=i;/*????(year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)? 
???2???29?*/
		j++;
		}
for(i=1;i<j;i++){
	if(startyear<b[i]&&b[i]<endyear)
		dou=dou+1;
	if(startyear==b[i]&&startmonth<=2)
		dou=dou+1;
	if(endyear==b[i]&&endmonth>=3)
			dou=dou+1;}
p=endyear-startyear;
days=p*365;
if(startmonth<endmonth)
	for(i=startmonth;i<endmonth;i++)
		days=days+a[i];
if(startmonth>endmonth)
	{for(i=startmonth;i<=12;i++)
		days=days+a[i];
	for(i=1;i<endmonth;i++)
			days=days+a[i];
	days=days-365;}
days=days+dou+endday-startday;
cout<<days<<endl;//???????????????

return 0;
}