void main()
{
	int a[2][10],sub,i,j;
	float GPA,g[10],subjd[10],sumxf=0,sumjd=0;
	scanf("%d",&sub);
	for(i=0;i<2;i++)
	{
		for(j=0;j<sub;j++)
		scanf("%d ",&a[i][j]);
	}
	for(j=0;j<sub;j++)
	{
		if(a[1][j]<=100&&a[1][j]>=90)
			g[j]=4.0;
		else if (a[1][j]>=85)
			g[j]=3.7;
		else if (a[1][j]>=82)
			g[j]=3.3;
		else if (a[1][j]>=78)
			g[j]=3.0;
		else if (a[1][j]>=75)
			g[j]=2.7;
		else if (a[1][j]>=72)
			g[j]=2.3;
		else if (a[1][j]>=68)
			g[j]=2.0;
		else if (a[1][j]>=64)
			g[j]=1.5;
		else if (a[1][j]>=60)
			g[j]=1.0;
		else if(a[1][j]<60)
			g[j]=0;
	}
	for(j=0;j<sub;j++)
	{
		subjd[j]=g[j]*a[0][j];
		sumxf=sumxf+a[0][j];
		sumjd=sumjd+subjd[j];
	}
	GPA=sumjd/sumxf;
	printf("%.2f",GPA);
}
