//***********************************
//??:???    1200012772 *********
//??:????             *********
//??:2012?11?16?       *********
int main()
{
	char a[500];
	cin >> a;
	int i = 0, j = 0, flag = 1, k = 0;
	for (j = 2; j <= strlen(a); j++)
		for (i = 0;i <= (strlen(a) - j); i++)
		{
			for (k = i; k < (i + j); k++)
			{
				if(a[k] != a[i + i + j - k - 1])
				{
					flag = 0;
					break;
				}
			}
			if (flag)
			{
				for (k = i; k < (i + j); k++)
					cout << a[k];
				cout << endl;
			}
			flag = 1;
		}
		return 0;
}

