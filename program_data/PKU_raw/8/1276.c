static int m,n;
int a[1000],b[1000],c[2000];
void f1(int a[],int b[],int h,int k)
{
	int i;
	scanf("%d%d",&h,&k);
	m=h;n=k;
	for(i=0;i<m;i++)
		scanf("%d",&a[i]);
	for(i=0;i<n;i++)
		scanf("%d",&b[i]);
	return;
}
void f2(int a[],int b[],int m,int n)
{
	int i,j,k;
	for(j=m-1;j>0;j--)
	{
		for(i=0;i<j;i++)
		{
			if(a[i]>a[i+1])
			{
				k=a[i];
				a[i]=a[i+1];
				a[i+1]=k;
			}
		}
	}
	for(j=n-1;j>0;j--)
	{
		for(i=0;i<j;i++)
		{
			if(b[i]>b[i+1])
			{
				k=b[i];
				b[i]=b[i+1];
				b[i+1]=k;
			}
		}
	}
}
void f3(int a[],int b[],int c[],int m,int n)
{
	int i;
	for(i=0;i<m;i++)
		c[i]=a[i];
	for(i=m;i<m+n;i++)
		c[i]=b[i-m];
}
void f4(int c[],int m,int n)
{
	int i;
	for(i=0;i<m+n-1;i++)
		printf("%d ",c[i]);
	printf("%d",c[i]);
}
void main()
{
	f1(a,b,m,n);
	f2(a,b,m,n);
	f3(a,b,c,m,n);
	f4(c,m,n);
}