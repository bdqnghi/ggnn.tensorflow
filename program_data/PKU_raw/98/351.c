int main()
{
	int n , i;
	char word[500][40];
	
	cin >> n;
	cin.get();

	if(n > 1)
		for(i = 0; i < n - 1; i++)
			cin.getline(word[i] , 40 , ' ');

	cin.getline(word[n - 1] , 40);

	char (*p)[40] = word;
	int len = strlen(*p);

	cout << *p++;

	for(i = 1; i < n; i++)
	{
		len += strlen(*p) + 1;

		if(len > 80)
		{
			cout << endl;
			cout << *p;
			len = strlen(*p);
		}
		else
			cout << " " << *p;

		p++;
	}

	return 0;
}




