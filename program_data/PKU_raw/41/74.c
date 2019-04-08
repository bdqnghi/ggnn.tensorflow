int main()
{
	int a[6];
	int b[6] , c[6];
	int i , j , flag = 0;
	for (b[1] = 1 ; b[1] <= 5 ; b[1]++)
	{
		for (b[2] = 1 ; b[2] <= 5 ; b[2]++)
		{
			if (b[2] == b[1])
			{
				continue;
			}
			for (b[3] = 1 ; b[3] <= 5 ; b[3]++)
			{
				if ((b[3] == b[2])||(b[3] == b[1]))
				{
					continue;
				}
				for (b[4] = 1 ; b[4] <= 5 ; b[4]++)
				{
					if ((b[4] == b[1])||(b[4] == b[2])||(b[4] == b[3]))
					{
						continue;
					}
					b[5] = 15 - b[1] - b[2] - b[3] - b[4];
					if ((b[5] == 2)||(b[5] == 3))
					{
						continue;
					}
					for (i = 1 ; i <= 5 ; i++)
					{
						for (j = 1 ; j <= 5 ; j++)
						{
							if (b[i] == j)
							{
								a[j] = i;
							}
						}
					}
					c[1] = (b[5] == 1);
					c[2] = (b[2] == 2);
					c[3] = (b[1] == 5);
					c[4] = (b[3] != 1);
					c[5] = (b[4] == 1);
					if (((c[a[1]] + c[a[2]]) == 2)&&((c[a[3]] + c[a[4]] + c[a[5]]) == 0))
					{
						cout << b[1];
						for (i = 2 ; i <= 5 ; i++)
						{
							cout << ' ' << b[i];
						}
						cout << endl;
						flag = 1;
						break;
					}
				}
				if (flag)
				{
					break;
				}
			}
			if (flag)
			{
				break;
			}
		}
		if (flag)
		{
			break;
		}
	}
    return 0;
}

