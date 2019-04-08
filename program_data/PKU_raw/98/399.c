//????
int main()
{
	int n, num = 0;
	char word[41];
	cin >> n;
	for(int k = 0; k < n; k++)
	{
		cin >> word;
		if(num == 0)
		{
			cout << word;
			num += strlen(word);
			continue;
		}
		num += strlen(word) + 1;
		if(num <= 80)
		{
			cout << ' ' << word;
		}
		else
		{
			cout << endl << word;
			num = strlen(word);
		}
	}
	return 0;
}