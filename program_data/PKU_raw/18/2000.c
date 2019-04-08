int i,j,t;
int n;
int sum;	int a[100][100];
int f(int x)
{for(int ii=0;ii<x;ii++)
{int minn=a[ii][0];
for(int ij=0;ij<x;ij++)
	if(a[ii][ij]<minn)
		minn=a[ii][ij];
for(int ij=0;ij<x;ij++)
	a[ii][ij]=a[ii][ij]-minn;
}
}
int g(int x)
{for(int ii=0;ii<x;ii++)
{int minn=a[0][ii];
for(int ij=0;ij<x;ij++)
	if(a[ij][ii]<minn)
		minn=a[ij][ii];
for(int ij=0;ij<x;ij++)
	a[ij][ii]=a[ij][ii]-minn;
}
}
int h(int x)
{
	sum=sum+a[1][1];
	for(int ii=0;ii<x;ii++)
	{for(int jj=1;jj<x;jj++)
		a[ii][jj]=a[ii][jj+1];
	}
	for(int ii=0;ii<x;ii++)
	{for(int jj=1;jj<x;jj++)
		a[jj][ii]=a[jj+1][ii];
	}
}
int main()
{

	cin>>n;
	for(int qqq=0;qqq<n;qqq++)
	{sum=0;
		for(i=0;i<n;i++)
		for(j=0;j<n;j++)
		{
			cin>>a[i][j];
		}
		for(i=n;i>1;i--)
		{
			f(i);g(i);h(i);
		}
		cout<<sum<<endl;
	}
}