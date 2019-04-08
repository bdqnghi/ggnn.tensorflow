void main()
{
	int n,a[10],b[10],i,j,e=0;
	float sum=0,GPA;
	scanf("%d\n",&n);
	for(i=1;i<=n;i++)
	scanf("%d\n",&a[i]);
	for(j=1;j<=n;j++)
		scanf("%d\n",&b[j]);
	for(j=1;j<=n;j++)
	{
		if(b[j]>=90)
			sum=sum+a[j]*4.0;
		else if(b[j]<=89&&b[j]>=85)
			sum=sum+a[j]*3.7;
		else if(b[j]<=84&&b[j]>=82)
			sum=sum+a[j]*3.3;
		else if(b[j]<=81&&b[j]>=78)
			sum=sum+a[j]*3.0;
		else if(b[j]<=77&&b[j]>=75)
			sum=sum+a[j]*2.7;
		else if(b[j]<=74&&b[j]>=72)
			sum=sum+a[j]*2.3;
		else if(b[j]<=71&&b[j]>=68)
			sum=sum+a[j]*2.0;
		else if(b[j]<=67&&b[j]>=64)
			sum=sum+a[j]*1.5;
		else if(b[j]<=63&&b[j]>=60)
			sum=sum+a[j]*1.0;
		else
			sum=sum+a[j]*0;
	}
		for(i=1;i<=n;i++)
			e=e+a[i];
		GPA=sum/e;
		printf("%.2f\n",GPA);
		
}

		
					





