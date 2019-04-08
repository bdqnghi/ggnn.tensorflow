int main()
{
	int n,i;
	float a[10],b[10],s,t,GPA;
	s=0.0;
	t=0.0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%f",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		scanf("%f",&b[i]);
	}
	for(i=0;i<n;i++)
	{
		if(b[i]>=90)
			b[i]=4.0;
		else if(b[i]>=85)
			b[i]=3.7;
		else if(b[i]>=82)
			b[i]=3.3;
		else if(b[i]>=78)
			b[i]=3.0;
		else if(b[i]>=75)
			b[i]=2.7;
		else if(b[i]>=72)
			b[i]=2.3;
		else if(b[i]>=68)
			b[i]=2.0;
		else if(b[i]>=64)
			b[i]=1.5;
		else if(b[i]>=60)
			b[i]=1.0;
		else
			b[i]=0.0;
	}
	for(i=0;i<n;i++)
	{
		s=s+a[i]*b[i];
		t=t+a[i];
	}
	GPA=s/t;
	printf("%.2f",GPA);
	return 0;
}