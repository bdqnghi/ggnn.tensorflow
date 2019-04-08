int main ( )
{
	int i, j, k, l, rank[6] = {0};
	for (i = 1;i <= 5;i++)
	{
		rank[1] = i; 
		for (j = 1;j <= 5;j++)
		{
			if (j == i)
				continue;
			else
			{
				rank[2] = j;
				for (k = 1;k <= 5;k++)
				{
					if (k == i || k == j)
						continue;
					else
					{
						rank[3] = k;
						for (l = 1;l <= 5;l++)
						{
							if (l == i || l == j || l == k)
								continue;
							else
							{
								rank[4] = l;
								rank[5] = 15 - rank[1] - rank[2] - rank[3] - rank[4];
								if(((rank[1] == 1||rank[1] == 2)^(rank[5] == 1) == 0) &&
									((rank[2] == 1||rank[2] == 2)^(rank[2] == 2) == 0) && 
									((rank[3] == 1||rank[3] == 2)^(rank[1] == 5) == 0) &&
									((rank[4] == 1||rank[4] == 2)^(rank[3] != 1) == 0) &&
									((rank[5] == 1||rank[5] == 2)^(rank[4] == 1) == 0)
									&&(rank[5] != 2)&&(rank[5] != 3)) 
								{
									cout <<rank[1]<<' '<<rank[2]<<' '<<rank[3]<<' '<<rank[4]<<' '<<rank[5]<<endl;
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