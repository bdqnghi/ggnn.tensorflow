int main()
{
	int n, i, j, flag;
	char str[100][20];
	cin >> n;
	for (i = 0; i < n; i ++)
	{
		flag = 0;
		cin >> str[i];
		if ((char)65 <= str[i][0] && str[i][0] <= (char)90 ||
			(char)97 <= str[i][0] && str[i][0] <= (char)122 ||
			str[i][0] == (char)95)
		{
			for (j = 1; j < strlen(str[i]); j ++)
			{
				if ((char)65 <= str[i][j] && str[i][j] <= (char)90 ||
					(char)97 <= str[i][j] && str[i][j] <= (char)122 ||
					(char)48 <= str[i][j] && str[i][j] <= (char)57 ||
					str[i][j] == (char)95)
					continue;
				else
				{
					cout << "no" << endl;
					flag = 1;
					break;
				}
			}
			if (flag == 0)
				cout << "yes" << endl;
		}
		else
			cout << "no" << endl;
	}
	return 0;
}
