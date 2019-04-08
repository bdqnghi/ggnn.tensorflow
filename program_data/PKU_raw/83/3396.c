int main()
{
	int n,xf[10],i,df[10],zxf=0;
	float jd[10],gpa,zjd=0;
	scanf("%d",&n);
	for(i=0;i<n-1;i++)
	{
		scanf("%d ",&xf[i]);
	}
	scanf("%d",&xf[n-1]);
	
	for(i=0;i<n-1;i++)
	{
		scanf("%d ",&df[i]);
	}
	scanf("%d",&df[n-1]);
	
	for(i=0;i<n;i++)
	{
		if(df[i]>=90)
			jd[i]=4.0;
		else if(df[i]>=85)
			jd[i]=3.7;
		else if(df[i]>=82)
			jd[i]=3.3;
		else if(df[i]>=78)
			jd[i]=3.0;
		else if(df[i]>=75)
			jd[i]=2.7;
		else if(df[i]>=72)
			jd[i]=2.3;
		else if(df[i]>=68)
			jd[i]=2.0;
		else if(df[i]>=64)
			jd[i]=1.5;
		else if(df[i]>=60)
			jd[i]=1.0;
		else
			jd[i]=0;
	}
	for(i=0;i<n;i++)
	{
		zxf+=xf[i];
	}
	for(i=0;i<n;i++)
	{
		zjd+=xf[i]*jd[i];
	}
	gpa=zjd/zxf;
	printf("%.2f",gpa);
	return 0;
}
