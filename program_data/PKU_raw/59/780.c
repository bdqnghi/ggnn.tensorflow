int main()
{
	int n,m,i,j,k,s=0;//????
	cin>>n;//????
	char a[100][100];//????
	for(i=0;i<n;i++)
		for(j=0;j<n;j++)
		{
			cin>>a[i][j];		
		}
	for(i=0;i<n;i++)
		for(j=0;j<n;j++)
			if(a[i][j]=='@')a[i][j]='0';//??????
	cin>>m;//???m?
	for(k=0;k<m-1;k++)
		for(i=0;i<n;i++)
		{
		for(j=0;j<n;j++)
			if(a[i][j]==k+'0')//??a[i][j]?????
			{
				if(a[i-1][j]=='.')a[i-1][j]=k+'1';
				if(a[i+1][j]=='.')a[i+1][j]=k+'1';
				if(a[i][j-1]=='.')a[i][j-1]=k+'1';
				if(a[i][j+1]=='.')a[i][j+1]=k+'1';//??????
			}
		}

    for(i=0;i<n;i++)
		for(j=0;j<n;j++)
			if(a[i][j]!='#'&&a[i][j]!='.')s=s+1;//????????
	cout<<s<<endl;//??s
	
	return 0;
}