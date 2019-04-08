
int main()
{
	char str[100][81];
	int i,j,flag[100],n;
	cin >> n;
	cin.get();
	for (i =0;i < n;i ++)
		cin.getline(str[i],81);
	for (i = 0;i < n;i ++)
		for (j = 0;str[i][j] != '\0';j ++)
		{
			// ?????
			if (j == 0)
			{
			    if (str[i][0] == '_' || str[i][0] >= 'a' && str[i][0] <= 'z' || str[i][0] >='A' && str[i][0] <= 'Z')
				    flag[i] = 1;
			    else
				    flag[i] = 0;
			}
			// ??????_ AZ az 09
			if (flag[i] == 1)
			{
				if (str[i][j] == '_' || str[i][j] >= 'a' && str[i][j] <= 'z' || str[i][j] >='A' && str[i][j] <= 'Z' || str[i][j] >= '0' 
					&& str[i][j] <= '9')
					flag[i] = 1;
				else
					flag[i] = 0;
			}
		}
	for (i = 0;i < n;i ++)
		cout << flag[i] << endl;
	return 0;
}
