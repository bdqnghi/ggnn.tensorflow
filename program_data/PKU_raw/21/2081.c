
void main()
{
	int n,i,sign=0;
	float max;
	unsigned int a[300];
	float ab[300],c[300];
	unsigned int sum=0;
	float aver;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		sum=sum+a[i];
	}
	aver=((float)sum)/n;
	max=0;
	for(i=0;i<n;i++)
	{
		c[i]=(float)a[i]-aver;
		if(c[i]>0) ab[i]=c[i];
		else ab[i]=-c[i];
		if(ab[i]>max) max=ab[i];
	}
	for(i=0;i<n;i++)
	{
		if(ab[i]==max&&c[i]<=0)
		{
			printf("%d",a[i]);
			sign=1;
		}
	}

	for(i=0;i<n;i++)
	{
		if(ab[i]==max&&c[i]>=0&&sign==1)
		    printf(",%d",a[i]);
		if(ab[i]==max&&c[i]>=0&&sign==0)
		    printf("%d",a[i]);
	}
}