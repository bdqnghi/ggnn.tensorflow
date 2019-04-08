
int main(){
	char word[1010][30];
	int i, n, len = 0;

	cin >> n;
	for (i = 0; i < n; i++)
		cin >> word[i];
	cout << word[0];
	len = strlen(word[0]) + 1;
	for (i = 1; i < n - 1; i++)
	{
		if (len + strlen(word[i]) < 81)
		{
			if (len == 0)
			{
				cout << word[i];
			}
			else
				cout << " " << word[i];
				len = len + strlen(word[i]) + 1;
		}
		else if (len + strlen(word[i]) > 80)
		{
			cout << endl;
			len = 0;
			i = i - 1;
		}
	}
	cout << " " << word[n - 1];
	return 0;
}
