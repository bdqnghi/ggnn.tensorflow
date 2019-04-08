int main()
{
	int n,i,j,k=0;
	int a[10000],b[10000],c[10000],d[10000];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d%d",&a[i],&b[i]);
	}
	for(i=0;i<n;i++)
	{
		int e=1;
		for(j=0;j<n;j++)
		{
			if((a[i]>a[j]&&b[i]<b[j]||a[i]>=a[j]&&b[i]<b[j]||a[i]>a[j]&&b[i]<=b[j])&&i!=j)
			{
				e=0;
				break;
			}
		}
		if(e)
		{
			c[k]=a[i];
			d[k]=b[i];
			k++;
		}
		
	}
	for(i=1;i<=k;i++)
	{
		for(j=0;j<k-i;j++)
		{

			if(c[j]>c[j+1]||(c[j]==c[j+1]&&d[j]>d[j+1]))
			{
				int f,g;
				f=c[j];
				c[j]=c[j+1];
				c[j+1]=f;
				g=d[j];
				d[j]=d[j+1];
				d[j+1]=g;
			}
		}
	}
	int isbreak=0;
	for(i=0;i<k;i++)
	{
		if(d[i]<c[i+1])
		{
			isbreak=1;
			printf("no");
			break;
		
		}
	}
	if(isbreak==0)
	{
		printf("%d %d",c[0],d[k-1]);
	}
	return 0;
}
