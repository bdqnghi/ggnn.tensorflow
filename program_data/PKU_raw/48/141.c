void fanzhi(int a[11][11],int n)
{
	int i,j;
	int b[11][11]={0};
	if(n==0)
		return;
	else
	{
		for(i=1;i<=9;i++)
			for(j=1;j<=9;j++)
				if(a[i][j]!=0)
				{
					b[i][j]+=2*a[i][j];
					b[i-1][j-1]+=a[i][j];
					b[i-1][j]+=a[i][j];
					b[i-1][j+1]+=a[i][j];	
					b[i][j-1]+=a[i][j];
					b[i][j+1]+=a[i][j];
					b[i+1][j-1]+=a[i][j];
					b[i+1][j]+=a[i][j];
					b[i+1][j+1]+=a[i][j];
				}
		for(i=1;i<=9;i++)
			for(j=1;j<=9;j++)
			{
				a[i][j]=b[i][j];
				b[i][j]=0;
			}
		fanzhi(a,n-1);
	}
}
int main()
{
	int m,n;
	int a[11][11]={0};
	cin>>m>>n;
	a[5][5]=m;
	fanzhi(a,n);
	int i,j;
	for(i=1;i<=9;i++)
	{
		for(j=1;j<=9;j++)
		{
			if(j!=1)
				cout<<" ";
			cout<<a[i][j];
		}
		cout<<endl;
	}
	return 0;
}