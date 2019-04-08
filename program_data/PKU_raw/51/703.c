//**************************
//*???n-gram???? **
//*?????? 1200012888 **
//*???2013.12.11**
//**************************
int main()
{
	int n;
	cin >> n;
	char buff[500] = {0};
	char word[500][5] = {0};
	cin >> buff;
	int len = strlen(buff);
	for (int i = 0 ; i < len - n + 1 ; i++)
	{
		for (int j = 0 ; j < n ; j ++)
		{
			word[i][j] = buff[i + j];
		}
	}
	int count,max_count = 0;
	for (int i = 0 ; i < len - n + 1 ; i ++)
	{
		count = 0;
		for (int j = i ; j < len - n + 1;j ++)
		{
			if (strcmp(word[i],word[j]) == 0)
			{
				count ++;
			}
		}
		if (count > max_count)
		{
			max_count = count;
		}
	}
	if (max_count <= 1)
	{
		cout << "NO" << endl;
		return 0;
	}
	else
	{
		cout << max_count << endl;
	}
	for (int i = 0 ; i < len - n + 1 ; i ++)
	{
		count = 0;
		for (int j = i ; j < len - n + 1;j ++)
		{
			if (strcmp(word[i],word[j]) == 0)
			{
				count ++;
			}
		}
		if (count == max_count)
		{
			cout << word[i] << endl;
		}
	}
	return 0;
}