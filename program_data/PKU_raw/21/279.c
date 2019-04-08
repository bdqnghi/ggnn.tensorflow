void main()
{
	int i,j,r=0,t;
	float n,sum=0;
	float a[100]={0},b[100]={0};
	int c[100]={0};
	scanf("%f",&n);
	for(i=0;i<n;i++)
	{
		scanf("%f",&a[i]);
		sum+=a[i];
	}
	sum=sum/n;
	for(i=0;i<n;i++)
	{
		for(j=i;j<n;j++)
		{
			if(a[i]>a[j])
			{
				t=a[i];
				a[i]=a[j];
				a[j]=t;
			}
		}
	}
	for(i=0;i<n;i++)
	{
		if(a[i]>sum) b[i]=a[i]-sum;
		else if(a[i]<sum) b[i]=sum-a[i];
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(b[i]<b[j]) break;
		}
		if(j==n) 
		{
			c[r]=a[i];
			r++;
		}
	}
	for(i=0;i<r;i++)
	{
		printf("%d",c[i]);
		if(i!=r-1) printf(",");
	}

}