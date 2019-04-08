int main()
{
	const int max = 100;
	int row, col, i, j;
	cin >> row;
	cin >> col;
	int num[max + 2][max + 2];
	for(i = 0; i < max + 2; i++)
	{
		for(j = 0; j < max + 2; j++)
		{
			num[i][j] = -1;
		}
	}
	for(i = 1; i <= row; i++)
	{
		for(j = 1; j <= col; j++)
		{
			cin >> num[i][j];
		}
	}
	int flag = 0;
	int maxnum = row * col;
	int count = 0;
	i = 1;
	j = 1;
	while(1)
	{
		if(flag == 0)
		{			
			while(num[i][j] != -1)
			{
				cout << num[i][j] << endl;
				num[i][j] = -1;
				count++;
				j++;
			}
			j--;
			i++;
			flag = 1;
		}
		else
		{
			if(flag == 1)
			{
				while(num[i][j] != -1)
				{
					cout << num[i][j] << endl;
					num[i][j] = -1;
					count++;
					i++;
				}
				i--;
				j--;
			    flag = 2;
			}
			else {
				if(flag == 2)
				{
					while(num[i][j] != -1)
					{
						cout << num[i][j] << endl;
						num[i][j] = -1;
						count++;
						j--;
					}
					j++;
					i--;
					flag = 3;
				}
				else
				{
					while(num[i][j] != -1)
					{
						cout << num[i][j] << endl;
						num[i][j] = -1;
						count++;
						i--;
					}
					i++;
					j++;
					flag = 0;
				}
			}
		}
		if(count == maxnum) break;
	}
	return 0;
}