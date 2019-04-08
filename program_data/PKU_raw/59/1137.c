
char a[110][110];
int n;
int dx[]={-1, 1, 0, 0}, dy[]={0, 0, 1, -1};

int main()
{
	int m, count=0;
	cin >> n;
	int i, j, k;
	for(i=0 ; i<110 ; i++)
		for(j=0 ; j<110 ; j++)
			a[i][j]='#';
	for(i=1 ; i<=n ; i++)
		for(j=1 ; j<=n ; j++)
			cin >> a[i][j];
	cin >> m;
	m--;
	while(m)
	{
		char t[110][110];
		memcpy(t, a, sizeof(a));
		for(i=1 ; i<=n ; i++)
			for(j=1 ; j<=n ; j++)
				if(a[i][j] == '@')
					for(k=0 ; k<4 ; k++)
						if(a[i+dx[k]][j+dy[k]] == '.')
							t[i+dx[k]][j+dy[k]]='@';
		memcpy(a, t, sizeof(a));
		m--;
	}
	for(i=1 ; i<=n ; i++)
		for(j=1 ; j<=n ; j++)
			if(a[i][j] == '@')
				count++;
	cout << count << endl;
}