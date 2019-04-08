main()
{
	int i=0,j,n;
	float a[3][10];
	float GPA=0;
	scanf("%d\n",&n);
	for(j=0;j<=n-1;j++)
	{
		scanf("%f",&a[0][j]);
		i=i+a[0][j];
	}
	for(j=0;j<=n-1;j++)
	{
		scanf("%f",&a[1][j]);
		if(a[1][j]>=90)
			a[2][j]=4.0;
		else if(a[1][j]>=85)
			a[2][j]=3.7;
		else if(a[1][j]>=82)
			a[2][j]=3.3;
		else if(a[1][j]>=78)
			a[2][j]=3.0;
		else if(a[1][j]>=75)
			a[2][j]=2.7;
		else if(a[1][j]>=72)
			a[2][j]=2.3;
		else if(a[1][j]>=68)
			a[2][j]=2.0;
		else if(a[1][j]>=64)
			a[2][j]=1.5;
		else if(a[1][j]>=60)
			a[2][j]=1.0;
		else a[2][j]=0;
		a[2][j]=a[2][j]*a[0][j];
	}
	for(j=0;j<=n-1;j++)
		GPA=GPA+a[2][j];
	GPA=GPA/i;
	printf("%.2f",GPA);
}
							
	
	
	
		
			