int main()
{
	int n,a[10],b[10],i,k;
	float c,gpa;
	gpa=0;k=0;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=1;i<=n;i++)
	{
		scanf("%d",&b[i]);
	}
	for(i=1;i<=n;i++)
	{
		if(b[i]>=90)
		{c=4.0;}
		else if(b[i]>=85)
		{c=3.7;}
		else if(b[i]>=82)
		{c=3.3;}
		else if(b[i]>=78)
		{c=3.0;}
		else if(b[i]>=75)
		{c=2.7;}
		else if(b[i]>=72)
		{c=2.3;}
		else if(b[i]>=68)
		{c=2.0;}
		else if(b[i]>=64)
		{c=1.5;}
		else if(b[i]>=60)
		{c=1.0;}
		else
		{c=0;}
		gpa=gpa+c*a[i];
	}
	for(i=1;i<=n;i++)
	{k=k+a[i];}
	gpa=gpa/k;
	printf("%.2f",gpa);
	return 0;
}
