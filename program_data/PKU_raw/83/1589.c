void main()
{
	int n,a[2][10],j,he=0;
	float sum=0,jidian[10],gpa;
	scanf("%d",&n);
	for(j=0;j<=n-1;j++)
	{
		scanf("%d",&a[0][j]);
	}
	for(j=0;j<=n-1;j++)
	{
		scanf("%d",&a[1][j]);
	}
    for(j=0;j<=n-1;j++)
	{
		if(a[1][j]>=90)
			jidian[j]=4;
		else if(a[1][j]>=85&&a[1][j]<=89)
			jidian[j]=3.7;
		else if(a[1][j]>=82&&a[1][j]<=84)
			jidian[j]=3.3;
		else if(a[1][j]>=78&&a[1][j]<=81)
			jidian[j]=3.0;
		else if(a[1][j]>=75&&a[1][j]<=77)
			jidian[j]=2.7;
		else if(a[1][j]>=72&&a[1][j]<=74)
			jidian[j]=2.3;
		else if(a[1][j]>=68&&a[1][j]<=71)
			jidian[j]=2.0;
		else if(a[1][j]>=64&&a[1][j]<=67)
			jidian[j]=1.5;
		else if(a[1][j]>=60&&a[1][j]<=63)
			jidian[j]=1.0;
		else jidian[j]=0;
		sum=sum+jidian[j]*a[0][j];
		he=he+a[0][j];
	}
    gpa=sum/(float)he;
	printf("%.2f\n",gpa);
}

