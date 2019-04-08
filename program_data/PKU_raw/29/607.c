int main()
{
	int number[100],i;
	number[0]=1,number[1]=2;
	double c[100],d;
	
	for(i=2;i<100;i++)
	{
        number[i]=number[i-1]+number[i-2];
	}
	int n,a[100],k;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
        scanf("%d",&a[i]);
		printf("\n");
	}
    for(k=0;k<n;k++)
	{
		for(i=0;i<a[k];i++)
		{
			c[i]=number[i+1]*1.0/number[i];
			d=d+c[i];
		}
		printf("%.3lf\n",d);
		d=0;
        for(i=0;i<a[k]-1;i++)
		{
			c[i]=0;
		}
	}
	return 0;
}
