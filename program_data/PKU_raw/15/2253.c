//************************************
//*   ????                       *
//*   ??????                   *
//*   ?????2011?12?30?       *
//************************************


int main()
{
	int n, i, j, (*p)[101], x1, y1, x2, y2, flag1, flag2;
	int a[101][101];
	x1 = 0;
	y1 = 0;
	x2 = 0;
	y2 = 0;
	flag1 = 0;
	flag2 = 0;
	cin >> n;
	p = a;
	for(i = 0; i < n; i ++)
	{
		for(j = 0; j < n; j ++)
		{
			cin >> a[i][j];
		}
	}
	for(i = 0; i < n; i ++)
	{
		for(j = 0; j < n; j ++)
		{
			if(*(*(p + i) + j) == 0)
			{
				x1 = i;
				y1 = j;
				flag1 = 1;
				break;
			}
		}
		if(flag1 == 1)
			break;
	}
	for(i = n - 1; i >= 0; i --)
	{
		for(j = n - 1; j >= 0; j --)
		{
			if(*(*(p + i) + j) == 0)
			{
				x2 = i;
				y2 = j;
				flag2 = 1;
				break;
			}
		}
		if(flag2 == 1)
			break;
	}
	cout << (x2 - x1 - 1) * (y2 - y1 - 1) << endl;
	return 0;
}