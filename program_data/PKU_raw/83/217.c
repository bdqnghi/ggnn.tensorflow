void main()
{
	int a[10];
	float b[10];
	int n,i,m;
	float GPA;
	scanf("%d",&n);
	for (i=0;i<=n-1;i++)
		scanf("%d",&a[i]);
	for (i=0;i<=n-1;i++)
	{
		scanf("%d",&m);
		if (m>=90&&m<=100)
			b[i]=4.0*a[i];
		else if (m>=85&&m<=89)
			b[i]=3.7*a[i];
		else if (m>=82&&m<=84)
			b[i]=3.3*a[i];
		else if (m>=78&&m<=81)
			b[i]=3.0*a[i];
		else if (m>=75&&m<=77)
			b[i]=2.7*a[i];
		else if (m>=72&&m<=74)
			b[i]=2.3*a[i];
		else if (m>=68&&m<=71)
			b[i]=2.0*a[i];
		else if (m>=64&&m<=70)
			b[i]=1.5*a[i];
		else if (m>=60&&m<=63)
			b[i]=1.0*a[i];
		else b[i]=0;
	}
	m=0;GPA=0;
	for (i=0;i<=n-1;i++)
	{
		m=m+a[i];
		GPA=GPA+b[i];
	}
	GPA=GPA/m;
	printf("%.2f\n",GPA);
}

		
