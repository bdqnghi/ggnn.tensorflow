const int N = 1001;
int n;
int tj[N],qw[N];
int x,y,a,b,ans;
void fight(int s, int t)
{
	if (tj[s] < qw[t])
		ans--;
	else if (tj[s] > qw[t])
		ans++;
}
int main()
{
	while (cin >> n)
	{
		if (n == 0) break;
		for (int i = 0; i < n; i++)
			cin >> tj[i] ;
		for (int i = 0; i < n; i++)
			cin >> qw[i];
		sort(tj,tj+n);
		sort(qw,qw+n);
	
		x = a = 0;
		y = b = n-1;
		ans = 0;

		for(int i = 0; i < n ; i++)
		{
			if (qw[y] < tj[b])
				fight(b--,y--);
			else if (qw[y] > tj[b])
				fight(a++,y--);
			else
			{
				if (qw[x] >= tj[a])
					fight(a++,y--);
				else if (qw[x] < tj[a])
					fight(a++,x++);
			}
		}
		cout << ans * 200 << endl;
	}
}
