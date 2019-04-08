void paixu(int n,int a[])
{
	int i,j,m;
	for(i=1;i<=n-1;i++)
	{
		for(j=0;j<n-i;j++)
		{
			if(a[j]>a[j+1])
			{
				m=a[j];
				a[j]=a[j+1];
				a[j+1]=m;
			}
		}
	}
}
void link(int a[],int b[],int c[],int n,int m)
{
	int i;
	for(i=0;i<n;i++)
		c[i]=a[i];
	for(i=n;i<n+m;i++)
		c[i]=b[i-n];
}
	

void main()
{
	int i,k;
	int n,m,a[100],b[100],c[200];
	scanf("%d%d",&n,&m);
	for(k=0;k<n;k++)
		scanf("%d",&a[k]);
	for(k=0;k<m;k++)
		scanf("%d",&b[k]);
	paixu(n,a);
	paixu(m,b);
	link(a,b,c,n,m);
	printf("%d",c[0]);
	for(i=1;i<n+m;i++)
		printf(" %d",c[i]);
}
	
