int main()
{
	int n;		//n???????
	cin >> n;
	for (int k = 0 ; k < n ; k++)
	{
		char str[100000];
		cin >> str;
		int i, j;
		for (i = 0 ; i < strlen (str); i++)
		{
			for (j = 0 ; j < strlen(str) ; j++)
			{
				if(j == i)
					continue;
				else
				{
					if(str[j] == str[i])
						 break;
				}
			}
			if (j == strlen(str))		//????????
			{
				cout << str[i] << endl;
				break;
			}
		}
		if (i == strlen(str))
			cout << "no" << endl;
	}
	cin.get();
	cin.get();
	return 0;
}