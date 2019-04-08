/*  */
/*author:???*/
/* time:2011.12.30*/



int main()
{
	int n, i, j, *p = NULL, mianji;
	int zhongliu[1000][1000];
	int zuoshang[2], youxia[2];
	p = zhongliu[0];
	cin >> n;
	for(i = 0; i < n; i++)
		for(j = 0; j < n; j++)
		{
			cin >> *(p + i * n + j);
		}
	for(i = 0; i < n; i++)
		for(j = 0; j < n; j++)
		{
			if(*(p + i * n + j) == 0 && *(p + i * n + j + 1) == 0 && *(p + (i + 1) * n + j) == 0
				&& j + 1 < n && i + 1 < n)
			{
				zuoshang[0] = i;
				zuoshang[1] = j;
			}
			else if(*(p + i * n + j) == 0 && *(p + i * n + j - 1) == 0 && *(p + (i - 1) * n + j) == 0
				&& j - 1 > 0 && i - 1 > 0)
			{
				youxia[0] = i;
				youxia[1] = j;
			}
		}
	mianji = (youxia[0] - zuoshang[0] - 1) * (youxia[1] - zuoshang[1] - 1);
	cout << mianji << endl;
	return 0;
}