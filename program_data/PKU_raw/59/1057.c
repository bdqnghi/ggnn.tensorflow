
int judge(int x,int k)
{
	if(x == -1)
		return k+1;
	else
		return x;
}

int main()
{
	int n,m, a[110][110] ={0},k=1,sum = 0,i,j;
	char t;
	cin >>n;
	for(i=1;i<=n;i++)
		for(j=1;j<=n;j++)
		{
			cin >> t;
			switch(t)
			{
			case '.': a[i][j] = -1;break;
			case '#': a[i][j] = 0;break;
			case '@': a[i][j] = 1;break;

			}
		}
	cin >>m;
	while(k < m)
	{
		for(i=1;i<=n;i++)
			for(j=1;j<=n;j++)
			{
				if(a[i][j] > 0 && a[i][j] != k+1)
				{
					a[i-1][j]=judge(a[i-1][j],k);
					a[i][j-1]=judge(a[i][j-1],k);
					a[i+1][j]=judge(a[i+1][j],k);
					a[i][j+1]=judge(a[i][j+1],k);
				}
			}
		k++;
	}
	for(i=1;i<=n;i++)
		for(j=1;j<=n;j++)
			if(a[i][j]>0)
				sum++;
	cout << sum << endl;

	return 0;
}
