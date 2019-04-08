int main()
{
	int m, b, book[1000][27] = {0}, writer[26] = {0}, max = 0;
	char w;
	cin >> m;
	for(int i = 1; i <= m; i++)
	{
		cin >> b;
		book[i][26] = b;
		cin.get();
		while((w = cin.get()) != '\n')
		{
			writer[w - 'A']++;
			book[i][w - 'A'] = 1;
		}
	}
	for(int i = 1; i < 26; i++)
		if(writer[max] < writer[i])
			max = i;
	cout << (char) (max + 'A') << endl;
	cout << writer[max] << endl;
	for(int i = 1; i <= m; i++)
		if(book[i][max])
			cout << book[i][26] << endl;
	return 0;
}