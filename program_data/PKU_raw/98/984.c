
int main()
{
	int n;
	cin >> n;
	cin.get();
	char a[90000];
	cin.getline(a, 90000);
	int la = strlen(a);
	int i, j = 80;
	while(j < la)
	{
		for(i = j; i > j - 30; i--)
		{
			if(a[i] == ' ')
			{ a[i] = '~'; break; }
		}
		j = i + 81;
	}
	for(i = 0; i < la; i++)
	{
		if(a[i] != '~')
			cout << a[i];
		else 
			cout << endl;
	}
	return 0;
}