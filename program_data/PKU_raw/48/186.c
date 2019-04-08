


int main()
{
	int a[100][11][11]={0};
	int n,t;
	int i,j,k;
	for(i=0;i<100;i++)
	  for(j=0;j<=10;j++)
		  for(k=0;k<=10;k++)
			  a[i][j][k]=0;

	cin>>n>>t;
	for(i=0;i<t;i++)
	{
		a[0][5][5]=n;
		for(j=1;j<=9;j++)
			for(k=1;k<=9;k++)
			{
				a[i+1][j][k]=2*a[i][j][k]+a[i][j-1][k]+a[i][j+1][k]+a[i][j][k-1]+a[i][j][k+1]+a[i][j-1][k-1]+a[i][j+1][k+1]+a[i][j-1][k+1]+a[i][j+1][k-1];
			}
	}
	for(i=1;i<=9;i++)
	{
		for(j=1;j<=9;j++)
		{
			if(j==1)
				cout<<a[t][i][j];
			else if(j>0&&j<9)
				cout<<' '<<a[t][i][j];
			else if(j==9)
				cout<<' '<<a[t][i][j]<<endl;
		}
	}


	return 0;
}

