int main()
{
	int k, s, i, j, flag2 = 0;
	int x[6][6];
	for (i = 0; i < 5; i ++)
		for (j = 0; j < 5; j ++)
			cin >> x[i][j];
	int (*p)[6] = x;
	int xx, yy;
	for (k = 0; k < 5; k ++)
		for (s = 0; s < 5; s ++)
		{
			int flag = 1;
			for (i = 0; i < 5; i ++)
				if (*(*(p + k) + i) > *(*(p + k) + s) || *(*(p + i) + s) < *(*(p + k) + s))
					flag = 0;
			if (flag)
			{
				flag2 = 1;
				xx = k;
				yy = s;
			}
		}
	if (flag2)
		cout << xx + 1 << " " << yy + 1 << " " << *(*(p + xx) + yy) << endl;
	else
		cout << "not found" << endl;
	return 0;

}