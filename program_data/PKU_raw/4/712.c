// ??(6-4) ??????????.cpp : ??????????????
//

int main()
{
	int n,m;
	cin>>n>>m;
	int s[120][120];
	int i,j;
	for (i=0;i<n;i++)
		for (j=0;j<m;j++)
		{
			cin>>s[i][j];
		}
	int num;
	for (num=0;num<m+n-1;num++)
	{
		for (j=num;j>-1;j--)
		{
			i=num-j;
		    if (i>-1&&i<n&&j<m)
		    {
				cout<<s[i][j]<<endl;
		    }
		}
	}
	return 0;
}