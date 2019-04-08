/**
* @file 1.cpp
* @author ???
* @date 2011-10-26
* @description
* ??????:????
*/
int main()
{
	int a[6][6], i, j, k, l, hang, lie;
	int ct = 0, ctl, ad;
	for (i = 1; i <= 5; i++)
	{
		for (j = 1; j <= 5; j++)
			cin >> a[i][j];
	}
	for (hang = 1; hang <= 5; hang++)
	{
		ad = a[hang][1];
		l = 1;
		ctl = 0;
		for (lie = 1; lie <= 5; lie++)
		{
			if (a[hang][lie] > ad)
			{
				ad = a[hang][lie];
				l = lie;
			}
		}
		for (k = 1; k <= 5; k++)
		{
			if (ad < a[k][l])
				ctl++;
		}
		if (ctl == 4)
		{
			cout << hang << ' ' << l << ' ' <<a[hang][l];
			ct++;
		}
	}
	if (ct == 0)
		cout << "not found";
	return 0;
}