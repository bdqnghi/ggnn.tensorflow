char peo[102][102]={"\0"};
int state[102][102]={0};
int temp[102][102]={0};
int n;
int deal();
int vir(int a,int b);
int main()
{
	int count=0;
	int i,j,k;
	int day;
	for (i=0;i<=101;i++)
		for (j=0;j<=101;j++)
			peo[i][j]='#';
	cin>>n;
	for (i=1;i<=n;i++)
		for (j=1;j<=n;j++)	
			cin>>peo[i][j];
	cin>>day;
	for (i=0;i<102;i++)
		for (j=0;j<102;j++)
		{
			if (peo[i][j]=='#')
				state[i][j]=-1;
			if (peo[i][j]=='@')
				state[i][j]=1;
			if (peo[i][j]=='.')
				state[i][j]=0;
		}
	for (i=0;i<day-1;i++)
	{
		for (j=0;j<102;j++)
			for (k=0;k<102;k++)
				temp[j][k]=0;
		deal();
	}
	for (i=1;i<=n;i++)
		for (j=1;j<=n;j++)
			if (state[i][j]==1)
				count++;
	cout<<count<<endl;
return 0;
}
int deal()
{
	int i,j;
	for (i=1;i<=n;i++)
		for (j=1;j<=n;j++)
			if ((state[i][j]==1)&&(temp[i][j]==0))
				vir(i,j);
	return 0;
}
int vir(int a,int b)
{
	if (state[a-1][b]==0)
	{
		state[a-1][b]=1;
		temp[a-1][b]=1;
	}
	if (state[a+1][b]==0)
	{
		state[a+1][b]=1;
		temp[a+1][b]=1;
	}
	if (state[a][b-1]==0)
	{
		state[a][b-1]=1;
		temp[a][b-1]=1;
	}
	if (state[a][b+1]==0)
	{
		state[a][b+1]=1;
		temp[a][b+1]=1;
	}
return 0;
}
