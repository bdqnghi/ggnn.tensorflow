int main()
{
	int dayofpmon[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
	int y1,m1,d1,y2,m2,d2;
	cin>>y1>>m1>>d1>>y2>>m2>>d2;
	int day=0,i;
	for(i=y1;i<y2;i++)
	{
		if((i%4 == 0 && i % 100 != 0) || (i % 400 == 0))
			day=day+366;
		else
			day=day+365;
	}
	for(i=1;i<m1;i++)
	{
		if(i==2&&((y1 % 4 == 0 && y1 % 100 != 0) || (y1% 400 == 0)))
			day=day-29;
		else
			day=day-dayofpmon[i];
	}
	day=day-d1;
	for(i=1;i<m2;i++)
	{
		if(i==2&&((y2% 4 == 0 && y2% 100 != 0) || (y2% 400 == 0)))
			day=day+29;
		else
			day=day+dayofpmon[i];
	}
	day=day+d2;
	cout<<day;
	return 0;
}