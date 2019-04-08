int main()
{
	int n,i,flag;
	int a[300];
	double sum,ave,max;
	double b[300];
	scanf("%d",&n);
	sum=0;
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		sum+=a[i];
	}
	ave=sum/n;
	for(i=0;i<n;i++)
	{
		b[i]=((double)a[i]-ave);
		if(b[i]<0)
			b[i]=-b[i];

	 }
	max=b[0];
	for(i=1;i<n;i++)
	{
		if(b[i]>max)
		{
			max=b[i];
		}
	}
    flag=0;
	for(i=0;i<n;i++)
	{
		if(b[i]==max)
		{
			if(flag==0)
			{
				printf("%d",a[i]);
	            flag=1;
			}
			else
			{
				printf(",%d",a[i]);
			}
		}
	}
	return 0;
}

