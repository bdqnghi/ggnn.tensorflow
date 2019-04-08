// ????????????????????????.cpp : ??????????????
//



int main()
{
	int k1,k2,a[100],b[100],i,j,c;
	scanf("%d%d",&k1,&k2);
	for(i=0;i<=k1-1;++i)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<=k2-1;++i)
	{
		scanf("%d",&b[i]);
	}
	for(i=0;i<=k1-2;++i)
	{
		for(j=i+1;j<=k1-1;++j)
		{
			if(a[i]>a[j])
			{
				c=a[j];
				a[j]=a[i];
				a[i]=c;
			}
		}
		printf("%d ",a[i]);
	}
	printf("%d",a[k1-1]);
	for(i=0;i<=k2-2;++i)
	{
		for(j=i+1;j<=k2-1;++j)
		{
			if(b[i]>b[j])
			{
				c=b[j];
				b[j]=b[i];
				b[i]=c;
			}
		}
		printf(" %d",b[i]);
	}
	printf(" %d",b[k2-1]);
	return 0;
}
