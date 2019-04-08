// lp.cpp : Defines the entry point for the console application.
//
// ??????.cpp : Defines the entry point for the console application.
//

int main()
{

	int m,n,i,j,a[100][100];
	cin>>m>>n;
	memset(a,0,10000);
	for(i=1;i<m+1;i++)
	{
		for(j=1;j<n+1;j++)
			cin>>a[i][j];
	}
	for(i=1;i<m+1;i++)
		for(j=1;j<n+1;j++)
		{
			if(a[i][j]>=a[i-1][j]&&a[i][j]>=a[i+1][j]&&a[i][j]>=a[i][j-1]&&a[i][j]>=a[i][j+1])
				cout<<i-1<<' '<<j-1<<endl;
		}
		return 0;
}

