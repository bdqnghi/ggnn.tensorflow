//********************************
//*???3.n-gram???? **
//*?????? 1300017623 **
//*???2013.12.11  **
//********************************
int main()
{
	char a[500][6]; //????n-gram??
	char (*p)[6] = a;
	int b[500] = {0}; //????
	int *q = b;
	char c[500]; //?????
	char *r = c;
	int n, m = 1, i, j, k = 0, l, flag;
	cin >> n;
	cin >> c;
	for (i = 0; i <= strlen(c) - n; i++) //????
		for (j = 0; j < n; j++)
			*(*(p + i) + j) = *(r + i + j);
	for (i = 1; i < strlen(c) - n + 1; i++) //??????
	{
		for (j = 0; j < i; j++) //???????
		{
			flag = 1;
			for (k = 0; k < n; k++) //??????
			{
				if (*(r + i + k) != *(r + j + k))
					flag = 0;
			}
			if (flag) //???
			{
				(*(q + j))++; //??+1
				break;
			}
		}
	}
	flag = 1;
	for (i = 500; i > 1; i--) //??????????
	{
		for (j = 0; j < strlen(c); j++) //????????
		{
			if (*(q + j) + 1 == i) //????????
			{
				if(flag) //??????
				{
					cout << *(q + j) + 1 << endl;
					flag = 0;
				}
				for (l = 0; l < n; l++) //????
					cout << *(*(p + j) + l);
				cout << endl;
			}
		}
		if(!flag) //??????
			break;
	}
	if(flag) //???????NO
		cout << "NO" <<endl;

	return 0;
}