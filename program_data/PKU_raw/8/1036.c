void input(int a[],int b[])
{
	int i,m,n;
	scanf("%d %d",&a[49],&b[49]);
	m=a[49];
	n=b[49];
	for(i=0;i<m;i++)
		scanf("%d",&a[i]);
	for(i=0;i<n;i++)
		scanf("%d",&b[i]);
}
void order(int m,int n,int a[],int b[])
{
	int i,j,t;
	for(j=0;j<m-1;j++)
	{
		for(i=0;i<m-1-j;i++)
		{if(a[i]>a[i+1])
			{t=a[i];a[i]=a[i+1];a[i+1]=t;}
		}
	}
	for(j=0;j<n-1;j++)
	{
		for(i=0;i<n-1-j;i++)
		{if(b[i]>b[i+1])
			{t=b[i];b[i]=b[i+1];b[i+1]=t;}
		}
	}
}
void comb(int m,int n,int a[],int b[],int c[])
{
	int i;
	for(i=0;i<m;i++)
		c[i]=a[i];
	for(i=m;i<(m+n);i++)
		c[i]=b[i-m];
}
void print(int m,int n,int c[])
{
	int i;
	printf("%d",c[0]);
	for(i=1;i<(m+n);i++)
		printf(" %d",c[i]);
}
void main()
{
	int a[50],b[50],c[100];
	input(a,b);
	order(a[49],b[49],a,b);
	comb(a[49],b[49],a,b,c);
	print(a[49],b[49],c);
}