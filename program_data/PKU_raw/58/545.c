int main()
{
	int n;
	char str[100][100];
	
	cin >> n;
	cin.get();
	
	for (int i = 0; i < n; i ++)
	{
		cin.getline(str[i] , 100); 

		int f = 0;
		for (int j = 0; str[i][j] != 0; j ++)
			if (str[i][j] != '_' && ((str[i][j] > 'z') || (str[i][j] < 'A')))
				if (j == 0 || str[i][j] < '0' || str[i][j] > '9')
				{
					cout << "0" << endl;
					f = 1;
					break;
				}
		if (f == 0)
			cout << "1" << endl;
	}		

	return 0;
}
