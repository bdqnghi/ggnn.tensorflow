void f1(int a[],int b[],int n,int m)
{
	int i;
	for (i=1;i<=n;i++) cin >>a[i];
	for (i=1;i<=m;i++) cin >>b[i];
}
void f2(int a[],int b[],int n,int m)
{
	int i,j,t;
	for (i=1;i<n;i++) for (j=1;j<n;j++)
	{
		if (a[j]>a[j+1])
		{
			t=a[j];  a[j]=a[j+1];  a[j+1]=t;
		}
	}
	for (i=1;i<m;i++) for (j=1;j<m;j++)
	{
		if (b[j]>b[j+1])
		{
			t=b[j];  b[j]=b[j+1];  b[j+1]=t;
		}
	}
}
void f3(int a[],int b[],int c[],int n,int m)
{
	int i;
	for (i=1;i<=n;i++) c[i]=a[i];
	for (i=1;i<=m;i++) c[i+n]=b[i];
}
void f4(int c[],int n,int m)
{
	int i;
	for (i=1;i<m+n;i++) cout <<c[i]<<' ';
	cout <<c[m+n];
}
int main()
{
	int a[99],b[99],c[200],n,m;
	cin>>n>>m;
	f1(a,b,n,m);
	f2(a,b,n,m);
	f3(a,b,c,n,m);
	f4(c,n,m);
	return 0;
}