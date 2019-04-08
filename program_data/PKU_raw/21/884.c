int main()
{
	int n,i,l=0,k,m,f[300];
	float s=0,a[301]={0},c,b;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%f",&a[i]);
		s=s+a[i];
	}
	s=s/n;
    c=0;b=0;
	for(i=0;i<n;i++)
	{
		c=fabs((float)a[i]-s);
		if(c>b)
			b=c;
	}
	for(i=0;i<n;i++)
	{
		c=fabs((float)a[i]-s);
		if((b-c)<1e-6)
		{
			f[l]=a[i];l++;
		}

	}
    n=l;
	for(i=0;i<n;i++)
	{
		for(k=0;k<n-1;k++)
		{
			if(f[k]>f[k+1])
			{
				m=f[k];f[k]=f[k+1];f[k+1]=m;
			}
		}
	}
	printf("%d",f[0]);
	for(i=1;i<n;i++)
		printf(",%d",f[i]);
	return 0;
}

