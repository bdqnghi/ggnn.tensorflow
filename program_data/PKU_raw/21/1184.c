void main()
{
	int i,n,t=0;
	double a[300],b[300],sum=0.0,ave,max=0.0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%lf",&a[i]);
	for(i=0;i<n;i++)
		sum+=a[i];
	ave=sum/(double)n;
	for(i=0;i<n;i++)
	{
		if(ave>a[i])
			b[i]=ave-a[i];
		else b[i]=a[i]-ave;
		if(b[i]>max)
			max=b[i];
	}
	for(i=0;i<n;i++)
		if(b[i]==max)
			if(t==0)
			{
				printf("%.0lf",a[i]);
				t++;
			}
			else
				printf(",%.0lf",a[i]);
}


