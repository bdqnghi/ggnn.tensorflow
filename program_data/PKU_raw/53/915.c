int find ( int a[300],int p)
{
	int i;
	for(i=1;i<p;i++)
	{
		if(a[i]==a[p])
		{
			return 1;
		}
	}
	return 0;
}
void main()
{
	int a[300],b[300],j,k,count=0,n;
	scanf("%d",&n);
	for(j=1;j<=n;j++)
	{
		scanf("%d",&a[j]);
		b[j]=a[j];
	}
	for(j=2;j<=n;j++)
	{
		if(find(a,j)==1)
		{
			
			for(k=j-count;k<=300;k++)
			{
				b[k]=b[k+1];
			}
			count++;
		}
	}
	printf("%d",b[1]);
	for(j=2;j<=n-count;j++)
	{
		printf(",%d",b[j]);
	}
}