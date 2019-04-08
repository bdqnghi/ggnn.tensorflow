int main()
{
	int year1,m1,d1,year2,m2,d2,i,sum=0,sum1=0,sum2=0;
	int mm1[13]={0,31,29,31,30,31,30,31,31,30,31,30,31};
	int mm2[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
	cin>>year1>>m1>>d1;
	cin>>year2>>m2>>d2;
	for(i=year1;i<year2;i++)
	{
		if((i % 4 == 0 && i % 100 != 0) || (i % 400 == 0))
		    sum=sum+366;
		else
			sum=sum+365;
	}
    if((year1 % 4 == 0 && year1 % 100 != 0) || (year1 % 400 == 0))
	{
		for(i=1;i<m1;i++)
		{
		   sum1=sum1+mm1[i];
		}
	}
    else
	{
		for(i=1;i<m1;i++)
		{
		   sum1=sum1+mm2[i];
		}
	}
	sum1=sum1+d1;
    if((year2 % 4 == 0 && year2 % 100 != 0) || (year2 % 400 == 0))
	{
		for(i=1;i<m2;i++)
		{
		   sum2=sum2+mm1[i];
		}
	}
    else
	{
		for(i=1;i<m2;i++)
		{
		   sum2=sum2+mm2[i];
		}
	}
	sum2=sum2+d2;
	cout<<sum-sum1+sum2;
		return 0;
}