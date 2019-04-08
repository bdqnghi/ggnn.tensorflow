/*
* ????1000012865_1
* ??????
* ???2010-11-5
* ???????
*/
int main()
{
	const int line = 6, list = 6;
	int n[line][list];
	int i,j,m,max,maxline,maxlist,k = 0,t[6] = {0};
	for(i = 1; i <= 5; i++)
		for(j = 1; j <= 5; j++)
			cin >> n[i][j];
	for(i = 1; i <= 5; i++)
	{
		max = n[i][1];
		maxline = i;
		maxlist = 1;
		for(j = 1; j <= 5; j++)
		{
			k = 0;
			if(n[i][j] > max)
			{
				max = n[i][j];
				maxline = i;
				maxlist = j;
			}
			if(j == 5)
			{for(m = 1; m <= 5; m++)
				{
					if(m != maxline && n[m][maxlist] < max)
					{
						k = 1;
						break;
					}
				}
				if(k == 0)
				{
					cout << maxline << ' ' <<  maxlist << ' ' << n[maxline][maxlist] << endl;
					t[maxline] = 1;
				}
			}
		}
	}
	if(t[1] + t[2] + t[3] + t[4] + t[5] == 0)
		cout << "not found" << endl;
	return 0;
}