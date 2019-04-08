int main()
{
	int n,c,d,i,j,max,sum;
	int a[50001],b[50001];
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		scanf("%d%d",&a[i],&b[i]);
	}
	for(i=1;i<=n;i++)
	{
		for(j=i;j<=n;j++)
		{
			if(a[i]>a[j])
			{
				c=a[i];
				d=b[i];
				a[i]=a[j];
				b[i]=b[j];
				a[j]=c;
				b[j]=d;
			}
		}
	}
	sum=0;
	max=b[1];
	for(i=1;i<=n;i++)
	{
		if(a[i]>max)
		{
			sum=sum+1;
			break;
		}
		else
		{
			if(b[i]>max)
			{
				max=b[i];
			}
		}
	}
	if(sum!=0)
	{
		printf("no");
	}
	else
	{
		printf("%d %d",a[1],max);
	}
	return 0;

}
