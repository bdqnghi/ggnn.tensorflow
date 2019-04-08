int main ()
{
	int days[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
	long year;
	int mon,day;
	scanf ("%ld%d%d",&year,&mon,&day);
	year=year%2800;
	long x=0;
	int i;
	if (year==1)x=0;
	if (year>1)
	{
		for (i=1;i<year;i++)
		{
			if ((i%400==0)||((i%4==0)&&(i%100!=0)))x+=366;
			else x+=365;
		}
	}
	if (year==0)
	{
		x=2800*365+700-21-366;
	}
	for (i=1;i<mon;i++)
	{
		x+=days[i];
		if (((year%400==0)||((year%4==0)&&(year%100!=0)))&&(i==2))x++;
	}
	x+=day;
	switch (x%7)
	{
	 case 0:printf("Sun.");break;
	 case 1:printf("Mon.");break;
	 case 2:printf("Tue.");break;
	 case 3:printf("Wed.");break;
	 case 4:printf("Thu.");break;
	 case 5:printf("Fri.");break;
	 case 6:printf("Sat.");break;
	}
	return 0;
}
		 
		 
		 