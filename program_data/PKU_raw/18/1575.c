int a[110][110];
int rmin[110],cmin[110];
void clear(int n)
{
	for(int i=0;i<n;i++)
	{
		rmin[i]=a[i][0];
		for(int j =0;j<n;j++)
		{
			if(a[i][j]<rmin[i])
				rmin[i]=a[i][j];
		}
	}
	for(int i=0;i<n;i++)
		for(int j =0;j<n;j++)
			a[i][j]=a[i][j]-rmin[i];
	for(int i=0;i<n;i++)
	{
		cmin[i]=a[0][i];
		for(int j=0;j<n;j++)
		{
			if(a[j][i]<cmin[i])
				cmin[i]=a[j][i];
		}
	}
	for(int i=0;i<n;i++)
		for(int j=0;j<n;j++)
			a[j][i]=a[j][i]-cmin[i];
}
void del (int n)
{
	for(int i=1;i<n-1;i++)
		for(int j=0;j<n;j++)
			a[i][j]=a[i+1][j];
	for(int i=1;i<n-1;i++)
		for(int j=0;j<n;j++)
			a[j][i]=a[j][i+1];
}
int main ()
{
	int n;
	cin>>n;
	int sum;
	for(int m=0;m<n;m++)
	{
		sum=0;
		for(int j=0;j<n;j++)
			for(int k=0;k<n;k++)
				cin>>a[j][k];
		for(int i=n;i>1;i--)
		{
			clear(i);
			sum+=a[1][1];
			del(i);
		}
		cout<<sum<<endl;
	}
	return 0;
}
