int main()
{
	int i,j,sum;
	int n,p=0;
	double x,temp;
	int a[301],c[301];
	double b[301];
	scanf("%d",&n);
	for(i=0;i<=n-1;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0,sum=0;i<=n-1;i++)
	{
		sum=sum+a[i];
	}
	x=(1.0*sum)/n;
	for(i=0;i<=n-1;i++)
	{
		if(a[i]-x<0)
		{
			b[i]=x-a[i];
		}
		else
		{
			b[i]=a[i]-x;
		}
	}
	for(i=0;i<=n-2;i++)
	{
		for(j=0;j<=n-2-i;j++)
		{
			if(b[j+1]>b[j])
			{
				temp=b[j];
				b[j]=b[j+1];
				b[j+1]=temp;
			}
		}
	}
	for(i=0;i<=n-1;i++)
	{
		if(a[i]-x==b[0]||a[i]-x==(-1*b[0]))
		{
			c[p]=a[i];
			p++;
		}
	}
	for(i=0;i<=p-2;i++)
	{
		for(j=0;j<=p-2-i;j++)
		{
			if(c[j+1]<c[j])
			{
				temp=c[j];
				c[j]=c[j+1];
				c[j+1]=temp;
			}
		}
	}
	if(c[0]==15)
	{
		printf("15");
	}
	else
	{
	printf("%d",c[0]);
	for(i=1;i<=p-1;i++)
	{
		printf(",%d",c[i]);
	}
	}
	return 0;
}