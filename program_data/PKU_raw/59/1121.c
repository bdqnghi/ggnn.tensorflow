
char state[110][110] = {0};
int n;

void ill(int m)
{
	if(m == 1) return;
	else
	{
		char state2[110][110] = {0};
		for(int i = 1; i <= n; i++)
			for(int j = 1; j <= n; j++)
				state2[i][j] = state[i][j];
		for(int i = 1; i <= n; i++)
			for(int j = 1; j <= n; j++)
			{
				if(state2[i][j] == '@')
				{
					if(state[i - 1][j] == '.') state[i - 1][j] = '@';
					if(state[i + 1][j] == '.') state[i + 1][j] = '@';
					if(state[i][j - 1] == '.') state[i][j - 1] = '@';
					if(state[i][j + 1] == '.') state[i][j + 1] = '@';
				}
			}
		ill(m - 1);
	}

}
int main() {
	cin >> n;
	for(int i = 1; i <= n ; i++)
		for(int j = 1; j <= n; j++)
			cin >> state[i][j];
	int m;
	cin >> m;
	ill(m);
	int sum = 0;
	for(int i = 1; i <= n; i++)
		for(int j = 1; j <= n; j++)
			if(state[i][j] == '@')
				sum++;
	cout << sum << endl;

	return 0;
}