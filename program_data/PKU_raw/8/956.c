void print(int a[],int x)
{
	int i;
	printf("%d",a[0]);
	for(i=1;i<x;i++)
		printf(" %d",a[i]);
}
void paixu(int a[],int x)
{
	int i,j,m;
	for(i=0;i<x;i++)
		for(j=i+1;j<x;j++)
		{
			if(a[i]>a[j])
			{
				m=a[i];
				a[i]=a[j];
				a[j]=m;
			}
		}
	print(a,x);
}
void scan(int t)
{
	int m,n,a[10],i;
	scanf("%d%d",&m,&n);
	for(i=0;i<m;i++)
	{
		scanf("%d",&a[i]);
	}
	paixu(a,m);
	printf(" ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	paixu(a,n);
}
void main()
{
	
	scan(0);
}
