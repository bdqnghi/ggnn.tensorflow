int main()
{
	int n, i, k, l[1000], len = 0;
	char word[1000][45];
	char *p[1000];
	cin >> n;
	for(i = 1; i <= n; i++)
	{
		cin >>word[i];
		l[i] = strlen(word[i]);
		p[i] = word[i];
	}
	cout << word[1];
	len += l[1] + 1;
	for(i = 2; i <= n; i++)
	{
		len += l[i];
		if(len <= 80)
		{
			cout <<' ';
			for(k = 0; k < l[i]; k++)
				cout << *(p[i]+k);
			len++;
		}
		else
		{
			cout <<endl;
			for(k = 0; k < l[i]; k++)
				cout << *(p[i]+k);
			len = l[i] + 1;
		}
		
	}


	return 0;
}
