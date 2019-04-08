

int main()
{
	int n,a[50000],b[50000],c[50000],i,t,temp,sum=0;
	
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d%d",&(a[i]),&(b[i]));
		
		
	}
	for(i=0;i<n;i++)
	{
		c[i]=b[i];
	}

	for(i=0;i<n;i++)
	{
		for(t=n-1;t>0;t--)
		{
			if(a[t]<a[t-1])
			{
				temp=a[t];
				a[t]=a[t-1];
				a[t-1]=temp;
				temp=b[t];
				b[t]=b[t-1];
				b[t-1]=temp;
			}
		}
	}
		for(i=0;i<n;i++)
	{
		for(t=n-1;t>0;t--)
		{
			if(c[t]<c[t-1])
			{
				temp=c[t];
				c[t]=c[t-1];
				c[t-1]=temp;
					
			}
		}
	}
		for(temp=a[0];temp<b[n-1];temp++)
	{
		for(i=0;i<n;i++)
		{
			if(temp+0.5<b[i]*1.0&&temp+0.5>a[i]*1.0)
			{
				sum++;
				break;
			}
		}
	}
if(sum==b[n-1]-a[0])
	{
		printf("%d %d",a[0],c[n-1]);
	}
	else
	{
		printf("no");
	}
	

	return 0;
}