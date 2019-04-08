void main()
{
	int n,i,j,t,sum=0,max=0,s=0;
	int a[300];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		sum=sum+a[i];
	}
	for(i=0;i<n;i++)
	{
		if(a[i]*n-sum>=0) 
		{
			if(a[i]*n-sum>max) max=a[i]*n-sum;
		}
		else
		{
			if(sum-a[i]*n>max) max=sum-a[i]*n;
		}
	}
	for(j=0;j<n-1;j++)
	{
		for(i=0;i<n-1-j;i++)
		{
			if(a[i]>a[i+1])
			{
				t=a[i];
				a[i]=a[i+1];
				a[i+1]=t;
			}
		}
	}
	for(i=0;i<n;i++)
	{
		if(a[i]*n-sum==max||sum-a[i]*n==max)
		{
			if(s==0) printf("%d",a[i]);
			else printf(",%d",a[i]);
			s++;
		}
	}			 
}