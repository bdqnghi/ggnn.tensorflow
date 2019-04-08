int input()
{
	int i;
	scanf("%d",&i);
	return(i);
}
void shit(int a[],int n)
{
	int i,j,t;
	for(i=1;i<=n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=2;i<=n;i++)
	{
		for(j=n;j>=i;j--)
		{
			if(a[j]<a[j-1])
			{
				t=a[j];
				a[j]=a[j-1];
				a[j-1]=t;
			}
		}
	}
	for(i=1;i<=n;i++)
		printf("%d ",a[i]);
}
void damn(int a[],int n)
{
	int i,j,t;
	for(i=1;i<=n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=2;i<=n;i++)
	{
		for(j=n;j>=i;j--)
		{
			if(a[j]<a[j-1])
			{
				t=a[j];
				a[j]=a[j-1];
				a[j-1]=t;
			}
		}
	}
	for(i=1;i<=n;i++)
	{
		printf("%d",a[i]);
		if(i!=n)
			printf(" ");
	}
}
void main()
{
	int m=input(),n=input();
	int a[1000],b[1000];
	shit(a,m);
	damn(b,n);
}
