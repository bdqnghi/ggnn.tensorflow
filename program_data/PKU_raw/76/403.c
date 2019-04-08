int main()
{
	int i,j,n,a[1000],b[1000],emp;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d %d",&a[i],&b[i]);
	}
	
	for(i=n-1;i>0;i--)
	{
		for(j=i-1;j>=0;j--)
			if(a[i]<a[j])
			{
				emp=a[j];a[j]=a[i];a[i]=emp;
				emp=b[j];b[j]=b[i];b[i]=emp;
			}
	}
	
	for(i=0;i<n-1;i++)
	{
		if(b[i]<a[i+1])
		{
			printf("no");
			return 0;
		}
		else 
		{
			if(b[i]<b[i+1])
			{
				emp=a[i+1];a[i+1]=a[i];a[i]=a[i+1];
			}
			else 
			{
				emp=a[i+1];a[i+1]=a[i];a[i]=a[i+1];
				emp=b[i+1];b[i+1]=b[i];b[i]=b[i+1];
			}
		}
	}
	printf("%d %d",a[n-1],b[n-1]);
	return 0;
}