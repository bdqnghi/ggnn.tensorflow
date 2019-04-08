int main()
{
	int n,c,i,j;
	int a[100],b[100];
	char ch;
	scanf("%d",&n);
	ch=getchar();
	for(i=0;i<=n-1;i++)
	{
		scanf("%d",&a[i]);
		b[i]=0;
		ch=getchar();
	}
	for(i=n-1;i>=0;i--)
	{
		b[i]=0;
		for(j=i;j<=n-1;j++)
		{
			if(b[j]>b[i]&&a[j]<=a[i])b[i]=b[j];
		}
		b[i]=b[i]+1;
	}
	c=0;
	for(i=0;i<=n-1;i++)
	{
		if(b[i]>c)c=b[i];
	}
	printf("%d",c);
	return(0);
}
