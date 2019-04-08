
char pain[101][102][102];
void trans(int,int,int);
int main()
{
	int n,i,j,t,day;
	cin>>n;
	for(i=1;i<=n;i++)
		for(j=1;j<=n;j++)
			cin>>pain[1][i][j];
	cin>>day;
	for(t=2;t<=day;t++)
	{
		for(i=1;i<=n;i++)
			for(j=1;j<=n;j++)
				pain[t][i][j]=pain[t-1][i][j];
		for(i=1;i<=n;i++)
			for(j=1;j<=n;j++)
				if(pain[t-1][i][j]=='@')
				{
					trans(t,i-1,j);
					trans(t,i+1,j);
					trans(t,i,j-1);
					trans(t,i,j+1);
				}
	}
	int count=0;
	for(i=1;i<=n;i++)
		for(j=1;j<=n;j++)
			if(pain[day][i][j]=='@')
				count++;
	cout<<count<<endl;
	return 0;
}

void trans(int t,int i,int j)
{
	if(pain[t-1][i][j]=='.')
		pain[t][i][j]='@';
}