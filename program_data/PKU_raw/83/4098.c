int main()
{
	int n,i,j,k;
	float s=0,m=0,gpa;
	float a[10];
	int b[10];
	float c[10];
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(i=0;i<n;i++)
	{
		cin>>b[i];
	}
	for(j=0;j<n;j++)
	{
		if(b[j]<=100&&b[j]>=90)
			c[j]=4.0;
		if(b[j]>=85&&b[j]<=89)
			c[j]=3.7;
		if(b[j]>=82&&b[j]<=84)
			c[j]=3.3;
		if(b[j]>=78&&b[j]<=81)
			c[j]=3.0;
		if(b[j]>=75&&b[j]<=77)
			c[j]=2.7;
		if(b[j]>=72&&b[j]<=74)
			c[j]=2.3;
		if(b[j]>=68&&b[j]<=71)
			c[j]=2.0;
		if(b[j]>=64&&b[j]<=67)
			c[j]=1.5;
		if(b[j]>=60&&b[j]<=63)
			c[j]=1.0;
		if(b[j]<60)
			c[j]=0;
	}
	for(k=0;k<n;k++)
	{
		s=s+a[k]*c[k];
	}
	for(k=0;k<n;k++)
	{
		m=m+a[k];
	}
	gpa=s/m;
	printf("%.2f",gpa);
	return 0;
}