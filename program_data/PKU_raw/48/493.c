//****************************************
//*???????????               **
//*?????? 1100012763              **
//*???2011.11.23                     **
//****************************************
int zou[2][8]={{-1,-1,-1,0,1,1,1,0},
               {-1,0,1,1,1,0,-1,-1}};
int day;
int flag[9][9] , map[9][9] , stack[9][9]; 
 
void flood(int count)
{
	int i , j , k , x , y;
	if (count <= day)
	{
		for (i = 0; i <= 8; i++)
		{
			for (j = 0; j <= 8; j++)
                if (map[i][j] > 0)
				{
					flag[i][j] = 1;
					stack[i][j] = map[i][j];
				}
		}
		for (i = 0; i <= 8; i++)
		{
			for (j = 0; j <= 8; j++)
			{
				if (flag[i][j] > 0)
				{
				    for (k = 0; k <= 7; k++)
					{
					    x = i + zou[0][k];
					    y = j + zou[1][k];
					    if (x < 0 || y < 0 || x > 8 || y > 8)
						    continue;
					    map[x][y] = map[x][y] + stack[i][j];
					}
				    map[i][j] = map[i][j] + 2 * stack[i][j];
					map[i][j] = map[i][j] - stack[i][j];
				}
			}
		}
		flood(count + 1);
	}
}

int main() 
{
	int i , j , num;
	cin >> num >> day;
    for (i = 0; i <= 8; i++)
		for (j = 0; j <= 8; j++)
		{
			map[i][j] = 0;
			flag[i][j] = 0;
			stack[i][j] = 0;
		}
    map[4][4] = num;
	flood(1);

	for (i = 0; i <= 8; i++)
	{
		if (i > 0)
			cout << endl;
		for (j = 0; j <= 8; j++)
		{
			if (j > 0)
				cout << ' ';
			cout << map[i][j];
		}
	}

	return 0;
}
