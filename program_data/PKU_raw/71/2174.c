int y(int year)
{
	if(((year%4==0)&&(year%100!=0))||((year%400==0)&&(year%100==0)))
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
int main()
{
	int a[12]={3,0,3,2,3,2,3,3,2,3,2,3};
	int day;
	int i,j=0;
	int time;
	int year,m1,m2;
	scanf("%d",&time);
	for(;time>0;time--)
	{
		scanf("%d %d %d",&year,&m1,&m2);
		a[1]=y(year);
		if(m1>m2)
		{
			day=m1;
			m1=m2;
			m2=day;
		}
		day=0;
		for(i=m1;i<m2;i++)
		{
			day+=a[i-1];
		}
		if(day%7==0)
		{
			printf("YES\n");
		}
		else
		{
			printf("NO\n");
		}
		j++;
	}
}
