void min(int a[100][100],int);
void newa(int a[100][100],int);
int main()
{
	int i,j,k,n,a[100][100];
	cin>>n;
	for(i=1;i<=n;i++)
	{
		for(j=0;j<n;j++)
			for(k=0;k<n;k++)
				cin>>a[j][k];
		min(a,n);
	}
	return 0;
}
void min(int a[][100],int n)
{
	int i,j,k,m,x,y,sum=0;
	for(m=n;m>1;m--)
	{
		for(i=0;i<m;i++)
		{
			x=a[i][0];
			for(j=1;j<m;j++)
			{
				if(x>a[i][j])
					x=a[i][j];
			}
			for(k=0;k<m;k++)
			{
				a[i][k]-=x;
			}
		}
		for(i=0;i<m;i++)
		{
			y=a[0][i];
			for(j=1;j<m;j++)
			{
				if(y>a[j][i])
					y=a[j][i];
			}
			for(k=0;k<m;k++)
			{
				a[k][i]-=y;
			}
		}
		sum+=a[1][1];
		newa(a,m);
	}
	cout<<sum<<endl;
}
void newa(int a[][100],int m)
{
	int i,j;
	for(i=0;i<m;i++)
		for(j=2;j<m;j++)
			a[i][j-1]=a[i][j];
	for(i=0;i<m;i++)
		for(j=2;j<m;j++)
			a[j-1][i]=a[j][i];
}
