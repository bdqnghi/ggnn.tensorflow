void main()
{
	int n,i,a[300]={0},c=0,j,temp2;
	float b,temp1,f[300];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		c=c+a[i];
	}
	b=(float)c/(float)n;
	for(i=0;i<n;i++)
	{
		if((float)a[i]-b>=0)
			f[i]=(float)a[i]-b;
		else f[i]=b-(float)a[i];
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n-i;j++)
		{
			if(f[j]<f[j+1])
			{
				temp1=f[j];
				f[j]=f[j+1];
				f[j+1]=temp1;
				temp2=a[j];
				a[j]=a[j+1];
				a[j+1]=temp2;
			}
		}
	}
	i=0;
	while(f[i]==f[i+1])
		i=i+1;
	if(i==0)
		printf("%d",a[0]);
	else
	{
		for(j=0;j<i;j++)
		{
			printf("%d,",a[j]);
		}
		printf("%d",a[i]);
	}
}