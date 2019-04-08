int main()
{
	int n,i,j,a[20],b[20];
	a[0]=a[1]=1;
	for(i=2;i<20;i++)
		a[i]=a[i-1]+a[i-2];
	scanf("%d",&n);
	for (i=0;i<n;i++)
	{
		scanf("%d",&b[i]);
	}
	for (i=0;i<n;i++)
	{
		for (j=1;j<21;j++)
		{
			if(b[i]==j)
				printf("%d\n",a[j-1]);
		}
	}
	return 0;
}