main()
{
	unsigned int n,i,j=0,k,a[310],b[310],t,sum=0;
	float ave,max=0;
	scanf("%d",&n);
	for (i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		sum+=a[i];
	}
	ave=sum/(float)n;
	for (i=0;i<n;i++)
		if (fabs(a[i]-ave)>max) max=fabs(a[i]-ave);
	for (i=0;i<n;i++)
		if (fabs(fabs(a[i]-ave)-max)<0.00001) b[j++]=a[i];
	for (i=0;i<j-1;i++)
		for (k=i+1;k<j;k++)
			if (b[i]>b[k]) 
			{
				t=b[k];
				b[k]=b[i];
				b[i]=t;
			}
	for (i=0;i<j;i++)
	{
		if (i!=0) printf(",");
		printf("%d",b[i]);
	}
	printf("\n");
	return 0;
}