void main()
{
	int n,i,f,z=0;
	scanf("%d",&n);
	int g[11];
	double p[11];double GPA;
	for(i=1;i<=n;i++)
	{
		scanf("%d",&g[i-1]);
		z+=g[i-1];
	}
	for(i=1;i<=n;i++)
	{
		scanf("%d",&f);
		if(f<60)
			p[i-1]=0;
		else if(f>=60&&f<=63)
			p[i-1]=1.0;
		else if(f>=64&&f<=67)
			p[i-1]=1.5;
		else if(f>=68&&f<=71)
			p[i-1]=2.0;
		else if(f>=72&&f<=74)
			p[i-1]=2.3;
		else if(f>=75&&f<=77)
			p[i-1]=2.7;
		else if(f>=78&&f<=81)
			p[i-1]=3.0;
		else if(f>=82&&f<=84)
			p[i-1]=3.3;
		else if(f>=85&&f<=89)
			p[i-1]=3.7;
		else if(f>=90&&f<=100)
			p[i-1]=4.0;
	}
	for(i=1;i<=n;i++)
		GPA+=p[i-1]*g[i-1];
	GPA=GPA/z;
	printf("%.2f",GPA);
}