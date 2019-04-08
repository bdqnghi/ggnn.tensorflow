int main()
{
	// ????????
	// ????????
	int i, j, k, l, m, n, flag, sum, p, q;
	int mc[6] = {0};
	int pd[6] = {0};
	for (mc[1] = 1; mc[1] <= 5; mc[1]++)
	{
		for (mc[2] = 1; mc[2] <= 5; mc[2]++)
		{
			if (mc[1] == mc[2]) continue;
			for (mc[3] = 1; mc[3] <= 5; mc[3]++)
			{
				if ((mc[3] == mc[2]) || (mc[3] == mc[1])) continue;
				for (mc[4] = 1; mc[4] <= 5; mc[4]++)
				{
					if ((mc[4] == mc[1]) || (mc[4] == mc[2]) || (mc[4] == mc[3])) continue;
					for (mc[5] = 1; mc[5] <= 5; mc[5]++)
					{
						if ((mc[5] == mc[1]) || (mc[5] == mc[2]) || (mc[5] == mc[3]) || (mc[5] == mc[4]))continue ;
						pd[1] = (mc[5] == 1 );
						pd[2] = (mc[2] == 2 );
						pd[3] = (mc[1] == 5);
						pd[4] = (mc[3] != 1) ;
						pd[5] = (mc[4] == 1); 
						flag = 0;
						sum = 0;
						for (j = 1; j <= 5; j++)
						{
							sum = sum + pd[j];
						}
						if (sum == 2)
						{
							for (i = 1; i <= 5; i++)
							{
								if (mc[i] == 1) p = i;
								if (mc[i] == 2) q = i;
							}
							if ((pd[p] == 1) && (pd[q] == 1) && (mc[5] != 2) && (mc[5] != 3)) 
							{
								cout << mc[1];
								for (i = 2; i <= 5; i++)
									cout << " " << mc[i];
								cout << endl;
							}
						}
					}
				}
			}
		}
	}
	return 0;
}