int main()
{
	int n, i, j;
	int b, c,flag = 0;
	char a[81];
	cin >> n;
	cin.get();

	for(j = 1; j <= n; j++)
	{
		
		cin.getline(a, 81);
		b = (a[0] <= 'z' && a[0] >= 'a') || (a[0] <= 'Z' && a[0] >= 'A') || (a[0] == '_');
		c = (a[0] <= '9' && a[0] >= '0');
		if(b)
		{
			flag =1;
			for(i = 0; a[i] != '\0'; i++)
			{
				b = (a[i] <= 'z' && a[i] >= 'a') || (a[i] <= 'Z' && a[i] >= 'A') || (a[i] == '_');
				c = (a[i] <= '9' && a[i] >= '0');
				
				if(!(b || c))
				{
					cout << "0" << endl;
					flag = 0;
					break;
				}

			}

			if(flag)
				cout << "1" << endl;
		}
		else 
			cout << "0" << endl;
	}

	return 0;
}