int runnian(int n)
{
	if(n%4==0&&n%100!=0)
		return 1;
	else if(n%400==0)
		return 1;
	else
		return 0;
}
int tianshu(int y,int m,int d)
{
	int i,days=0;
	if(runnian(y))
	{
		int md[]={0,31,29,31,30,31,30,31,31,30,31,30,31};
		for(i=0;i<m;i++)
			days+=md[i];
	}
	else
	{
		int md[]={0,31,28,31,30,31,30,31,31,30,31,30,31};
		for(i=0;i<m;i++)
			days+=md[i];
	}
	days+=d;
	return days;
}
int daysbetweendate(int y1,int m1,int d1,int y2,int m2,int d2)
{
	int i,day=0;
	for (i=y1;i<y2;i++)
	{
		if((i%4==0&&i%100!=0)||i%400==0)
			day+=366;
		else day+=365;
	}
	day=day-tianshu(y1,m1,d1)+tianshu(y2,m2,d2);
	return day;
}
int main()
{
	int y1,m1,d1,y2,m2,d2;
	scanf("%d%d%d%d%d%d",&y1,&m1,&d1,&y2,&m2,&d2);
	printf("%d",daysbetweendate(y1,m1,d1,y2,m2,d2));
	return 0;
}