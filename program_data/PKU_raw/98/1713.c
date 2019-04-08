

int main()
{
	char word[50], *p = NULL;
	int n, k = 0, sum = 0, len, f = 1;
	cin >> n;
	while(k < n)
	{
		cin >> word;
		p = word;
		len = strlen(p);
		if(f == 1)
		{
			cout << word;
			sum = len;
			k++;
			f = 0;
			continue;
		}
		if(sum + 1 + len > 80)
		{
			cout << endl << word;
			sum = len;
			k++;
			continue;
		}
		if(sum + 1 + len <= 80)
		{
			cout << " " << word;
			sum = sum + 1 + len;
			k++;
			continue;
		}
	}
	return 0;
}