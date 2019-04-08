//****************************************************************
// ???wusy                                                    *
// ???11,17                                                   *
// ???????????                                        *
//****************************************************************
char a[100][100001];
int main()
{
	int t, i, j, flag = 0, count[26], p;
	cin >> t;
	cin.get();
	for(i = 0; i <= t-1; i++)
		cin.getline(a[i],100001);

	for(i = 0; i <= t-1; i++)
	{
		memset(count,0,sizeof(count));
		flag = 0;

		for(j = 0; a[i][j] != '\0'; j++)
		{
			p = a[i][j] - 'a';
			count[p]++;
		}

		for(j = 0; j <= 25; j++)
		{
			if(count[a[i][j] - 'a'] == 1)
			{
				cout << a[i][j] << endl;
				flag = 1;
				break;
			}
		}

		if(flag == 0)
			cout << "no" << endl;
	}
	return 0;
}



