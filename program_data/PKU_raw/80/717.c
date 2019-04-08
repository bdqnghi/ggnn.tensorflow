int main()
{
	int startyear,startmonth,startday,endyear,endmonth,endday,n=0,year,j,t=0,d;
    int a[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
scanf("%d%d%d%d%d%d",&startyear,&startmonth,&startday,&endyear,&endmonth,&endday);
	for(year=startyear;year<=endyear;year++)
		if((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
			n++;
	year=startyear;
	if((year % 4 == 0 && year % 100 != 0)|| (year % 400 == 0))
		if(startmonth>2)
		n--;
	year=endyear;
	if((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
		if((endmonth<2)||((endmonth==2)&&(endday<29)))
		n--;
	if(n<0)
		n=0;
	for(j=1;j<=12;j++)
	{if(j>startmonth)
	t=t+a[j];}
	t=t+a[startmonth]-startday;
	t=t+365*(endyear-startyear-1)+n;
	for(j=1;j<=12;j++)
	{if(j<endmonth)
	t=t+a[j];}
	t=t+endday;
	printf("%d",t);
	return 0;
}