
int main()
{
	int t,j,ans,n,m,i;
	int stop[61] = {0};
	cin >> n;
	while (n > 0)
	{	n--;
		cin >> m;
		if (m == 0) 
			cout << 60 << endl;
		else
		{	for (i = 0; i < m; i++)
				cin >> stop[i];
			t = 1; ans = 0; j = 0;
			while (t <= 60)
			{	if (j == m) 
				{	ans = ans + 61 - t;
					break;
				}
				if (ans != stop[j])
					ans++;
				else
				{
					t += 2;
					j++;
				}
				t++;
			}
			cout << ans << endl;
		}
	}
	cin >> i;
	return 0;
}
