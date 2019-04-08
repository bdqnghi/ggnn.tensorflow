//*************************
//*??:???????? **
//*??:??? 1300013007**
//*??:2013.12.6        **
//*************************


int bacteria[11][11] = {0}, flag[11][11] = {0}, add[11][11] = {0};

void reproduce(int x, int y)
{
	if(x > 1)  add[x-1][y] += (bacteria[x][y] / 2);
	if(x < 9)  add[x+1][y] += (bacteria[x][y] / 2);
	if(y > 1)  add[x][y-1] += (bacteria[x][y] / 2);
	if(y < 9)  add[x][y+1] += (bacteria[x][y] / 2);
	if(x > 1 && y > 1)	add[x-1][y-1] += (bacteria[x][y] / 2);
	if(x < 9 && y < 9)  add[x+1][y+1] += (bacteria[x][y] / 2);
	if(x > 1 && y < 9)	add[x-1][y+1] += (bacteria[x][y] / 2);
	if(x < 9 && y > 1)	add[x+1][y-1] += (bacteria[x][y] / 2);
}

int main()
{
	int m, n;
	int i, j, k;
	cin >> m >> n;     //m???????????,n???????
	bacteria[5][5] = m;
	for(i = 1; i <= n; i++)
	{
		for(j = 1; j <= 9; j++)
			for(k = 1; k <= 9; k++)
				if(bacteria[j][k] != 0)
				{
					flag[j][k] = 1;
					bacteria[j][k] *= 2;
				}
		for(j = 1; j <= 9; j++)
			for(k = 1; k <= 9; k++)
				if(flag[j][k] != 0)
				{
					flag[j][k] = 0;
					reproduce(j, k);
				}
		for(j = 1; j <= 9; j++)
			for(k = 1; k <= 9; k++)
			{
				bacteria[j][k] += add[j][k];
				add[j][k] = 0;
			}	
	}
	for(j = 1; j <= 9; j++)
		for(k = 1; k <= 9; k++)
		{
			if(k == 1)
				cout << bacteria[j][k];
			else
			{
				cout << ' ' <<  bacteria[j][k];
				if(k == 9)
					cout << endl;
			}
		}
	return 0;
}