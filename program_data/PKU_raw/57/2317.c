int main()
{
	int n, i, j, len;
	cin >> n;
	char a[1000];
	for(i = 1 ; i <= n ; i++)
	{
		cin >> a;
		len = strlen(a);
		j = 0;
		do
		{
			if(a[j] == 'e' && a[j + 1] == 'r' && a[j + 2] == '\0')
			{
				a[j] = '\0';
				a[j + 1] = '\0';
			}
			j++;
		}while(j < len);
		j = 0;
		do
		{
			if(a[j] == 'l' && a[j + 1] == 'y' && a[j + 2] == '\0')
			{
				a[j] = '\0';
				a[j + 1] = '\0';
			}
			j++;
		}while(j < len);
		j = 0;
		do
		{
			if(a[j] == 'i' && a[j + 1] == 'n' && a[j + 2] == 'g' && a[j + 3] == '\0')
			{
				a[j] = '\0';
				a[j + 1] = '\0';
				a[j + 2] = '\0';
			}
			j++;
		}while(j < len);
		cout << a << endl;
	}
	return 0;
}
