int data[2][1000];
int cmp(const void * e1,const void * e2)
{
	int * p1 = (int *)e1;
	int * p2 = (int *)e2;
	return *p2 - *p1;
}
int main()
{
	int n;int ans;
	while(cin >> n && n != 0)
	{
		ans = 0;
		for(int i = 0;i < n;i ++)
			cin >> data[0][i];
		for(int i = 0;i < n;i ++)
			cin >> data[1][i];
		qsort(data[0],n,sizeof(int),cmp);
		qsort(data[1],n,sizeof(int),cmp);
		int b[2],e[2];
		b[0] = b[1] = 0;e[0] = e[1] = n-1;
		while(b[0]<=e[0])
		{
			if(data[0][b[0]] > data[1][b[1]])
			{
				b[0]++;b[1]++;
				ans += 200;
			}
			else
			{
				for(;data[0][e[0]] > data[1][e[1]];e[0]--,e[1]--,ans += 200);
				if(data[0][e[0]] < data[1][b[1]])	ans -= 200;
				b[1]++;e[0]--;
			}
		}
		cout << ans << endl;
	}
	return 0;
}