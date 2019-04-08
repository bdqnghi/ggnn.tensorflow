main()
{
	int n,i,x,a[3][10];
	float gpa;
	scanf("%d",&n);
	for(i=1,x=0;i<=n;i++)
	{
		scanf("%d",&a[1][i]);
		x=x+a[1][i];
	}
	for(i=1,gpa=0;i<=n;i++)
	{
		scanf("%d",&a[2][i]);
		if(a[2][i]>=90) gpa=gpa+4.0*a[1][i];
		else if(a[2][i]>=85) gpa=gpa+3.7*a[1][i];
		else if(a[2][i]>=82) gpa=gpa+3.3*a[1][i];
		else if(a[2][i]>=78) gpa=gpa+3.0*a[1][i];
		else if(a[2][i]>=75) gpa=gpa+2.7*a[1][i];
		else if(a[2][i]>=72) gpa=gpa+2.3*a[1][i];
		else if(a[2][i]>=68) gpa=gpa+2.0*a[1][i];
		else if(a[2][i]>=64) gpa=gpa+1.5*a[1][i];
		else if(a[2][i]>=60) gpa=gpa+1.0*a[1][i];
		
	}
	gpa=gpa/x;
	printf("%.2f",gpa);

}