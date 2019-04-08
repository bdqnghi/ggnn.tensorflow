// ????????????.cpp : ??????????????
//



int main()
{
	int x,n,i = 0,j = 0,k = 0,word = 0;
	char a[10000];
	cin >> n;
	cin.get();
	cin.getline(a,10000);
	char *p = a;
	for (;;)
	{
		if (word == n)
		{
			break;
		}
		while (*(p + i) != ' ' && *(p + i) != '\0')
		{
			k++;
			i++;
		}
		if (i <= 80 && i != k)
		{
			cout << ' ';	
		}
		if (i <= 80)
		{
			for (j = i - k;j <= i - 1;j++)
			{
				cout << *(p + j);
			}
			i++;
			k = 0;
			word++;
		}
		if (i > 80)
		{
			cout << endl;
			for (x = 1;x <= i - k;x++)
			{
				*p++;
			}
			i = 0;
			k = 0;
		}
	}
	return 0;
}
