int main()
{
	int y1,y2,m1,m2,d1,d2;
	int a[12]={31,28,31,30,31,30,31,31,30,31,30,31},b[12]={31,29,31,30,31,30,31,31,30,31,30,31};
	cin>>y1>>m1>>d1;
	cin>>y2>>m2>>d2;
	int sum=0;
	int i;
	if(y1==y2)
	{
		if(m1==m2)
			sum=d2-d1;
		else
		{
		if((y1 % 4 == 0 && y1 % 100 != 0) || (y1 % 400 == 0))
		{
			for(i=m1+1;i<m2;i++)
				sum+=b[i-1];
			sum=sum+b[m1-1]-d1+d2;
		}
		else
		{
			for(i=m1+1;i<m2;i++)
				sum+=a[i-1];
			sum=sum+a[m1-1]-d1+d2;
		}
		}
	}
	else
	{
	for(i=y1+1;i<y2;i++)
	{
		if((i % 4 == 0 && i % 100 != 0) || (i % 400 == 0)) 
			sum+=366;
		else
			sum+=365;
	}
	if((y1 % 4 == 0 && y1 % 100 != 0) || (y1 % 400 == 0))
	{
		for(i=m1+1;i<=12;i++)
		{
			sum+=b[i-1];
		}
		sum+=b[m1-1]-d1;
	}
	else
	{
		for(i=m1+1;i<=12;i++)
		{
			sum+=a[i-1];
		}
		sum+=a[m1-1]-d1;
	}
	if((y2 % 4 == 0 && y2 % 100 != 0) || (y2 % 400 == 0))
	{
		for(i=1;i<m2;i++)
		{
			sum+=b[i-1];
		}
		sum+=d2;
	}
	else
	{
		for(i=1;i<m2;i++)
		{
			sum+=a[i-1];
		}
		sum+=d2;
	}
	}
	cout<<sum<<endl;
		return 0;
}