int main()
{
	int m,n,i,j,k,p,q,y=0;
	char a[101][101],b[101][101];
	cin>>n;
	for(i=1;i<=n;i++)
	{	 for(j=1;j<=n;j++)	{cin>>a[i][j];b[i][j]=a[i][j];} 	}
	cin>>m;
	for(k=1;k<m;k++)
	{	for(i=1;i<=n;i++)
		{	for(j=1;j<=n;j++)
			{
				if(a[i][j]=='@'&&b[i][j]=='@')  
					{
						if(a[i][j-1]=='.') a[i][j-1]='@';
						if(a[i][j+1]=='.') a[i][j+1]='@';
						if(a[i-1][j]=='.') a[i-1][j]='@';
						if(a[i+1][j]=='.') a[i+1][j]='@';
					}
			}
		}
		for(p=1;p<=n;p++)
		{	for(q=1;q<=n;q++) b[p][q]=a[p][q];	}
	}
	for(p=1;p<=n;p++)
		{	for(q=1;q<=n;q++)
			{
				if(a[p][q]=='@') y=y+1;	}}
	cout<<y;
	return 0;
}