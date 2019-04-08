
int main()
{
	int m,n,i,j,hill[20][20],ave;
	cin>>m>>n;
	for(i=0;i<m;i++)
		for(j=0;j<n;j++)
			cin>>hill[i][j];
	for(i=0;i<m;i++)
		for(j=0;j<n;j++)
		{
			if(i==0||hill[i][j]>=hill[i-1][j])
				if(i==m-1||hill[i][j]>=hill[i+1][j])
					if(j==0||hill[i][j]>=hill[i][j-1])
						if(j==n-1||hill[i][j]>=hill[i][j+1])
							cout<<i<<" "<<j<<endl;
		}
		return 0;


}