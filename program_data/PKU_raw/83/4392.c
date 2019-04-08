int main()
{
	int n,ZXF,i,p;
	double GPA;
	scanf("%d",&n);
	int a[10];
	double b[10];
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		scanf("%d",&p);
		if(p>=90)
			b[i]=4.0;
		else if(p>=85)
			b[i]=3.7;
		else if(p>=82)
			b[i]=3.3;
		else if(p>=78)
			b[i]=3.0;
		else if(p>=75)
			b[i]=2.7;
		else if(p>=72)
			b[i]=2.3;
		else if(p>=68)
			b[i]=2.0;
		else if(p>=64)
			b[i]=1.5;
		else if(p>=78)
			b[i]=1.0;
		else if(p>=78)
			b[i]=0;
	}
	ZXF=0;
	for(i=0;i<n;i++)
	{
		ZXF+=a[i];
	} 
	for(i=0;i<n;i++)
	{
		GPA+=1.0*a[i]/ZXF*b[i];
	} 
	printf("%.2lf",GPA);
	return 0;
}