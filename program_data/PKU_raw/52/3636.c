void mov(int a[],int n,int m)
{
	int i,j,temp;
	for(j=1;j<=m;j++)
    {
		temp=a[n-1];
		for(i=n-1;i>0;i--)
		{
			a[i]=a[i-1];
		}
		a[0]=temp;
	}
	for(i=0;i<n;i++)
	{
		if(i!=n-1)
		{
			printf("%d ",a[i]);
		}
		if(i==n-1)
        {
			printf("%d",a[i]);
		}
	}
}
void main()
{
	int a[100],m,n,i;
	scanf("%d%d",&n,&m);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	mov(a,n,m);
}