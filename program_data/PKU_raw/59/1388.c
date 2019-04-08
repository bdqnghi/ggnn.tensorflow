//********************************
//*???????    **
//*?????? 1300012855 **
//*???2013.11.1  **
//********************************


int main(void)
{
	char room[100][100];
	int n, m; // ???n*n??????m?
	int pnum = 0; // ?????
	cin >> n;
	for(int i = 0; i < n; i++)
		for(int j = 0; j < n; j++)
			cin >> room[i][j]; // ????
	cin >> m;
	for(int k = 1; k < m; k++) // ??m-1?
	{
		for(int i = 0; i < n; i++)
			for(int j = 0; j < n; j++)
			{
				if(room[i][j] == '@') // ????
				{
					if(i + 1 < n && room[i + 1][j] == '.') room[i + 1][j] = 'x'; // ????x????????????????
					if(i - 1 >= 0 && room[i - 1][j] == '.') room[i - 1][j] = 'x'; 
					if(j + 1 < n && room[i][j + 1] == '.') room[i][j + 1] = 'x';
					if(j - 1 >= 0 && room[i][j - 1] == '.') room[i][j - 1] = 'x'; 
				}
			}
		for(int i = 0; i < n; i++)
			for(int j = 0; j < n; j++)
				if(room[i][j] == 'x') room[i][j] = '@'; // ?x?????@??
	}
	for(int i = 0; i < n; i++)
		for(int j = 0; j < n; j++)
			if(room[i][j] == '@') pnum++; // ?????
	cout << pnum;
	return 0;
}