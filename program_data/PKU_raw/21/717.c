void main()
{
	int a[300];
	int i,j,t,n,sum,max,f;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-1-i;j++)
		{
			if(a[i+j]>a[i+j+1])
			{
				t=a[i+j];
				a[i+j]=a[i+j+1];
				a[i+j+1]=t;
			}
		}
	}
	for(i=0,sum=0;i<n;i++)
	{
		sum=sum+a[i];
	}
	for(i=0,max=0;i<n;i++)
	{
		if(abs(a[i]*n-sum)>max)
		{
			max=abs(a[i]*n-sum);
		}
	}
	for(i=0,f=0;i<n;i++)
	{
		if(abs(a[i]*n-sum)==max&&f==0)
		{
			printf("%d",a[i]);
			f=1;
		}
		else if(abs(a[i]*n-sum)==max&&f!=0)
		{
			printf(",%d",a[i]);
		}
	}
}
			
