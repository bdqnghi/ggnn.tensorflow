//*************************************************
//*3ìDò?oàyìa(11.8) &#207;&#184;&#190;ú?&#196;·±&#214;3ó&#235;à&#169;é?              *
//*D&#213;&#195;&#251;?oo&#206;&#212;&#198;&#198;e                                   *
//*&#209;§o&#197;?o1300012888                               *
//*è&#213;&#198;ú?o2013.12.9                                *
//*************************************************

void change(int a,int area[][11],int area0[][11])
{
	int i, j;
	if(a == 0)
		return;
	else
	{
		for(i = 1;i <= 9;i ++)
		{
	    	for(j = 1;j <= 9;j ++)
		    	area0[i][j] = area[i][j];
		}
		for(i = 1;i <= 9;i ++)
		{
	    	for(j = 1;j <= 9;j ++)
			{
		    	area0[i][j] += area[i][j];
				area0[i - 1][j] += area[i][j];
				area0[i + 1][j] += area[i][j];
				area0[i][j - 1] += area[i][j];
				area0[i][j + 1] += area[i][j];
				area0[i + 1][j + 1] += area[i][j];
				area0[i - 1][j - 1] += area[i][j];
				area0[i + 1][j - 1] += area[i][j];
				area0[i - 1][j + 1] += area[i][j];
			}
		}
		for(i = 1;i <= 9;i ++)
		{
	    	for(j = 1;j <= 9;j ++)
		    	area[i][j] = area0[i][j];
		}
		change(a - 1,area,area0);
	}
}

int main()
{
	int area[11][11], area0[11][11], i, j;
	int num, day;

	cin >> num >> day;
	memset(area, 0, sizeof(area));
	memset(area0, 0, sizeof(area0));
	area[5][5] = num;
	change(day, area, area0);
	for(i = 1;i <= 9;i ++)
	{
		for(j = 1;j <= 9;j ++)
		{
			if(j == 1)
				cout << area[i][j];
			else
			    cout << " " << area[i][j];
		}
		cout << endl;
	}

	return 0;
}