//********************************
//*????3.cpp   **
//*?????? 1300012966 **
//*???2013.12.12  **
//*???n-gram????   **
//********************************
int main()
{
	int n, k, i, j, l, t, most = 1, a[501] = { 0 }, num = 0, b[501];
	char s[501], *p;
	cin >> n;
	cin >> s;
	p = s;
	l = strlen(s);
	for (i = 0; i < l - n; i++)
	{
		if (a[i] == 0)
		{
			t = 1;
			for (j = i + 1; j <= l - n; j++)
			{
				if (a[j] == 0)
				{
					k = 0;
					while ((*(p + j + k) ==*(p + i + k)) && (k < n))
					{
						k++;
					}
					if (k == n)
					{
						t++;
						a[j] = 1;
					}
				}
			}
			if (t > most)
			{
				most = t;
				num = 1;
				b[1] = i;
			}
			else
			{
				if (t == most)
				{
					num++;
					b[num] = i;
				}
			}
		}
	}
	if (most == 1)
	{
		cout << "NO";
	}
	else
	{
		cout << most << endl;
		for (i = 1; i <= num; i++)
		{
			for (j = 0; j < n; j++)
			{
				cout << *(p + b[i] + j);
			}
			cout << endl;
		}
	}
	return 0;
}
		


			
	
