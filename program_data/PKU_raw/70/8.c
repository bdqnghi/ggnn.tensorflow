int main()
{
	int n,i,j;
	double a[100][2],b[100];
	double h=0,q=0;
	scanf("%d\n",&n);
	for(i=1;i<=n;i++)
	    scanf("%lf %lf",&a[i][1],&a[i][2]);
	for(i=1;i<=n-1;i++)
	{
		for(j=i+1;j<=n;j++)
		{
			if(sqrt(pow(a[j][1]-a[i][1],2)+pow(a[j][2]-a[i][2],2))>h)
			    h=sqrt(pow(a[j][1]-a[i][1],2)+pow(a[j][2]-a[i][2],2));
		};
		b[i]=h;
	};
	for(i=1;i<=n;i++)
	{
		if(b[i]>q)
			q=b[i];
	};
	printf("%.4lf",q);
	return 0;
}