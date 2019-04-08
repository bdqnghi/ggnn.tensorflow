int  main()
{

	char a[102][102]={' '},x,b[102][102];
	
	int i,j,n,t,i1,j1;
	cin>>n;
	for(i=1;i<=n;i++)
	{
		cin.get(x);
		for(j=1;j<=n;j++)
		{
			cin.get(a[i][j]);
		}
		
	}
	cin>>t;
	int sum=1;
	while(sum<t)
	{
		for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{ if(a[i][j]=='#') b[i][j]='#';
			if(a[i][j]=='@') 
			{  b[i][j]='@';
		
					if(a[i-1][j]!='#')
					{
						b[i-1][j]='@';
					}
					else{ b[i-1][j]='#';}
		
					if(a[i+1][j]!='#')
					{
						b[i+1][j]='@';
					}
					else{ b[i+1][j]='#';}
		 
			       if(a[i][j-1]!='#')
					{
						b[i][j-1]='@';
					}
					else{ b[i][j-1]='#';}
		
	                if(a[i][j+1]!='#')
					{
						b[i][j+1]='@';
					}
					else{ b[i][j+1]='#';}
		
			}
			
		}
		}
		
		for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			a[i][j]=b[i][j];
		}
	}
		sum++;
	}
	
	
	int countt=0;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
		if(a[i][j]=='@')   countt++;
		}
	}
	cout<<countt;

return 0;
}
