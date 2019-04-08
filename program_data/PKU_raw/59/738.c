int main()
{
	char a[102][102]={0};//????
	int m=-0,n=0,i=0,k=0,x=0,sum=0;//????
	cin>>n;//???
	getchar();//????
	for(i=0;i<n;i++)//??
		for(k=0;k<n+1;k++)
			a[i][k]=cin.get();
	cin>>m;
	m=m-1;//????m????????m-1?
	for(x=0;x<m;x++)
	{
		for(i=0;i<n;i++)
		{
			for(k=0;k<n;k++)
			{
				if(a[i][k]=='@')
				{
					if(a[i+1][k]=='.')
						a[i+1][k]='$';//????????????????????$????????? 
					if(a[i-1][k]=='.')
						a[i-1][k]='$';
					if(a[i][k+1]=='.')
						a[i][k+1]='$';
					if(a[i][k-1]=='.')
						a[i][k-1]='$';
				}
			}
		}
		for(i=0;i<n;i++)
		{
			for(k=0;k<n;k++)
			{
				if(a[i][k]=='$')
					a[i][k]='@';//????$??
			}
		}

	}
	for(i=0;i<n;i++)//??
	{
		for(k=0;k<n;k++)
		{
			if(a[i][k]=='@')
				sum++;
		}
	}
	cout<<sum;
	return 0;
}
