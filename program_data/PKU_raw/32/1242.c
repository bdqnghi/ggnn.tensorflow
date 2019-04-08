//********************************
//*?????                   **
//*????? 1300012848        **
//*???2013.11.16             **
//********************************
int main()
{
	const int MAX_LEN = 200;
	int n, i, j, k, nlen1, nlen2, jinwei[MAX_LEN+1] = {0};
	int num1[MAX_LEN+1], num2[MAX_LEN];
	char str1[MAX_LEN+1], str2[MAX_LEN+1];
	cin >> n;
	for (k = 1; k <= n; k++)
	{
		cin >> str1 >> str2;
		nlen1 = strlen(str1);
		nlen2 = strlen(str2);
		memset(num1,0,sizeof(num1));
		memset(num2,0,sizeof(num2));
		j = 0;
		for (i = nlen1 -1; i >= 0; i--)
		{	
			num1[j] = str1[i] - '0';
			j++;
		}
		j = 0;
		for (i = nlen2 -1; i >= 0; i--)
		{	
			num2[j] = str2[i] - '0';
			j++;
		}
		for (i = 0; i < MAX_LEN; i++)
		{
			num1[i] -= num2[i];
			if (num1[i] < 0)
			{
				num1[i] += 10;
				num1[i+1]--;
			}
		}
		i = MAX_LEN;
		while (num1[i] == 0)
			i--;
		for (; i >= 0; i--)
			cout << num1[i];
		cout << endl;
	}
	return 0;
}