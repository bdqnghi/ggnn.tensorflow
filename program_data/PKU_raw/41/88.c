int main()
{
	int a[6],i,m = 0,flag;
	char cc[6];
	for(a[1] = 1;a[1] <= 5;a[1]++)
	{
		for(a[2] = 1;a[2] <= 5;a[2]++)
		{
			for(a[3] = 1;a[3] <= 5;a[3]++)
			{
				for(a[4] = 1;a[4] <= 5;a[4]++)
				{
					a[5] = 15 - a[1] - a[2] - a[3] - a[4];
					if(a[1] * a[2] * a[3] * a[4] * a[5] == 120)
					{
						if(a[5] != 2 && a[5] != 3)
						{
							cc[1] = (a[5] == 1);
							cc[2] = (a[2] == 2);
							cc[3] = (a[1] == 5);
							cc[4] = (a[3] != 1);
							cc[5] = (a[4] == 1);
							if(cc[1] + cc[2] + cc[3] + cc[4] + cc[5] == 2)
							{
								for(i = 1;i <= 5;i++)
								{
									flag = 1;
									if(a[i] == 1 || a[i] == 2)
										if(cc[i] == 0)
										{
											flag = 0;
											break;
										}
								}
								if(flag)
								{
									for(i = 1;i <= 4;i++)
										cout << a[i] << ' ';
									cout << a[5];
								}
							}
						}
					}
				}
			}
		}
	}
	return 0;
}