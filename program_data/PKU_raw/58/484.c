int main()
{
	char a[100];
	int m, i,j, n;
	cin >> n;
	cin.get();
	for(i = 1; i <= n; i++)
	{
		memset(a,0,sizeof(a));
		cin.getline(a,100);
		if(a[0] == '_' || a[0] >= 'a' && a[0] <= 'z' || a[0] >= 'A' && a[0] <= 'Z')
		{
			j = 1;
			while(a[j] == '_' || a[j] >= 'a' && a[j] <= 'z' || a[j] >= 'A' && a[j] <= 'Z' || a[j] >= '0' && a[j] <= '9')
			{
				j++;
			}
			if(a[j] == '\0')
			{
				m = 1;
			}
			else
			{
				m = 0;
			}
		}
		else
		{
			m = 0;
		}
		cout << m << endl;
	}
	return 0;
}