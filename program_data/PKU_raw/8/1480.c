int m,n,a[100],b[100],c[100];
void input()
{
	cin>>m>>n;
	int i,j,k,l;
	for(i=1;i<=m;i++)
		cin>>a[i];
	for(j=1;j<=n;j++)
		cin>>b[j];
}
void paixu(int a[100],int b[100])
{
	int i,j,k,l;
	for(i=1;i<m;i++)
	{
		for(j=1;j<m-i+1;j++)
		{
			if(a[j]>a[j+1])
			{
				k=a[j];
				a[j]=a[j+1];
				a[j+1]=k;
			}
		}
	}
	for(i=1;i<n;i++)
	{
		for(j=1;j<n-i+1;j++)
		{
			if(b[j]>b[j+1])
			{
				k=b[j];
				b[j]=b[j+1];
				b[j+1]=k;
			}
		}
	}
}
void he(int a[100],int b[100])
{
	int i,j;
	for(i=1;i<=m;i++)
		c[i]=a[i];
	for(j=i;j<=i+n;j++)
		c[j]=b[j-i+1];
}
void output( int c[100])
{
	cout<<c[1];
	int i;
	for(i=2;i<=m+n;i++)
		cout<<' '<<c[i];
}
	

int main()
{
	input();
	paixu(a,b);
	he(a,b);
	output(c);
	return 0;
}
