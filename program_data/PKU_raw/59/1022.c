int main ()
{
	int n,m,num=0;
	char a[110][110],myroom[110][110];
	cin>>n;
	for(int i=0;i<n;i++)
		cin>>a[i];
	cin>>m;
	for(int i=1;i<m;i++)
	{
		for(int l=0;l<n;l++)
			for(int k=0;k<n;k++)
				myroom[l][k]=a[l][k];
	    for(int i=0;i<n;i++)
	    {
		    for(int j=0;j<n;j++)
		    {
			if(myroom[i][j]=='@')
			{
				if(i-1>=0&&a[i-1][j]=='.')
					a[i-1][j]='@';
				if(i+1<n&&a[i+1][j]=='.')
					a[i+1][j]='@';
				if(j-1>=0&&a[i][j-1]=='.')
					a[i][j-1]='@';
				if(j+1<n&&a[i][j+1]=='.')
					a[i][j+1]='@';
			}

		}
	}}
	for(int i=0;i<n;i++)
		for(int j=0;j<n;j++)
			if(a[i][j]=='@')
				num++;
	cout<<num<<endl;
	return 0;
}
