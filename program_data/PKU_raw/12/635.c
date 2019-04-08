//* ??
//* ??? 1100012820
//* 20111019
//*******************
int main()
{
	int a[16] = {0}, i = 0, n = 0, j, flag = 1;
	while(flag)
	{
		while(1)
		{
			cin >> a[i];
			if (a[i] == (-1))
			{
				flag = 0;
				break;
			}
			else if (a[i] == 0) 
			{
				for (j = 0; j <= i; j++)
					a[j] = 0;
				cout << n << endl;
				n = 0;
				i = 0;
				break;
			}
			else
			{
				for (j = 0; j < i; j++)
				{
					if ((a[j] == 2 * a[i]) || (a[i] == 2 * a[j]))
						n++;
				}
			}
			i++;
		}
	}
	return 0;
}

