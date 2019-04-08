
int main()
{
	int num[110],m,ni = 0,n = 0,maxn[30]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
	char au[110][30],max[30];
	cin >> m;
	
		int i,j;
		for (i = 0; i < m; i ++)
		{
			cin >> num[i];
			cin >> au[i];
		}
		for (i = 0; i < m; i ++)
		{
			for (j = 0; au[i][j] != '\0';j++)
			{
				if (au[i][j] == 'A')  maxn[0] ++;
				if (au[i][j] == 'B')  maxn[1] ++;
				if (au[i][j] == 'C')  maxn[2] ++;
				if (au[i][j] == 'D')  maxn[3] ++;
				if (au[i][j] == 'E')  maxn[4] ++;
				if (au[i][j] == 'F')  maxn[5] ++;
				if (au[i][j] == 'G')  maxn[6] ++;
				if (au[i][j] == 'H')  maxn[7] ++;
				if (au[i][j] == 'I')  maxn[8] ++;
				if (au[i][j] == 'J')  maxn[9] ++;
				if (au[i][j] == 'K')  maxn[10] ++;
				if (au[i][j] == 'L')  maxn[11] ++;
				if (au[i][j] == 'M')  maxn[12] ++;
				if (au[i][j] == 'N')  maxn[13] ++;
				if (au[i][j] == 'O')  maxn[14] ++;
				if (au[i][j] == 'P')  maxn[15] ++;
				if (au[i][j] == 'Q')  maxn[16] ++;
				if (au[i][j] == 'R')  maxn[17] ++;
				if (au[i][j] == 'S')  maxn[18] ++;
				if (au[i][j] == 'T')  maxn[19] ++;
				if (au[i][j] == 'U')  maxn[20] ++;
				if (au[i][j] == 'V')  maxn[21] ++;
				if (au[i][j] == 'W')  maxn[22] ++;
				if (au[i][j] == 'X')  maxn[23] ++;
				if (au[i][j] == 'Y')  maxn[24] ++;
				if (au[i][j] == 'Z')  maxn[25] ++;
			}
		}
		for (i = 0; i < 26; i ++)
		{
			if (maxn[i] > n) {n = maxn[i];ni = i;}
		}
		cout << (char)(ni+65) << endl;
		cout << n << endl;
		for (i = 0 ; i < m; i ++)
		{
			for ( j = 0;au[i][j] != '\0';j ++)
			{
				if (au[i][j] == 65+ni)  cout << num[i] << endl;
			}
		}
	
	return 0;
}