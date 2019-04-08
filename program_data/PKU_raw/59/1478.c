int main()
{
	int n,m,i,j,d=1,count=0;
	char c[200][200];
	cin>>n;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			cin>>c[i][j];
		}
	}
	cin>>m;
	
	while(d<m)
	{
		for(i=1;i<=n;i++)
	    {
		  for(j=1;j<=n;j++)
		  {
			if(c[i][j]=='.')
			{
				if((c[i-1][j]=='@')||(c[i][j-1]=='@')||(c[i][j+1]=='@')||(c[i+1][j]=='@'))
					c[i][j]='*';
			}
		  }
		}
		for(i=1;i<=n;i++)
	    {
		  for(j=1;j<=n;j++)
		  {
			if(c[i][j]=='*')
				c[i][j]='@';
		  }
		}
		d++;
	}
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			if(c[i][j]=='@')
				count++;
		}
		
	}
	cout<<count<<endl;
	
	return 0;
}




