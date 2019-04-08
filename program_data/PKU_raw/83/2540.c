int main()
{
	int a[10];//????
	int point;//??????
	float b[10];//?????
	int n;//????
	float GPA;
	float total=0;
	int i=0;
	float sum=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		scanf("%d",&point);
		if(point>=90&&point<=100)
		{
			b[i]=4.0;
		}
		if(point>=85&&point<=89)
		{
			b[i]=3.7;
		}
		if(point>=82&&point<=84)
		{
			b[i]=3.3;
		}
		if(point>=78&&point<=81)
		{
			b[i]=3.0;
		}
		if(point>=75&&point<=77)
		{
			b[i]=2.7;
		}
		if(point>=72&&point<=74)\
		{
			b[i]=2.3;
		}
		if(point>=68&&point<=71)
		{
			b[i]=2.0;
		}
		if(point>=64&&point<=67)
		{
			b[i]=1.5;
		}
		if(point>=60&&point<=63)
		{
			b[i]=1.0;
		}
		if(point<60)
		{
			b[i]=0;
		}
	}
	for(i=0;i<n;i++)
	{
		sum=sum+a[i]*b[i];

	}
	for(i=0;i<n;i++)
	{
		total=total+a[i];
	}
	GPA=sum/total;
	printf("%.2f",GPA);
	return 0;
}

	