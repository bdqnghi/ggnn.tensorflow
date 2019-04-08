void main()
{
	int n,a[300],b[300],i,s=0,k=0,j,t;
	double x,y;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		s=s+a[i];
	}
	x=(double)s/(double)n;
	y=fabs(a[0]-x);
	for(i=1;i<n;i++)
		if(fabs(a[i]-x)>y)
			y=fabs(a[i]-x);
	for(i=0;i<n;i++)
		if(fabs(a[i]-x)==y)
		{
			b[k]=a[i];
			k++;
		}
	if(k==1)
		printf("%d",b[0]);
	else if(k==2)
	{
		if(b[0]>b[1])
			printf("%d,%d",b[1],b[0]);
		else printf("%d,%d",b[0],b[1]);
	}
	else
	{
		for(j=0;j<k-1;j++)
			for(i=0;i<k-1-j;i++)
				if(b[i]>b[i+1])
				{
					t=b[i];
					b[i]=b[i+1];
					b[i+1]=t;
				}
		printf("%d",b[0]);
		for(i=1;i<k;i++)
			printf(",%d",b[i]);
	}
}