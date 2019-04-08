int main()
{
	int n=0,m=0,i=0,j=0;
	cin>>n;
	char a[n][n];
	int b[n][n];
	for(i=0;i<n;i++)
		for(j=0;j<n;j++)
		{
			cin>>a[i][j];
			b[i][j]=0;
		}
	cin>>m;
	for(int k=0;k<m-1;k++)
	{
		for(i=0;i<n;i++)
			for(j=0;j<n;j++)
				if((a[i][j]=='@')&&(b[i][j]==0))
				{
					if((i-1>=0)&&(a[i-1][j]=='.')){a[i-1][j]='@';b[i-1][j]=1;}
					if((i+1<n)&&(a[i+1][j]=='.')){a[i+1][j]='@';b[i+1][j]=1;}
					if((j-1>=0)&&(a[i][j-1]=='.')){a[i][j-1]='@';b[i][j-1]=1;}
					if((j+1<n)&&(a[i][j+1]=='.')){a[i][j+1]='@';b[i][j+1]=1;}
				}
		for(i=0;i<n;i++)
			for(j=0;j<n;j++)
				b[i][j]=0;
	}
	int s=0;
	for(i=0;i<n;i++)
		for(j=0;j<n;j++)
			if(a[i][j]=='@')s++;
	cout<<s<<endl;
	return 0;
}
