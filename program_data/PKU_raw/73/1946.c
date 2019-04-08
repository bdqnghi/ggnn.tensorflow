int main ()
{
	int a[5][5];
	int flag[5] = {1,1,1,1,1};
	for (int i = 0; i < 5; i++)
		for (int j = 0; j < 5; j++)
			cin >> a[i][j];
		int andian = 0;
		int lie = 0;
		for (int p = 0; p < 5; p++)
		{
			andian = a[p][0];
			lie = 0;
			for (int q = 0; q < 5; q++)
			{
				if (andian < a[p][q])
				{
					andian = a[p][q];
					lie = q;
				}
			}
			for (int t = 0; t < 5; t++)
			{
				if (a[t][lie] < andian)
				{
					flag[p] = 0;
					break;
				}
			}
			if (flag[p] == 1)
				cout << p + 1 << " " << lie + 1 << " "  << andian << endl;
		}
		if (flag[0] == 0 && flag[1] == 0 && flag[2] == 0 && flag[3] == 0 && flag[4] == 0)
			cout << "not found" << endl;
		return 0;
}


