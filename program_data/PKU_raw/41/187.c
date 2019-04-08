int main()
{
	int a[5], sum = 0, mul = 1, r1 = 0, r2 = 0, i, bools = 0;
	int b[5];
	for (a[0] = 1; a[0] < 6; a[0]++)
		for (a[1] = 1; a[1] < 6; a[1]++)
			for (a[2] = 1; a[2] < 6; a[2]++)
				for (a[3] = 1; a[3] < 6; a[3]++)
					for (a[4] = 1; a[4] < 6; a[4]++)
					{
						b[0] = (a[4] == 1);
						b[1] = (a[1] == 2);
						b[2] = (a[0] == 5);
						b[3] = (a[2] != 1);
						b[4] = (a[3] == 1);
						for (i = 0; i < 5; i++)
						{
							 sum += a[i];
							 mul *= a[i];
							 if (a[i] == 1)
								r1 = i;
							 else if (a[i] == 2)
								r2 = i;
							 else 
								bools += b[i];
						}
						if ((sum == 15 && mul == 120) && b[r1] + b[r2] == 2 && bools == 0 && a[4] != 2 && a[4] != 3)
						{
							for (i = 0; i < 5; i++)
							{
								if (i != 0)cout << " ";
								cout << a[i];
							}
						}
						sum = 0;
						mul = 1;
						bools = 0;
					}
	return 0;
}


