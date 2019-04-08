int j, k, bec[9][9] = {0}, tempbec[9][9] = {0};
void increase(int bec[][9])
{
	bec[j - 1][k] += tempbec[j][k];
	bec[j - 1][k - 1] += tempbec[j][k];
	bec[j - 1][k + 1] += tempbec[j][k];
	bec[j][k - 1] += tempbec[j][k];
	bec[j][k + 1] += tempbec[j][k];
	bec[j + 1][k - 1] += tempbec[j][k];
	bec[j + 1][k] += tempbec[j][k];
	bec[j + 1][k + 1] += tempbec[j][k];
}



int main()
{
	int m, n, i = 0, num = 1;
	cin >> m >> n;
	bec[4][4] = m;
	for (i = 0; i < n; i++)
	{
		for(j = 0; j < 9; j++)
			for(k = 0; k < 9; k++)
			{
				tempbec[j][k] = bec[j][k];
				bec[j][k] = bec[j][k] * 2;
				
			}
		for (j = 1; j < 8; j++)
			for(k = 1; k < 8; k++)
				increase (bec);
	}
	for (j = 0; j < 9; j++)
			for (k = 0; k < 9; k++)
			{
				if(num % 9 == 1)
					cout << bec[j][k];
				if(num % 9 == 0)
					cout << " " << bec[j][k] << "\n";
				if(num % 9 != 0 && num % 9 != 1)
					cout << " " << bec[j][k];
				num++;
				
			}
	

	return 0;
}

