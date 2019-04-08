int main()
{
	int n,i,j,t,m,s=0;
	int d[102][102]={0};
	char p[102][102];
	cin>>n;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{	cin>>p[i][j];
		    if(p[i][j]=='@') d[i][j]=1;
		}
	}
	cin.get();
	cin>>m;
    for(t=1;t<=m-1;t++)
	{
    	for(i=1;i<=n;i++)
		{
		    for(j=1;j<=n;j++)
			{
	 		     if(d[i][j]==1)
				 {
					 if(p[i+1][j]!='#') {p[i+1][j]='@';}
					 if(p[i-1][j]!='#') {p[i-1][j]='@';}
					 if(p[i][j+1]!='#') {p[i][j+1]='@';}
					 if(p[i][j-1]!='#') {p[i][j-1]='@';}
				 }
			}
		}
		for(i=1;i<=n;i++)
		{
	     	for(j=1;j<=n;j++) 
                if(p[i][j]=='@') d[i][j]=1;
		}
	}
	for(i=1;i<=n;i++)
	{	
		for(j=1;j<=n;j++)
			s+=d[i][j];
	}
	cout<<s<<'\n';
	return 0;
}
	


