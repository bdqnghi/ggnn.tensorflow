//********************************
//*???3.n-gram???? **
//*?????? 1300017623 **
//*???2013.12.11  **
//********************************
int main()
{
	char a[500][6];
	char (*p)[6] = a;
	int b[500] = {0};
	int *q = b;
	char c[500];
	char *r = c;
	int n, m = 1, i, j, k = 0, l, flag, tag = 1, t = 1,count=0;
	cin >> n;
	cin >> c;
	for (i = 0; i <= strlen(c) - n; i++)
		for (j = 0; j < n; j++)
			*(*(p + i) + j) = *(r + i + j);
	for (i = 1; i < strlen(c) - n + 1; i++)
	{
		for (j = 0; j < i; j++)
		{
			flag = 1;
			for (k = 0; k < n; k++)
			{
				if (*(r + i + k) != *(r + j + k))
					flag = 0;
			}
			if (flag)
			{
				(*(q + j))++;
				break;
			}
		}
	}
	tag = 0;
	for (i = 500; i > 1; i--)
	{
		for (j = 0; j < strlen(c); j++)
		{
			if (*(q + j) + 1 == i)
			{
				if(t)
				{
					cout << *(q + j) + 1 << endl;
					t = 0;
				}
				for (l = 0; l < n; l++)
					cout << *(*(p + j) + l);
				cout << endl;
			}
		}
		if(!t)
			break;
	}
	if(t)
		cout << "NO"<<endl;

	return 0;
}