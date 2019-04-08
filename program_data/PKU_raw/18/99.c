/**
* ??
* 2010?12?4
* ?????????
*/
int a[100][100];
void guiling(void);  //??????????????0
void xiaojian(int);  //????????????????-1?????????????
int g_n;  //???????
int main ()
{
	cin >> g_n;
	int i, j, k;
	for (i = 1; i <= g_n ;i++)
	{
		for (j = 0; j <= g_n - 1; j++)
		{
			for (k = 0; k <= g_n - 1; k++)
			{
				cin >> a[j][k];
			}
		}  //????
	int cishu = 1;  //??????????????cishu????
	int sum = 0;
	for (;a[g_n - 1][0] >= 0; cishu++) //????????
	{
		guiling();   //????
		sum = sum + a[cishu][cishu];  
		xiaojian(cishu);
	}
	cout << sum << endl;  //????
	}
	return 0;
}

void guiling()
{
	int i = 0, j = 0, k = 0;
	int flag = 0;
	int min = 1000;
	int p = 0;
	for (p = 0; p <= g_n - 1; p++)  
	{
		flag = 0;
		min = 1000;
		if (a[p][0] >= 0) //????????????
		{
			for (i = 0; i <= g_n - 1; i++) //????
			{
				flag = 0;
				min = 1000;
				for (j = 0; j <= g_n - 1; j++)
				{
					if (a[i][j] < 0) //??????????????
						continue;
					if (a[i][j] == 0)  //???????????
					{
						flag = 1;
						break;
					}
					if (a[i][j] < min)
						min = a[i][j];
				}
				if (!flag)  //??
				{
					for (k = 0; k <= g_n - 1; k++)
					{
						a[i][k] = a[i][k] - min;
					}
				}
			}
			for (j = 0; j <= g_n - 1; j++) //???????
			{
				flag = 0;
				min = 1000;
				for (i = 0; i <= g_n - 1; i++)
				{
					if (a[i][j] < 0)  //??????????????
						continue;
					if (a[i][j] == 0)  //???????????
					{
						flag = 1;
						break;
					}
					if (a[i][j] < min)
						min = a[i][j];
				}
				if (!flag)  //??
				{
					for (k = 0; k <= g_n - 1; k++)
					{
						a[k][j] = a[k][j] - min;
					}
				}
			}
		}
	}
}
void xiaojian(int cishu)
{
	int i, j;
	for (i = 0; i <= g_n - 1; i++)  //???cishu??????????
	{
		a[i][cishu] = -1;
	}
	for (j = 0; j <= g_n - 1; j++)
	{
		a[cishu][j] = -1;
	}
}
