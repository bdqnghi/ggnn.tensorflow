//**********************************
//*  ????homework_9.cpp        *
//*  ??????1200012884        * 
//*  ?????2012?10?31?      *
//*  ??????????          *
//**********************************

int main()
{
	int n, m, i, count, temp;
	int a[10000];
	cin >> n >> m;
	while (n != 0 || m != 0)
	{
		memset(a, 0, sizeof(a));
		count = n;
		i = 1;
		while (count != 1)
		{
			temp = 0;
			while (temp != m - 1)
			{
				if (a[i] == 0)
					temp++;
				i++;
				if (i > n)
					i -= n;
			}
			while (a[i] == 1)
			{
				i++;
				if (i > n)
					i -= n;
			}
			a[i] = 1;
			count--;
		}
		for (i = 1;i <= n;i++)
			if (a[i] == 0)
				cout << i << endl;
		cin >> n >> m;
	}
	return 0;
}
