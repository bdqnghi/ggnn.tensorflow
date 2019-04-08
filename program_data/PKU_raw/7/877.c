int main()
{
	char	str[300];
	char	strstr[300];
	char	repla[300];
	int		i, j, k;
	cin.getline(str, 300);
	cin.getline(strstr, 300);
	cin.getline(repla, 300);

	int		sl1 = strlen(str);
	int		sl2 = strlen(strstr);
	int		sl3 = strlen(repla);

	for (i = 0; i < sl1; i ++)
	{
		int	flag = 1;
		if(str[i] != strstr[0])
		{continue;}
		else
		{
			for (j = i; j < i + sl2; j ++)
			{
				if(str[j] != strstr[j - i])
				{
					flag = 0;
					break;
				}
			}
			if(flag == 0)
			{continue;}
			//found
			else
			{
				int vec = sl3 - sl2;
				//to move;
				for (k = sl1; k >= i + sl2; k --)
				{
					str[k + vec] = str[k];
				}
				//replace
				for (k = i; k < i + sl3; k ++)
				{
					str[k] = repla[k - i];
				}
				break;
			}
		}
	}
	cout << str << endl;
return 0;
}