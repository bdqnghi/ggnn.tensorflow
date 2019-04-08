void main()
{
	int n;
	int i,j;
double a[100];
	double t;
	scanf("%d",&n);
	for(i=0;i<n-1;i++)
	{	scanf("%lf",&a[i]);
	scanf("\n");
	}
	scanf("%lf",&a[n-1]);
	for(j=0;j<n;j++)
	{	for(i=0;i<n-j;i++)
	{
		if(a[i+1]>a[i])
			{
				t=a[i+1];
				a[i+1]=a[i];
				a[i]=t;
			}
	}
		
	}	printf("%.0lf\n",a[0]);
			printf("%.0lf\n",a[1]);
}

