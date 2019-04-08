//****************************************
//*???????                       **
//*?????? 1100012763              **
//*???2011.12.24                     **
//****************************************
int main() 
{
	short int map[1001][1001];
	int n , i, j , bx , by , ex , ey , ans;

	cin >> n;
	for (i = 1; i <= n; i++)
		for (j = 1; j <= n; j++)
			cin >> map[i][j];
	for (i = 2; i < n; i++)
		for (j = 2; j < n; j++)
		{
			if (map[i][j] == 255)
			{
				if (map[i][j - 1] == 0 && map[i - 1][j] == 0)
				{
					bx = i;
					by = j;
				}
				if (map[i][j + 1] == 0 && map[i + 1][j] == 0)
				{
					ex = i;
					ey = j;
				}
				
			}
		}
	ans = (ex - bx + 1) * (ey - by + 1);
	cout << ans;
	return 0;
}

