void main()
{
	void f(int r,int a[10000]);
	void g(int m,int n,int a[1000],int b[1000],int c[1000]);
	int m,n;
	scanf("%d %d",&m,&n);
	int a[1000],b[10000],c[1000],i,j;
	for(i=0;i<m;i++)
	scanf("%d",&a[i]);
	for(i=0;i<n;i++)
	scanf("%d",&b[i]);
	f(m,a);
	f(n,b);
    g(m,n,a,b,c);
	for(i=0;i<m+n-1;i++)
	printf("%d ",c[i]);
	printf("%d\n",c[m+n-1]);
}
void f(int r,int a[10000])
{
	int t,i,j;
    for(i=0;i<r-1;i++)
		for(j=0;j<r-i-1;j++)
			if(a[j]>a[j+1])
			{
				t=a[j];
				a[j]=a[j+1];
				a[j+1]=t;
			}
}
void g(int m,int n,int a[1000],int b[1000],int c[1000])
{	
	int i;
	for(i=0;i<m+n;i++)
	{
		if(i<m)c[i]=a[i];
		else c[i]=b[i-m];
	}
}
