

int main()
{
    int c[100],i,j = 0,sum = 0,q = 0,k1,k2,b[10];
	for (c[5] = 1; c[5]<=5;c[5]++ )
	{
		if (c[5] == 2 || c[5] == 3)
			continue;
		for (c[1] = 3; c[1]<= 5; c[1]++)
		{
			if(c[1] == c[5])
				continue;
			for (c[2] = 1; c[2]<= 5; c[2]++)
			{
				if(c[1] == c[2] || c[2] == c[5])
				continue;
				for (c[3] = 1; c[3]<= 5; c[3]++)
				{
					if(c[3] == c[2] || c[3] == c[5] || c[3] == c[1])
				         continue;
					for (c[4] = 1; c[4]<= 5; c[4]++)
					{
						if(c[4] == c[2] || c[4] == c[5] || c[4] == c[1] || c[4] == c[3])
				            continue;
						for (i = 1; i <= 5; i++)
						{
							if (c[i] == 1)
								k1 = i;
							if (c[i] == 2)
								k2 = i;
						}
						b[1] = (c[5] == 1);
						b[2] = (c[2] == 2);
						b[3] = (c[1] == 5);
						b[4] = (c[3] != 1);
						b[5] = (c[4] == 1);
						if (b[k1] == 1 && b[k2] == 1)
						{
							sum = 0;
							for (i = 1; i <= 5; i++)
							{
								sum = sum + b[i];
							}
							if (sum == 2)
							{
								q = 1;
							}
						}
						if (q == 1)
							break;
					}
					if (q == 1)
							break;
				}
				if (q == 1)
							break;
			}
			if (q == 1)
							break;
		}
		if (q == 1)
							break;
	}
	cout << c[1];
	for (i = 2; i <= 5; i++)
		cout << " " << c[i];
	return 0;
}

