
int main()
{
	int a[5] = {0};
	char b[5] = {0,'z','q','s','l'};
	int flag = 0;
	int i = 0;
	int j = 0;
	int t = 0;
	char tt = 0;

	for (a[1] = 10; a[1] <= 50; a[1] += 10)
	{
		for (a[2] = 10; a[2] <= 50; a[2] += 10)
		{
			if (a[1] == a[2])
				continue;
			for (a[3] = 10; a[3] <= 50; a[3] += 10)
			{
				if ((a[1] == a[3]) || (a[2] == a[3]))
					continue;
				for (a[4] = 10; a[4] <= 50; a[4] += 10)
				{
					if ((a[1] == a[4]) || (a[2] == a[4]) || (a[3] == a[4]))
						continue;
					if(((a[1] + a[2]) == (a[3] + a[4])) 
						&& ((a[1] + a[4]) > (a[3] + a[2])) && ((a[1] + a[3]) < a[2]))
					{
						flag = 1;
						break;
					}
				}
				if (flag == 1)
					break;
			}
			if (flag == 1)
				break;
		}
		if (flag == 1)
			break;
	}
	for (i = 1; i <= 3; i ++)
		for (j = 1; j <= 4 - i; j ++)
			if (a[j] < a[j + 1])
			{
				t = a[j];
				a[j] = a[j + 1];
				a[j + 1] = t;
				tt = b[j];
				b[j] = b[j + 1];
				b[j + 1] = tt;
			}
	cout << b[1] << " " << a[1] << endl << b[2] << " " << a[2] << endl
		<< b[3] << " " << a[3] << endl << b[4] << " " << a[4] << endl;

	return 0;
}
