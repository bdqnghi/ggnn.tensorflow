int main()
{
	char a[101];
	memset(a, ' ', sizeof(a));
	int i = 0, n;
	while((a[i] = cin.get()) != '\n')
	{
		i++;
	}
	n = i + 1;
	for(i = 0 ; i < n ; i++)
	{
		if(a[i] != ' ' || (a[i] == ' ' && a[i + 1] != ' '))
		{
			cout << a[i] ;
		}
	}
	return 0;
}

