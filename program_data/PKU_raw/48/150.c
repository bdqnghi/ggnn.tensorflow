int m, n;
int s[9][9];
struct NUM
{
	int x;
	int y;
	int temp;
}ex[81];
void zhou(int,int,int);
int main()
{
	cin >> m >> n;
	for (int i = 0; i < 9; i++)
		for (int j = 0; j < 9; j++)
			s[i][j] = 0;
	s[4][4] = m;
	int p = 0;
	for (int t = 1; t <= n; t++)
	{
		for (int i = 0; i < 9; i++)
			for (int j = 0; j < 9 ;j++)
			{
				if (s[i][j] != 0)
				{
					int temp = s[i][j] * 8;
					s[i][j] = 2 * s[i][j];
					ex[p].x = i;
					ex[p].y = j;
					ex[p].temp = temp;
					p++;					
				}
			}
	
			for (int i = 0 ; i < p; i++)
			{
				zhou(ex[i].x,ex[i].y,ex[i].temp);
			}
			p = 0;
	}
	for (int i =0; i < 9; i++)
	{
		for (int j = 0; j < 9 ; j++)
		{
			if (j == 0)
				cout << s[i][j];
			else
				cout << " " << s[i][j];
		}
		cout << endl;
	}
	return 0;
}
void zhou(int x, int y,int num)
{
	int xd[8] = {0,0,1,-1,-1,1,1,-1};
	int yd[8] = {1,-1,0,0,-1,1,-1,1};
	int sum = 0;
	for (int i = 0; i < 8 ;i++)
	{
		int nx = x + xd[i];
		int ny = y + yd[i];
		if (nx >= 0 &&nx < 9 && ny >= 0 && ny < 9)
			sum++;
	}
	for (int i = 0; i < 8 ;i++)
	{
		int nx = x + xd[i];
		int ny = y + yd[i];
		if (nx >= 0 &&nx < 9 && ny >= 0 && ny < 9)
			s[nx][ny] += num / sum;
	}
}



