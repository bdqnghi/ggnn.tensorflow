void main()
{
	int n,i;
	scanf("%d\n",&n);
	int a[10],b[10];
	double c[10];
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&b[i]);
	}
	for(i=0;i<n;i++)
	{
		if(b[i]<60)
			c[i]=0;
		else if(b[i]<=63&&b[i]>=60)
			c[i]=1.0;
		else if(b[i]<=67&&b[i]>=64)
			c[i]=1.5;
		else if(b[i]<=71&&b[i]>=68)
			c[i]=2.0;
		else if(b[i]<=74&&b[i]>=72)
			c[i]=2.3;
		else if(b[i]<=77&&b[i]>=75)
			c[i]=2.7;
		else if(b[i]<=81&&b[i]>=78)
			c[i]=3.0;
		else if(b[i]<=84&&b[i]>=82)
			c[i]=3.3;
		else if(b[i]<=89&&b[i]>=85)
			c[i]=3.7;
		else
			c[i]=4.0;
	}
	double GPA,sum=0,score=0;
	for(i=0;i<n;i++)
	{
		sum=sum+c[i]*a[i];
		score=score+a[i];
	}
	GPA=sum/(double)score;
	printf("%.2f",GPA);
}
