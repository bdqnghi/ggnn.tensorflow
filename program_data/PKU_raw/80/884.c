int main()
{
	int y1,y2,m1,m2,d1,d2,day1=0,day2=0,i,j;
	int m[13]={0,31,0,31,30,31,30,31,31,30,31,30,31};
	cin>>y1>>m1>>d1;
	cin>>y2>>m2>>d2;
    for(i=y1;i<y2;i++)
	{
		if((i%4==0&&i%100!= 0)||(i%400==0))
			day2=day2+366;
		else day2=day2+365;
	}
	if((y2%4==0&&y2%100!= 0)||(y2%400==0))
	{
		for(i=1;i<m2;i++)
		{
			if(i==2)
				day2=day2+29;
			else
				day2=day2+m[i];
		}
		day2=day2+d2;
	}
	else 
	{
		for(i=1;i<m2;i++)
		{
			if(i==2)
				day2=day2+28;
			else
				day2=day2+m[i];
		}
		day2=day2+d2;
	}
	if((y1%4==0&&y1%100!=0)||(y1%400==0))
	{
		for(i=1;i<m1;i++)
		{
			if(i==2)
				day1=day1+29;
			else day1=day1+m[i];
		}
		day1=day1+d1;
	}
	else 
	{
		for(i=1;i<m1;i++)
		{
			if(i==2)
				day1=day1+28;
			else day1=day1+m[i];
		}
		day1=day1+d1;
	}
	cout<<day2-day1<<endl;
		return 0;
}
