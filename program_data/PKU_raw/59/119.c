char m[100][100][100];
int n;
int main()
{
	int i,j,d;
	cin>>n;
	cin.get();
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			cin.get(m[0][i][j]);
		}
		cin.get();
	}
	cin>>d;
	int t=0,flag=0,count=0;
	for(t=1;t<d;t++)
	{
		for(i=0;i<n;i++)
		{
			for(j=0;j<n;j++)
			{
				flag=0;
				if(i>0)
				{
					if(m[t-1][i-1][j]=='@')
						flag=1;
				}
				if(i<n-1)
				{
					if(m[t-1][i+1][j]=='@')
						flag=1;
				}
				if(j>=0)
				{
					if(m[t-1][i][j-1]=='@')
						flag=1;
				}
				if(j<n-1)
				{
					if(m[t-1][i][j+1]=='@')
						flag=1;
				}
				if(flag==1&&m[t-1][i][j]!='#')
					m[t][i][j]='@';
				else
					m[t][i][j]=m[t-1][i][j];
				if(t==d-1)
				{
					if(m[t][i][j]=='@')
						count++;
				}
			}
		}
	}
	cout<<count<<endl;
	return 0;
}