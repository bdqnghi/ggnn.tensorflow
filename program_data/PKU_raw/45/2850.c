int main()
{
	char s[50];
	char w[50];
	cin >> s >> w;
	for (int i = 0 ; ; i++)
	{
		for (int j = 0 ;;j++)
		{
			if (s[j] == 0)
			{
				cout << i;
				return 0;
			}
			else if (s[j] != w[i + j])
				break;
		}
	}
}