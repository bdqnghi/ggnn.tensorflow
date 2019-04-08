int main()
{
	int n,x[100],y[100],m[100][100],i,j,k,count[100]={0};
	cin>>n;
	for(k=0;k<n;k++)
	{
		cin>>x[k]>>y[k];
		for(i=0;i<x[k];i++)
		{
			for(j=0;j<y[k];j++)
			{
				cin>>m[i][j];
				if(i==0||i==x[k]-1||j==0||j==y[k]-1)
					count[k]+=m[i][j];
			}
		}
	}
	for(k=0;k<n;k++)
		cout<<count[k]<<endl;
	return 0;
}
