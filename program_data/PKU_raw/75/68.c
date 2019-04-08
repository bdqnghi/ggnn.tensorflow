int main()
{
	int in[1001], out[1001], i, j, n, count[1001] = {0}, climax;
	char a;
	for (i = 0; ; i++)
	{
		cin >> in[i];
		cin.get(a);
		if (a == '\n')
			break;
	}
	for (i = 0; ; i++)
	{
		cin >> out[i];
		cin.get(a);
		if (a == '\n')
			break;
	}
	n = ++i;
	for (i = 0; i < n; i++)
	{
		for (j = in[i]; j < out[i]; j++)
			count[j]++;
	}
	climax = count[0];
	for (j = 0; j < 1000; j++)
		if (count[j] > climax)
			climax = count[j];
	cout << n << " " << climax << endl;
	return 0;
}
	

