int main()
{
 	int i,m=0,n;
 	int a[11]={0},b[11]={0};
	float GPA=0;
	float c[11]={0},d[11]={0};
 	cin>>n;
 	for (i=1;i<=n;i++)
	{
	 	cin>>a[i];
	}	 
	for (i=1;i<=n;i++)
	{
	 	cin>>b[i];
		if (b[i]>=90 && b[i]<101) c[i]=4.0;
		if (b[i]>=85 && b[i]<90) c[i]=3.7;
		if (b[i]>=82 && b[i]<85) c[i]=3.3;
		if (b[i]>=78 && b[i]<82) c[i]=3.0;
		if (b[i]>=75 && b[i]<78) c[i]=2.7;
		if (b[i]>=72 && b[i]<75) c[i]=2.3;
		if (b[i]>=68 && b[i]<72) c[i]=2.0;
		if (b[i]>=64 && b[i]<68) c[i]=1.5;
		if (b[i]>=60 && b[i]<64) c[i]=1.0;
		if (b[i]>=0 && b[i]<60) c[i]=0.0;
	}	 
	for (i=1;i<=n;i++)
	{
	 d[i]= a[i] * c[i];
	 GPA+=d[i];m=m+a[i];
	}	 
	printf("%.2f",GPA/m);
	
}
