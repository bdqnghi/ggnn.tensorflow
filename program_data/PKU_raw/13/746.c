int main()
{
	int i,j,k=0,l=0,g=0,n,a[20000],b[20000];
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	if(n==1)
		printf("%d",a[0]);
	else
	{
		for(i=n-1;i>=0;i--)
		{
			if(a[n-1]==a[i])
				k++;
		}
		if(k==n)
			printf("%d",a[0]);
		else
		{
			printf("%d ",a[0]);
			for(i=1;i<n;i++)
			{
				for(j=i-1;j>=0;j--)
				{
					if(a[i]!=a[j])
						l++;
				}	
				if(l==i)
				{
					b[g]=a[i];
				    g++;
				}
					l=0;
			}
			for(i=0;i<g-1;i++)
			{
				printf("%d ",b[i]);
			}
			printf("%d",b[g-1]);
		}
	}
	return 0;
}
