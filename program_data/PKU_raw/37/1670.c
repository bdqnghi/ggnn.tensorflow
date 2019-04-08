int main()
{
	int n;
	char str[100010];
	cin >> n;
	cin.get();
	for(int i = 1; i <= n; i++)
	{
		int j = 0;
		while((str[j] = cin.get()) != '\n')
			j++;
		int k;
		for(k = 0; k < j; k++)
		{
			int l;
			for(l = 0; l < j; l++)
			{
				if(str[l] == str[k] && l != k)
				{
					l = -1;
					break;
				}
			}
			if(l != -1)
			{
				cout << str[k] << endl;
				k = -1;
				break;
			}
		}
		if(k != -1)
			cout << "no\n";
	}
	return 0;
}