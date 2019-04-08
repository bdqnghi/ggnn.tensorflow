
int main()
{
	int num[22][22];
	memset(num,0,sizeof(num));
	int n=0,m=0;
	int i=0,j=0;
	cin>>m>>n;
	for(i=1;i<=m;i++)
		for(j=1;j<=n;j++)
			cin>>num[i][j];
	for(j=1;j<=m;j++)
		for(i=1;i<=n;i++)
			if(num[j][i]>=num[j-1][i]&&num[j][i]>=num[j+1][i]&&num[j][i]>=num[j][i+1]&&num[j][i]>=num[j][i-1])
				cout<<j-1<<" "<<i-1<<endl;
	return 0;
}