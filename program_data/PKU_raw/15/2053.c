
int a[1001][1001];

int main()	{
	int n;
	cin >> n;
	int i, j;
	for(i = 0; i < n; ++i)	{
		for(j = 0; j < n; ++j)	{
			cin >> a[i][j];
		}
	}
	int sx, sy, ex, ey, flag = 0;
	for(i = 0; i < n; ++i)	{
		for(j = 0; j < n; ++j)	{
			if(a[i][j] == 0 && flag == 0)	{
				sx = i;
				sy = j;
				flag = 1;
			}
			else if(a[i][j] == 0 && flag == 1)	{
				ex = i;
				ey = j;
			}
		}
	}
	sx += 1; sy += 1; ex-= 1; ey -= 1;
	int sum = (ex-sx+1)*(ey-sy+1);
	cout << sum << endl;
	return 0;
}