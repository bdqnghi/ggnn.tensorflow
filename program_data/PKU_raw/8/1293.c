int m,n;
int a[100],b[100],k[200];
void f1();
void f2(int[],int[]);
void f3(int[],int[]);
void f4(int[]);
int main()
{
	f1();
	f2(a,b);
	f3(a,b);
	f4(k);
	return 0;
}
void f1()
{
	cin>>m>>n;
	for(int i=0;i<m;i++)
		cin>>a[i];
	for(int j=0;j<n;j++)
		cin>>b[j];
}
void f2(int c[],int d[])
{
	for(int i=0;i<m;i++)
	{
		for(int j=m-1;j>i;j--)
		{
			if(c[j]<c[j-1]) swap(c[j],c[j-1]);
		}
	}
	for(int i=0;i<n;i++)
	{
		for(int j=n-1;j>i;j--)
		{
			if(d[j]<d[j-1]) swap(d[j],d[j-1]);
		}
	}
}
void f3(int e[],int f[])
{
	for(int i=0;i<m+n;i++)
	{
		if(i<m) k[i]=a[i];
		else k[i]=b[i-m];
	}
}
void f4(int g[])
{
	for(int i=0;i<n+m-1;i++)
		cout<<g[i]<<" ";
	cout<<g[n+m-1]<<endl;
}

	