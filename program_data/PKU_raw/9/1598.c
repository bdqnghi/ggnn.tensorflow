int main()
{
	int n,a[100],i,num=0,m[100],j;
	char c[100][10];
	
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%s",c[i]);
		scanf("%d",&a[i]);
	}
	
	
	
	for(i=0;i<n;i++)
	{
		if(a[i]>=60)
		{
			for(j=0;j<n;j++)
			{
				if(a[i]>=a[j])
				{
					num=num+1;
				}	
			}
			m[i]=num;
			num=0;
		}
	}
	
	for(j=n;j>0;j--)
	{
		for(i=0;i<n;i++)
		{
			if(a[i]>=60)
			{
				if(m[i]==j)
				{
					printf("%s\n",c[i]);
				}
			}
		}
	}
	
	for(i=0;i<n;i++)
	{
		if(a[i]<60)
		{
			printf("%s\n",c[i]);
		}
	}

	return 0;
}