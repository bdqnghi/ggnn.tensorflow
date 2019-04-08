int main()
{
	int t, i, j, k, tf, num;
	char su[100000];
	char ch[26] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
	cin >> t;
	cin.get();
	for (i = 0; i < t; i++)
	{
		cin.getline (su, 100000);
		tf = 0;
		for (j = 0; j < 26 ; j++)
		{
			num = 0;
			for (k = 0; ; k++)
			{
				if (su[k] == ch[j])
					num = num + 1;
				if (su[k] == '\0')
					break;
			}
			if (num == 1)
			{
				cout << ch[j] << endl;
				tf = 1;
				break;
			}
		}
		if (tf == 0) 
			cout << "no" << endl;
	}
	return 0;
}