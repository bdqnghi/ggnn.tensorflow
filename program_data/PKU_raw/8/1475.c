void f(int a[],int n)
{
	int i,j,t;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			if(a[j]>a[j+1])
			{
				t=a[j];
				a[j]=a[j+1];
				a[j+1]=t;
			}
		}
	}
}
void main()
{
	int m,n,a[100],b[100],i;
	scanf("%d%d",&m,&n);
	for(i=0;i<m;i++)
		scanf("%d",&a[i]);
	for(i=0;i<n;i++)
		scanf("%d",&b[i]);
	f(a,m);
	f(b,n);
	for(i=m;i<m+n;i++)
		a[i]=b[i-m];
	for(i=0;i<m+n-1;i++)
		printf("%d ",a[i]);
	printf("%d",a[m+n-1]);
}
