
int main()
{
	int len;
	char word[30];
	cin >> word;
	len = strlen(word);
	cout << len;
	while(cin >> word)
	{
		len = strlen(word);
		cout << "," << len;
	}
	cout << endl;
	return 0;
}