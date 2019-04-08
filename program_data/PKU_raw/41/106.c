int main()
{
	int a[6] = {0},b[6] = {0};//a??????b?????
	int i,flag = 1;
	int a1,a2,a3,a4;//????
	for (a1 = 1;a1 <= 5;a1++)
	{
		a[1] = a1;
		for (a2 = 1;a2 <= 5;a2++)
		{
			if (a2 == a1)
				continue;
			a[2] = a2;
			for (a3 = 1;a3 <= 5;a3++)
			{
				if (a3 == a1 || a3 == a2)
					continue;
				a[3] = a3;
				for (a4 = 1;a4 <= 5;a4++)
				{
					flag = 1;
					if (a4 == a1 || a4 == a2 || a4 == a3)
						continue;
					a[4] = a4;
					a[5] = 15 - a1 - a2 - a3 - a4;
					if (a[5] == a1 || a[5] == a2 || a[5] == a3 || a[5] == a4 || a[5] == 2 ||a[5] == 3)
						continue;
					b[1] = (a[5] == 1);
					b[2] = (a[2] == 2);
					b[3] = (a[1] == 5);
					b[4] = (a[3] != 1);
					b[5] = (a[4] == 1);
					for (i = 1;i <= 5;i++)
					{
						if (a[i] == 1 || a[i] == 2)
						{
							if (b[i] == 0)
								flag = 0;
						}
						else
							if (b[i] == 1)
								flag = 0;
					}
					if (flag == 1)
					{
						for (i = 1;i <= 4;i++)
							cout<<a[i]<<" ";
						cout<<a[5];
					}
				}
			}
		}
	}
	return 0;
}