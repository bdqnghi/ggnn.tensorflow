//????????????????????
//+
//????win????


int win[1001][1001];//win[i][j]??i?????j???????????

inline int Play(int x,int y)
{
	if (x>y)
		return 1;
	if (x<y)
		return -1;
	return 0;
}

int main()
{
	int n,qw[1000],tj[1000],i,j;

	while (cin>>n && n)
	{
		for (i=0;i<n;++i)
			cin>>tj[i];
		for (i=0;i<n;++i)
			cin>>qw[i];
		sort(tj,tj+n);
		sort(qw,qw+n);

		win[0][0]=0;
		for (i=1;i<=n;++i)
		{
			win[i][0]=win[i-1][0]+Play(tj[i-1],qw[n-i]);//?????
			for (j=1;j<i;++j)
			{
				win[i][j]=win[i-1][j]+Play(tj[i-j-1],qw[n-i]);//i?????j?????i????i-j-1???
				if (win[i][j]<win[i-1][j-1]+Play(tj[n-j],qw[n-i]))
					win[i][j]=win[i-1][j-1]+Play(tj[n-j],qw[n-i]);//i?????j?????i????j???
			}
			win[i][i]=win[i-1][i-1]+Play(tj[n-i],qw[n-i]);//?????
		}

		j=0;
		for (i=1;i<=n;++i)
			if (win[n][i]>win[n][j])
				j=i;

		cout<<win[n][j]*200<<endl;
	}

	return 0;
}