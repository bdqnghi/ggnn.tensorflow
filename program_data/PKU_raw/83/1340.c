int main()
{
	int i,n,sum;
	double gpa,x;
		scanf("%d",&n);
	int a[10],b[10];
	sum=0;
	x=0;
	for (i=0;i<=n-1;i++)
	{
		scanf("%d",&a[i]);
			sum=sum+a[i];
	}
	for (i=0;i<=n-1;i++)
	{
		scanf("%d",&b[i]);
		if (b[i]<=100&&b[i]>=90)
			gpa=4;
		if (b[i]<=89&&b[i]>=85)
			gpa=3.7;
		if (b[i]<=84&&b[i]>=82)
			gpa=3.3;
	if (b[i]<=81&&b[i]>=78)
			gpa=3.0;
	if (b[i]<=77&&b[i]>=75)
			gpa=2.7;
	if (b[i]<=74&&b[i]>=72)
			gpa=2.3;
	if (b[i]<=71&&b[i]>=68)
			gpa=2.0;
	if (b[i]<=67&&b[i]>=64)
			gpa=1.5;
	if (b[i]<=63&&b[i]>=60)
			gpa=1.0;
	if (b[i]<60)
			gpa=0;
	x=x+gpa*a[i];
	}
	printf("%.2f",x/sum);
	
	
	return 0;
}