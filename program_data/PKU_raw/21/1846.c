void main()
{
	int  n,i,a[300],k,num=0;
	double ave,b[300],sum=0,max=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		sum+=a[i];
	}
	ave=sum/n;
	for(i=0;i<n;i++)
	{
		b[i]=fabs(a[i]-ave);
		if(b[i]>max)
		{
			max=b[i];
		}
	}
	for(i=0;i<n;i++)
	{
		if(b[i]==max)
		{
			num++;
			if(num==1)
				printf("%d",a[i]);
			else
				printf(",%d",a[i]);
		}
	}
	printf("\n");
}